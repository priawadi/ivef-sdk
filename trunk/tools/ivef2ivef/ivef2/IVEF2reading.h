/* 
 *  Reading
 *
 *  Reading is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Sep 4 16:29:01 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __READING_H__
#define __READING_H__

#include <QtCore>

class Reading : public QObject { 
    Q_OBJECT

public:
    Reading();
    Reading(const Reading&);
    Reading & operator=(const Reading&/*val*/);

    /* Id:
       Identifier of the sensor */
    void setId(int val);
    int getId() const;
    bool hasId();

    /* Type:
       Type of sensor
       
       1 =   Wind Speed, [0..100] knots
       2 =   Wind Direction [0..360] degrees
       3	=	Wind Gust [0..12] beaufort
       4	=	Air Temperature [-10..40] celsius
       5 	=	Water Temperature [-10..40] celsius
       6 	=	Wave Height [0..150] meter
       7 	=	Wave Direction [0..360] degrees
       8	=	Wave Period [0..30] sec
       9 	=	Water Level [-20..20] meter
       10 = Current Speed [0..150] kmph
       11 =	Current Direction [0..360] degrees
       12 =	Humidity [0..100] percentage	
       13 =	Air Pressure [800..1100] mbar
       14 =	Visibility [0..10000] meter
       15 =	Precipitation [0..100] mmph */
    void setType(int val);
    int getType() const;

    /* Value:
       Value of the reading */
    void setValue(float val);
    float getValue() const;
    QString toXML();
    QString toString(QString lead);

private:
    int m_id;
    bool m_idPresent;
    int m_type;
    float m_value;

}; 

#endif

