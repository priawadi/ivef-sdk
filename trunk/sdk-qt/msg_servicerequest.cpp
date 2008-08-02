
#include "msg_servicerequest.h"

MSG_ServiceRequest::MSG_ServiceRequest() {

}

MSG_ServiceRequest::MSG_ServiceRequest(const MSG_ServiceRequest &val) : QObject() {

    m_header = val.getHeader();
    m_body = val.getBody();
}

MSG_ServiceRequest & MSG_ServiceRequest::operator=(const MSG_ServiceRequest &/*val*/) {

    return *this;
}

void MSG_ServiceRequest::setHeader(Header val) {

    m_header = val;
}

Header MSG_ServiceRequest::getHeader() const {

    return m_header;
}

void MSG_ServiceRequest::setBody(Body val) {

    m_body = val;
}

Body MSG_ServiceRequest::getBody() const {

    return m_body;
}

QString MSG_ServiceRequest::toXML() {

    QString xml = "<MSG_ServiceRequest";
    xml.append(">\n");
    xml.append( m_header.toXML() );
    xml.append( m_body.toXML() );
    xml.append( "<MSG_ServiceRequest />\n");
    return xml;
}

