/* 
 *  PosReport
 *
 *  PosReport is free software: you can redistribute it and/or modify
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

#ifndef __POSREPORT_H__
#define __POSREPORT_H__

#include <QtCore>
#include "IVEF1pos.h"

class PosReport : public QObject { 
    Q_OBJECT

public:
    PosReport();
    PosReport(const PosReport&);
    PosReport & operator=(const PosReport&/*val*/);
    void setPos(Pos val);
    Pos getPos() const;

    /* Id:
       The identification of this track */
    void setId(int val);
    int getId() const;

    /* SourceId:
       The identification of the node who initially created this message */
    void setSourceId(int val);
    int getSourceId() const;

    /* UpdateTime:
       Date and time in ISO 8601 UTC format (YYYY-MM-DDThh:mm:ss.sss)  this position was measured. */
    void setUpdateTime(QDateTime val);
    QDateTime getUpdateTime() const;

    /* SOG:
       Speed over ground in meters per second */
    void setSOG(float val);
    float getSOG() const;

    /* COG:
       Course over ground  in degrees. (0-360) */
    void setCOG(float val);
    float getCOG() const;

    /* Lost:
       'yes' or 'no' */
    void setLost(QString val);
    QString getLost() const;

    /* RateOfTurn:
       Rate of turn in degrees per minute */
    void setRateOfTurn(float val);
    float getRateOfTurn() const;
    bool hasRateOfTurn();

    /* Orientation:
       Orientation of the target in degrees */
    void setOrientation(float val);
    float getOrientation() const;
    bool hasOrientation();

    /* Length:
       Length of the target in meter */
    void setLength(float val);
    float getLength() const;
    bool hasLength();

    /* Breadth:
       Breadth of the target in  meter */
    void setBreadth(float val);
    float getBreadth() const;
    bool hasBreadth();

    /* Altitude:
       The altitude of the target above the WGS-84 ellipsoid in meters */
    void setAltitude(float val);
    float getAltitude() const;
    bool hasAltitude();

    /* NavStatus:
       Navigation status of the target
       0 = under way using engine
       1 = at anchor
       2 = not under command
       3 = restricted manoeuvrability
       4 = constrained by her draught
       5 = moored
       6 = aground
       7 = engaged in fishing
       8 = under way sailing
       9 - 14 = reserved for future use
       15 = undefined default */
    void setNavStatus(int val);
    int getNavStatus() const;
    bool hasNavStatus();

    /* UpdSensorType:
       Type of detection or track type:
       1 = radar
       2 = ais
       3 = ais+radar
       4 = deadreckoning */
    void setUpdSensorType(int val);
    int getUpdSensorType() const;
    bool hasUpdSensorType();

    /* ATONOffPos:
       "1" or "0". Indicates whether or not the ATON is on position or not */
    void setATONOffPos(bool val);
    bool getATONOffPos() const;
    bool hasATONOffPos();
    QString toXML();
    QString toString(QString lead);

private:
    Pos m_pos;
    int m_id;
    int m_sourceId;
    QDateTime m_updateTime;
    float m_SOG;
    float m_COG;
    QString m_lost;
    float m_rateOfTurn;
    bool m_rateOfTurnPresent;
    float m_orientation;
    bool m_orientationPresent;
    float m_length;
    bool m_lengthPresent;
    float m_breadth;
    bool m_breadthPresent;
    float m_altitude;
    bool m_altitudePresent;
    int m_navStatus;
    bool m_navStatusPresent;
    int m_updSensorType;
    bool m_updSensorTypePresent;
    bool m_ATONOffPos;
    bool m_ATONOffPosPresent;

}; 

#endif

