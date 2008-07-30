/* 
 *  Schema
 *
 *  Schema is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed Jul 30 09:18:32 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __SCHEMA_H__
#define __SCHEMA_H__

#include <QtCore>
#include "header.h"
#include "msg_vesseldata.h"
#include "vesseldata.h"
#include "posreport.h"
#include "staticdata.h"
#include "voyage.h"
#include "msg_loginrequest.h"
#include "loginrequest.h"
#include "msg_loginresponse.h"
#include "loginresponse.h"
#include "msg_ping.h"
#include "ping.h"
#include "msg_pong.h"
#include "pong.h"
#include "msg_serverstatus.h"
#include "serverstatus.h"
#include "msg_logout.h"
#include "logout.h"
#include "msg_servicerequest.h"
#include "servicerequest.h"
#include "pos.h"

class Schema : QObject { 

public:
    Schema();
    Schema(const Schema&);
    Schema & operator=(const Schema&/*val*/);
    void setHeader(Header val);
    Header getHeader();
    void setMSG_VesselData(MSG_VesselData val);
    MSG_VesselData getMSG_VesselData();
    void setVesselData(VesselData val);
    VesselData getVesselData();
    void setPosReport(PosReport val);
    PosReport getPosReport();
    void setStaticData(StaticData val);
    StaticData getStaticData();
    void setVoyage(Voyage val);
    Voyage getVoyage();
    void setMSG_LoginRequest(MSG_LoginRequest val);
    MSG_LoginRequest getMSG_LoginRequest();
    void setLoginRequest(LoginRequest val);
    LoginRequest getLoginRequest();
    void setMSG_LoginResponse(MSG_LoginResponse val);
    MSG_LoginResponse getMSG_LoginResponse();
    void setLoginResponse(LoginResponse val);
    LoginResponse getLoginResponse();
    void setMSG_Ping(MSG_Ping val);
    MSG_Ping getMSG_Ping();
    void setPing(Ping val);
    Ping getPing();
    void setMSG_Pong(MSG_Pong val);
    MSG_Pong getMSG_Pong();
    void setPong(Pong val);
    Pong getPong();
    void setMSG_ServerStatus(MSG_ServerStatus val);
    MSG_ServerStatus getMSG_ServerStatus();
    void setServerStatus(ServerStatus val);
    ServerStatus getServerStatus();
    void setMSG_Logout(MSG_Logout val);
    MSG_Logout getMSG_Logout();

    /* Logout:
       Logout element node */
    void setLogout(Logout val);
    Logout getLogout();
    void setMSG_ServiceRequest(MSG_ServiceRequest val);
    MSG_ServiceRequest getMSG_ServiceRequest();
    void setServiceRequest(ServiceRequest val);
    ServiceRequest getServiceRequest();
    void setPos(Pos val);
    Pos getPos();
    QString getElementFormDefault();
    QString getTargetNamespace();
    QString toXML();

private:
    Header m_header;
    MSG_VesselData m_MSG_VesselData;
    VesselData m_vesselData;
    PosReport m_posReport;
    StaticData m_staticData;
    Voyage m_voyage;
    MSG_LoginRequest m_MSG_LoginRequest;
    LoginRequest m_loginRequest;
    MSG_LoginResponse m_MSG_LoginResponse;
    LoginResponse m_loginResponse;
    MSG_Ping m_MSG_Ping;
    Ping m_ping;
    MSG_Pong m_MSG_Pong;
    Pong m_pong;
    MSG_ServerStatus m_MSG_ServerStatus;
    ServerStatus m_serverStatus;
    MSG_Logout m_MSG_Logout;
    Logout m_logout;
    MSG_ServiceRequest m_MSG_ServiceRequest;
    ServiceRequest m_serviceRequest;
    Pos m_pos;

}; 

#endif

