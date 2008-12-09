#include <iostream>
#include "httpdaemon.h"

HttpDaemon::HttpDaemon( QObject* parent, int port, QMap<int, VesselData> *trackStore ) :
QTcpServer(parent)
{ 
    m_trackStore =  trackStore;
    listen(QHostAddress::Any, port);
    if ( !isListening() ) {
        qWarning("Failed to bind to port "+port);
        exit( 1 );
    }
    // required?
    connect( this, SIGNAL(newConnection()), this, SLOT(newConnection() ) );
}

void HttpDaemon::newConnection()
{
    // When a new client connects, the server constructs a QTcpSocket and all
    // communication with the client is done over this QTcpSocket. QTcpSocket
    // works asynchronouslyl, this means that all the communication is done
    // in the two slots readClient() and discardClient().
    QTcpSocket* s = nextPendingConnection();
    connect( s, SIGNAL(readyRead()), this, SLOT(readClient()) );
    connect( s, SIGNAL(disconnected()), this, SLOT(discardClient()) );
    emit newConnect();
}

void HttpDaemon::readClient()
{
    // This slot is called when the client sent data to the server. The
    // server looks if it was a get request and sends a very simple HTML
    // document back.
    QTcpSocket* socket = (QTcpSocket*)sender();
    if ( socket->canReadLine() ) {
        QStringList tokens = QString(socket->readLine()).split( QRegExp("[ \r\n][ \r\n]*" ) );
        if ( tokens[0] == "GET" ) {
           QTextStream os( socket );
           os.setCodec( QTextCodec::codecForName("UTF-8") );

           // write the header
           os << "HTTP/1.0 200 Ok\r\n"
                "Content-Type: text/html; charset=\"utf-8\"\r\n"
                "\r\n";
           // write the content
           os << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n"
                  "<kml xmlns=\"http://www.opengis.net/kml/2.2\">\r\n"
                  "<Document>\r\n";
	   os <<  "<Style id=\"ivefDefault\">\r\n<IconStyle>\r\n<Icon>\r\n"
	          "  <href>http://maps.google.com/mapfiles/kml/shapes/ferry.png</href>\r\n"
	          "</Icon>\r\n</IconStyle>\r\n</Style>\r\n";
	   os <<  "<Style id=\"ivefRadar\">\r\n<IconStyle>\r\n<Icon>\r\n"
	          "  <href>http://maps.google.com/mapfiles/ms/micons/blue-dot.png</href>\r\n"
	          "</Icon>\r\n</IconStyle>\r\n</Style>\r\n";
	   os <<  "<Style id=\"ivefAIS\">\r\n<IconStyle>\r\n<Icon>\r\n"
	          "  <href>http://maps.google.com/mapfiles/ms/micons/yellow-dot.png</href>\r\n"
	          "</Icon>\r\n</IconStyle>\r\n</Style>\r\n";
	   os <<  "<Style id=\"ivefCombi\">\r\n<IconStyle>\r\n<Icon>\r\n"
	          "  <href>http://maps.google.com/mapfiles/ms/micons/green-dot.png</href>\r\n"
	          "</Icon>\r\n</IconStyle>\r\n</Style>\r\n";
	   os <<  "<Style id=\"ivefUnknown\">\r\n<IconStyle>\r\n<Icon>\r\n"
	          "  <href>http://maps.google.com/mapfiles/ms/micons/red-dot.png</href>\r\n"
	          "</Icon>\r\n</IconStyle>\r\n</Style>\r\n";
	   os <<  "<Folder>\r\n"
		  "  <name>IVEF Tracks</name>\r\n";

           std::cout << "Serving tracks: " << m_trackStore->count() << std::endl;
           QMapIterator<int, VesselData> i(*m_trackStore);
           while (i.hasNext()) {
                i.next();
                VesselData vessel = i.value();
   
                //QString str = vessel.toString("");
                //std::cout << str.toLatin1().data() << std::endl;

                os << "  <Placemark>\r\n"
             	      "      <name>\r\n";
            
                if ( vessel.countOfStaticDatas() > 0) {
                   StaticData plan = vessel.getStaticDataAt(0);
                   if (plan.hasShipName()) {
                      os << plan.getShipName();
                   } else {
                      os << plan.getId();
                   }
                } else {
                      os << vessel.getPosReport().getId();
                }
                os << "</name>\r\n";

                os << "<ExtendedData>\r\n";
                os << "<Data name=\"PosReport.Id\"><value>" << vessel.getPosReport().getId() << "</value></Data>\r\n";
                os << "<Data name=\"PosReport.SourceId\"><value>" << vessel.getPosReport().getSourceId() << "</value></Data>\r\n";
                os << "<Data name=\"PosReport.UpdateTime\"><value>" << vessel.getPosReport().getUpdateTime().toString("yyyy-MM-ddThh:mm:ss.zzz") << "</value></Data>\r\n";
                os << "<Data name=\"PosReport.SOG\"><value>" << vessel.getPosReport().getSOG() << "</value></Data>\r\n";
                os << "<Data name=\"PosReport.COG\"><value>" << vessel.getPosReport().getCOG() << "</value></Data>\r\n";
                if (vessel.getPosReport().hasOrientation()) os << "<Data name=\"PosReport.Orientation\"><value>" << vessel.getPosReport().getOrientation() << "</value></Data>\r\n";
                if (vessel.getPosReport().hasLength()) os << "<Data name=\"PosReport.Length\"><value>" << vessel.getPosReport().getLength() << "</value></Data>\r\n";
                if (vessel.getPosReport().hasBreadth()) os << "<Data name=\"PosReport.Breadth\"><value>" << vessel.getPosReport().getBreadth() << "</value></Data>\r\n";
                os << "<Data name=\"PosReport.Latitude\"><value>" << vessel.getPosReport().getPos().getLat() << "</value></Data>\r\n";
                os << "<Data name=\"PosReport.Longitude\"><value>" << vessel.getPosReport().getPos().getLong() << "</value></Data>\r\n";
		if (vessel.getPosReport().hasUpdSensorType()) {
			switch(vessel.getPosReport().getUpdSensorType()) {
			  case 1: os << "<Data name=\"PosReport.UpdatingSensor\"><value>Radar</value></Data>\r\n"; break;
			  case 2: os << "<Data name=\"PosReport.UpdatingSensor\"><value>AIS</value></Data>\r\n"; break;
			  case 3: os << "<Data name=\"PosReport.UpdatingSensor\"><value>Radar and AIS</value></Data>\r\n"; break;
			  default : os << "<Data name=\"PosReport.UpdatingSensor\"><value>Unknown</value></Data>\r\n"; break;
                        }
                }
		for (int i=0; i < vessel.countOfStaticDatas(); i++) {
                   StaticData plan = vessel.getStaticDataAt(i);
                   os << "<Data name=\"StaticData.Id\"><value>" << plan.getId() << "</value></Data>\r\n";
                   os << "<Data name=\"StaticData.SourceName\"><value>" << plan.getSourceName() << "</value></Data>\r\n";
                   os << "<Data name=\"StaticData.SourceType\"><value>" << plan.getSource() << "</value></Data>\r\n";
                   if (plan.hasLength()) os << "<Data name=\"StaticData.Length\"><value>" << plan.getLength() << "</value></Data>\r\n";
                   if (plan.hasBreadth()) os << "<Data name=\"StaticData.Breadth\"><value>" << plan.getBreadth() << "</value></Data>\r\n";
                   if (plan.hasShipName()) os << "<Data name=\"StaticData.ShipName\"><value>" << plan.getShipName() << "</value></Data>\r\n";
                   if (plan.hasCallsign()) os << "<Data name=\"StaticData.Callsign\"><value>" << plan.getCallsign() << "</value></Data>\r\n";
                   if (plan.hasMMSI()) os << "<Data name=\"StaticData.MMSI\"><value>" << plan.getMMSI() << "</value></Data>\r\n";
                   if (plan.hasIMO()) os << "<Data name=\"StaticData.IMO\"><value>" << plan.getIMO() << "</value></Data>\r\n";
                   if (plan.hasShipType()) os << "<Data name=\"StaticData.ShipType\"><value>" << plan.getShipType() << "</value></Data>\r\n";
                }
		for (int i=0; i < vessel.countOfVoyages(); i++) {
                   Voyage plan = vessel.getVoyageAt(i);
                   os << "<Data name=\"Voyage.Id\"><value>" << plan.getId() << "</value></Data>\r\n";
                   os << "<Data name=\"Voyage.SourceName\"><value>" << plan.getSourceName() << "</value></Data>\r\n";
                   os << "<Data name=\"Voyage.SourceType\"><value>" << plan.getSource() << "</value></Data>\r\n";
                   if (plan.hasCargoType()) os << "<Data name=\"Voyage.CargoType\"><value>" << plan.getCargoType() << "</value></Data>\r\n";
                   if (plan.hasDraught()) os << "<Data name=\"Voyage.Draught\"><value>" << plan.getDraught() << "</value></Data>\r\n";
		}
                os << "</ExtendedData>\r\n"; 


#define DRAW_AS_POINTS
#ifdef DRAW_AS_POINTS
		// display a s point 
             	os << "      <Point>\r\n"
             	      "	        <coordinates>";
                os << vessel.getPosReport().getPos().getLong();
                os << ",";
                os << vessel.getPosReport().getPos().getLat();
                os << ",0</coordinates>\r\n" // should check for altitude
             	      "	     </Point>\r\n";
#else
		// display as polygon 
                float lat = vessel.getPosReport().getPos().getLat();
                float lon = vessel.getPosReport().getPos().getLong();

		float HALF_WIDTH = 0.000353;
                float HALF_HEIGHT = 0.000249;
                float THIRD_HEIGTH = 0.000124; 
                
                if (vessel.getPosReport().hasLength() ) {
                    float length = vessel.getPosReport().getLength();
                    if (length < 10) 
                      length = 10;

                    HALF_HEIGHT *= length / 100; // is based on 100 meters
                    THIRD_HEIGTH *= length / 100; // is based on 100 meters
                }
                if (vessel.getPosReport().hasBreadth() ) {
                    float width = vessel.getPosReport().getBreadth();
                    if (width < 10) 
                      width = 10;

                    HALF_WIDTH *= width / 100; // is based on 100 meters
                }


                os << "<Polygon> <tessellate>1</tessellate> <outerBoundaryIs> <LinearRing> <coordinates>";
		if (vessel.getPosReport().hasOrientation() ) {
                // add rotation
                // x' = x cos f - y sin f
		// y' = y cos f + x sin f

		   float orient = vessel.getPosReport().getOrientation();
		   os << (lon - HALF_WIDTH) << ", " << (lat - HALF_HEIGHT) << ", 0, "; // bottom left
		   os << (lon + HALF_WIDTH) << ", " << (lat - HALF_HEIGHT) << ", 0, "; // bottom right
		   os << (lon + HALF_WIDTH) << ", " << (lat + THIRD_HEIGTH) << ", 0, "; // mid right
		   os << (lon) / sin(orient)<< ", " << (lat + HALF_HEIGHT) << ", 0, "; // mid top
		   os << (lon - HALF_WIDTH) << ", " << (lat + THIRD_HEIGTH) << ", 0, "; // mid left
                } else {
		   os << (lon - HALF_WIDTH) << ", " << (lat - HALF_HEIGHT) << ", 0, "; // bottom left
		   os << (lon + HALF_WIDTH) << ", " << (lat - HALF_HEIGHT) << ", 0, "; // bottom right
		   os << (lon + HALF_WIDTH) << ", " << (lat + THIRD_HEIGTH) << ", 0, "; // mid right
		   os << (lon) << ", " << (lat + HALF_HEIGHT) << ", 0, "; // mid top
		   os << (lon - HALF_WIDTH) << ", " << (lat + THIRD_HEIGTH) << ", 0, "; // mid left
                }

                os << "</coordinates> </LinearRing> </outerBoundaryIs> </Polygon> ";
#endif
                QString style = "#ivefUnknown"; 
		if (vessel.getPosReport().hasUpdSensorType()) {
			switch(vessel.getPosReport().getUpdSensorType()) {
			  case 1: style = "#ivefRadar"; break;
			  case 2: style = "#ivefAIS"; break;
			  case 3: style = "#ivefCombi"; break;
			  default : style = "#ivefUnknown"; break;
                        }
                }
                os << "      <styleUrl>" << style << "</styleUrl>\r\n" // should base icon on shiptype
             	      "   </Placemark>\r\n";
            }
	    os << " </Folder>\r\n"
                  "</Document>\r\n"
                  "</kml>\r\n";

            // close the connection
            socket->close();
            emit wroteToClient();
        }
    }
}

void HttpDaemon::discardClient()
{
    emit endConnect();
}