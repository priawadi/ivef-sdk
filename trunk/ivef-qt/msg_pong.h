/* 
 *  MSG_Pong
 *
 *  MSG_Pong is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Aug 7 17:20:06 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __MSG_PONG_H__
#define __MSG_PONG_H__

#include <QtCore>
#include "header.h"
#include "body.h"

class MSG_Pong : public QObject { 
    Q_OBJECT

public:
    MSG_Pong();
    MSG_Pong(const MSG_Pong&);
    MSG_Pong & operator=(const MSG_Pong&/*val*/);
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

