/* 
 *  LoginRequest
 *
 *  LoginRequest is free software: you can redistribute it and/or modify
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

#ifndef __LOGINREQUEST_H__
#define __LOGINREQUEST_H__

#include <QtCore>

class LoginRequest : public QObject { 
    Q_OBJECT

public:
    LoginRequest();
    LoginRequest(const LoginRequest&);
    LoginRequest & operator=(const LoginRequest&/*val*/);

    /* Name:
       Login name */
    void setName(QString val);
    QString getName() const;

    /* Password:
       Password value */
    void setPassword(QString val);
    QString getPassword() const;

    /* Encryption:
       1 = plain 2 = md5 */
    void setEncryption(int val);
    int getEncryption() const;
    QString toXML();
    QString toString(QString lead);

private:
    QString m_name;
    QString m_password;
    int m_encryption;

}; 

#endif

