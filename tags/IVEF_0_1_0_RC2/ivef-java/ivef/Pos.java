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
 *  Generated by xsd2code on Fri Nov 7 12:45:53 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

package ivef;

import java.util.*;
import java.text.DateFormat;
import java.text.SimpleDateFormat;


public class Pos { 

    private double m_lat; // default value is uninitialized
    private double m_long; // default value is uninitialized

    public Pos() {

    }

    public Pos(Pos val) {

        m_lat = val.getLat();
        m_long = val.getLong();
    }

    public void setLat(double val) {

        if (val < -90)
            return;
        if (val > 90)
            return;
        m_lat = val;
    }

    public double getLat() {

        return m_lat;
    }

    public void setLong(double val) {

        if (val < -180)
            return;
        if (val > 180)
            return;
        m_long = val;
    }

    public double getLong() {

        return m_long;
    }

    public String toXML() {

        String xml = "<Pos";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'hh:mm:ss.SSS");

        xml += " Lat=\"" + m_lat + "\"";
        xml += " Long=\"" + m_long + "\"";
        xml += ">\n";
        xml += "</Pos>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "Pos\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'hh:mm:ss.SSS");

        str +=  lead + "    Lat = " + m_lat + "\n";
        str +=  lead + "    Long = " + m_long + "\n";
        return str;
    }

}