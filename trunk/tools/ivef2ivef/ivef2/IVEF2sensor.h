/* 
 *  Sensor
 *
 *  Sensor is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Sep 4 16:29:00 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __SENSOR_H__
#define __SENSOR_H__

#include <QtCore>

class Sensor : public QObject { 
    Q_OBJECT

public:
    Sensor();
    Sensor(const Sensor&);
    Sensor & operator=(const Sensor&/*val*/);

    /* SenId:
       Identifier of local sensor contributing to position report */
    void setSenId(float val);
    float getSenId() const;

    /* TrkId:
       local Identifier of track from sensor contributing to position report */
    void setTrkId(float val);
    float getTrkId() const;

    /* UpdateTime:
       Date and time in UTC format (YYYY-MM-DDThh:mm:ss.sss) (subset of ISO 8601)  this position was measured. */
    void setUpdateTime(QDateTime val);
    QDateTime getUpdateTime() const;
    QString toXML();
    QString toString(QString lead);

private:
    float m_senId;
    float m_trkId;
    QDateTime m_updateTime;

}; 

#endif

