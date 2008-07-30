/* 
 *  Pos
 *
 *  Pos is free software: you can redistribute it and/or modify
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

#ifndef __POS_H__
#define __POS_H__

#include <QtCore>

class Pos : QObject { 

public:
    Pos();
    Pos(const Pos&);
    Pos & operator=(const Pos&/*val*/);

    /* Lat:
       Latitude (WGS84) in degrees. (+/- 90 degrees;
       North = positive; South = negative) Examples:
       
       -90deg (south) =   -90.0000000
       0deg0min1sec (north) =    0.0000016
       50deg50min (north)  = 50.8333333 */
    void setLat(float val);
    float getLat();

    /* Long:
       Longitude (WGS84) in degrees. (+/- 180 degrees; East = positive; West = negative). Examples:
       
       -180deg (west) =   -180.0000000
       0deg0min1sec (east) =       0.0000016 */
    void setLong(float val);
    float getLong();
    QString toXML();

private:
    float m_lat;
    float m_long;

}; 

#endif

