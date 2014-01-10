
#include "IVEFSensor.h"

// Constructor
Sensor::Sensor() {

    m_senId = 0;
    m_senIdPresent = false;
    m_trkId = 0;
    m_trkIdPresent = false;
}

// copy constructor
Sensor::Sensor(const Sensor &val) : QObject() {

    m_senIdPresent = val.m_senIdPresent;
    m_senId = val.m_senId;
    m_trkIdPresent = val.m_trkIdPresent;
    m_trkId = val.m_trkId;
}

// compare
bool Sensor::operator==(const Sensor &val) {

    if (!(m_senIdPresent == val.m_senIdPresent)) return false;
    if (!(m_senId == val.m_senId)) return false;
    if (!(m_trkIdPresent == val.m_trkIdPresent)) return false;
    if (!(m_trkId == val.m_trkId)) return false;
    return true;
}

// assignement
Sensor & Sensor::operator=(const Sensor &val) {

    m_senIdPresent = val.m_senIdPresent;
    m_senId = val.m_senId;
    m_trkIdPresent = val.m_trkIdPresent;
    m_trkId = val.m_trkId;
    return *this;
}

// String encoder
QString Sensor::encode( QString str) const {

    // replace characters that are illigal in XML with their encodings
    str.replace('&', "&amp;");
    str.replace('<', "&lt;");
    str.replace('>', "&gt;");
    str.replace('"', "&quot;");
    return str;
}

// setter for Sensor
bool Sensor::setSenId(int val) {
    // check if the new value is within bounds 

    if (val < 0)
        return false;    // check if the new value is within bounds 

    if (val > 65536)
        return false;
    m_senIdPresent = true;
    m_senId = val;
      return true;
}

// getter for Sensor
int Sensor::getSenId() const {

    return m_senId;
}

// setter for Sensor
bool Sensor::setTrkId(int val) {
    // check if the new value is within bounds 

    if (val < 0)
        return false;    // check if the new value is within bounds 

    if (val > 65536)
        return false;
    m_trkIdPresent = true;
    m_trkId = val;
      return true;
}

// getter for Sensor
int Sensor::getTrkId() const {

    return m_trkId;
}

// Get XML Representation
QString Sensor::toXML() const {

    QString xml = "<Sensor";
    QString dataMember;
    // check for presence of required  attribute
    if ( m_senIdPresent) {
        xml.append(" SenId=\"" + QString::number( m_senId ) + "\"");
    } else { // required attribute not present
        return NULL;
    }
    // check for presence of required  attribute
    if ( m_trkIdPresent) {
        xml.append(" TrkId=\"" + QString::number( m_trkId ) + "\"");
    } else { // required attribute not present
        return NULL;
    }
    xml.append("/>\n");
    return xml;
}

// Get String Representation
QString Sensor::toString() {

    return toString("");
}

// Get String Representation with a lead
QString Sensor::toString(QString lead) {

    QString str = lead + "Sensor\n";
     str.append( lead + "    SenId = " + QString::number( m_senId ) + "\n");
     str.append( lead + "    TrkId = " + QString::number( m_trkId ) + "\n");
    return str;
}
