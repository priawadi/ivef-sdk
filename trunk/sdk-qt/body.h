/* 
 *  Body
 *
 *  Body is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Aug 7 13:51:27 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __BODY_H__
#define __BODY_H__

#include <QtCore>
#include "vesseldata.h"
#include "loginrequest.h"
#include "loginresponse.h"
#include "ping.h"
#include "pong.h"
#include "serverstatus.h"
#include "logout.h"
#include "servicerequest.h"

class Body : public QObject { 
    Q_OBJECT

public:
    Body();
    Body(const Body&);
    Body & operator=(const Body&/*val*/);
    void addVesselData(VesselData val);
    VesselData getVesselDataAt(int i) const;
    int countOfVesselDatas() const;
    void setLoginRequest(LoginRequest val);
    LoginRequest getLoginRequest() const;
    bool hasLoginRequest();
    void setLoginResponse(LoginResponse val);
    LoginResponse getLoginResponse() const;
    bool hasLoginResponse();
    void setPing(Ping val);
    Ping getPing() const;
    bool hasPing();
    void setPong(Pong val);
    Pong getPong() const;
    bool hasPong();
    void setServerStatus(ServerStatus val);
    ServerStatus getServerStatus() const;
    bool hasServerStatus();

    /* Logout:
       Logout element node */
    void setLogout(Logout val);
    Logout getLogout() const;
    bool hasLogout();
    void setServiceRequest(ServiceRequest val);
    ServiceRequest getServiceRequest() const;
    bool hasServiceRequest();
    QString toXML();

private:
    QVector<VesselData> m_vesselDatas;
    bool m_vesselDataPresent;
    LoginRequest m_loginRequest;
    bool m_loginRequestPresent;
    LoginResponse m_loginResponse;
    bool m_loginResponsePresent;
    Ping m_ping;
    bool m_pingPresent;
    Pong m_pong;
    bool m_pongPresent;
    ServerStatus m_serverStatus;
    bool m_serverStatusPresent;
    Logout m_logout;
    bool m_logoutPresent;
    ServiceRequest m_serviceRequest;
    bool m_serviceRequestPresent;

}; 

#endif

