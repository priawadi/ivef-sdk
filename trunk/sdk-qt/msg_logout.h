/* 
 *  MSG_Logout
 *
 *  MSG_Logout is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed Jul 30 09:18:33 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __MSG_LOGOUT_H__
#define __MSG_LOGOUT_H__

#include <QtCore>
#include "header.h"
#include "body.h"

class MSG_Logout : QObject { 

public:
    MSG_Logout();
    MSG_Logout(const MSG_Logout&);
    MSG_Logout & operator=(const MSG_Logout&/*val*/);
    void setHeader(Header val);
    Header getHeader();
    void setBody(Body val);
    Body getBody();
    QString toXML();

private:
    Header m_header;
    Body m_body;

}; 

#endif

