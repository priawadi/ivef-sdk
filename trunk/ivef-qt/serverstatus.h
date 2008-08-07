/* 
 *  ServerStatus
 *
 *  ServerStatus is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Aug 7 15:52:42 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __SERVERSTATUS_H__
#define __SERVERSTATUS_H__

#include <QtCore>

class ServerStatus : public QObject { 
    Q_OBJECT

public:
    ServerStatus();
    ServerStatus(const ServerStatus&);
    ServerStatus & operator=(const ServerStatus&/*val*/);

    /* Status:
       Status of the server */
    void setStatus(QString val);
    QString getStatus() const;

    /* Details:
       Details of status */
    void setDetails(QString val);
    QString getDetails() const;
    bool hasDetails();
    QString toXML();

private:
    QString m_status;
    QString m_details;
    bool m_detailsPresent;

}; 

#endif
