
#include "msg_pong.h"

MSG_Pong::MSG_Pong() {

}

MSG_Pong::MSG_Pong(const MSG_Pong &val) : QObject() {

    m_header = val.getHeader();
    m_body = val.getBody();
}

MSG_Pong & MSG_Pong::operator=(const MSG_Pong &/*val*/) {

    return *this;
}

void MSG_Pong::setHeader(Header val) {

    m_header = val;
}

Header MSG_Pong::getHeader() const {

    return m_header;
}

void MSG_Pong::setBody(Body val) {

    m_body = val;
}

Body MSG_Pong::getBody() const {

    return m_body;
}

QString MSG_Pong::toXML() {

    QString xml = "<MSG_Pong";
    xml.append(">\n");
    xml.append( m_header.toXML() );
    xml.append( m_body.toXML() );
    xml.append( "<MSG_Pong />\n");
    return xml;
}

