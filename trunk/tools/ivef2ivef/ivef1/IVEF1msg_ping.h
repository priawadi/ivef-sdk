/* 
 *  MSG_Ping
 *
 *  MSG_Ping is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Foobar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY ); without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 **********************************************************************************
 *  WARNING: THIS CODE WAS GENERATED DO NOT MODIFY, CHANGE THE XSD INSTEAD
 *  Generated by xsd2code on Thu Sep 4 16:28:59 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __MSG_PING_H__
#define __MSG_PING_H__

#include <QtCore>
#include "IVEF1header.h"
#include "IVEF1body.h"

class MSG_Ping : public QObject { 
    Q_OBJECT

public:
    MSG_Ping();
    MSG_Ping(const MSG_Ping&);
    MSG_Ping & operator=(const MSG_Ping&/*val*/);
    void setHeader(Header val);
    Header getHeader() const;
    void setBody(Body val);
    Body getBody() const;
    QString toXML();
    QString toString(QString lead);

private:
    Header m_header;
    Body m_body;

}; 

#endif

