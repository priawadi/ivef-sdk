######################################################################
# Automatically generated by qmake (2.01a) Wed Jul 30 09:18:51 2008
######################################################################

DESTDIR = bin
MOC_DIR = tmp/moc
OBJECTS_DIR = tmp/objects
TEMPLATE = lib
CONFIG += staticlib lib
macx {
   CONFIG += lib_bundle 
   FRAMEWORK_HEADERS.version = VERSION
   FRAMEWORK_HEADERS.files = IVEFArea.h \
           IVEFBody.h \
           IVEFHeader.h \
           IVEFItem.h \
           IVEFLoginrequest.h \
           IVEFLoginresponse.h \
           IVEFLogout.h \
           IVEFMsg_loginrequest.h \
           IVEFMsg_loginresponse.h \
           IVEFMsg_logout.h \
           IVEFMsg_ping.h \
           IVEFMsg_pong.h \
           IVEFMsg_serverstatus.h \
           IVEFMsg_servicerequest.h \
           IVEFMsg_vesseldata.h \
           IVEFObject.h \
           IVEFParser.h \
           IVEFPing.h \
           IVEFPong.h \
           IVEFPos.h \
           IVEFPosreport.h \
           IVEFSchema.h \
           IVEFServerstatus.h \
           IVEFServicerequest.h \
           IVEFStaticdata.h \
           IVEFTransmission.h \
           IVEFVesseldata.h \
           IVEFVoyage.h
   FRAMEWORK_HEADERS.path = .
   QMAKE_BUNDLE_DATA += FRAMEWORK_HEADERS
}
TARGET = ivef
DEPENDPATH += .
INCLUDEPATH += .

# Input
HEADERS += IVEFArea.h \
           IVEFBody.h \
           IVEFHeader.h \
           IVEFItem.h \
           IVEFLoginrequest.h \
           IVEFLoginresponse.h \
           IVEFLogout.h \
           IVEFMsg_loginrequest.h \
           IVEFMsg_loginresponse.h \
           IVEFMsg_logout.h \
           IVEFMsg_ping.h \
           IVEFMsg_pong.h \
           IVEFMsg_serverstatus.h \
           IVEFMsg_servicerequest.h \
           IVEFMsg_vesseldata.h \
           IVEFObject.h \
           IVEFParser.h \
           IVEFPing.h \
           IVEFPong.h \
           IVEFPos.h \
           IVEFPosreport.h \
           IVEFSchema.h \
           IVEFServerstatus.h \
           IVEFServicerequest.h \
           IVEFStaticdata.h \
           IVEFTransmission.h \
           IVEFVesseldata.h \
           IVEFVoyage.h
SOURCES += IVEFArea.cpp \
           IVEFBody.cpp \
           IVEFHeader.cpp \
           IVEFItem.cpp \
           IVEFLoginrequest.cpp \
           IVEFLoginresponse.cpp \
           IVEFLogout.cpp \
           IVEFMsg_loginrequest.cpp \
           IVEFMsg_loginresponse.cpp \
           IVEFMsg_logout.cpp \
           IVEFMsg_ping.cpp \
           IVEFMsg_pong.cpp \
           IVEFMsg_serverstatus.cpp \
           IVEFMsg_servicerequest.cpp \
           IVEFMsg_vesseldata.cpp \
           IVEFObject.cpp \
           IVEFParser.cpp \
           IVEFPing.cpp \
           IVEFPong.cpp \
           IVEFPos.cpp \
           IVEFPosreport.cpp \
           IVEFSchema.cpp \
           IVEFServerstatus.cpp \
           IVEFServicerequest.cpp \
           IVEFStaticdata.cpp \
           IVEFTransmission.cpp \
           IVEFVesseldata.cpp \
           IVEFVoyage.cpp

QT += xml