
#include "object.h"

Object::Object() {

}

Object::Object(const Object &val) : QObject() {

    m_fileName = ((Object)val).getFileName();
}

Object & Object::operator=(const Object &/*val*/) {

    return *this;
}

void Object::setFileName(QString val) {

    m_fileName = val;
}

QString Object::getFileName() {

    return m_fileName;
}

QString Object::toXML() {

    QString xml = "<Object";
    xml.append(" FileName = \"" + m_fileName + "\"");
    xml.append(">\n");
    xml.append( "<Object />\n");
    return xml;
}

