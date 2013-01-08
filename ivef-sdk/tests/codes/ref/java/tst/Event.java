/* 
 *  Event
 *
 *  Event is free software: you can redistribute it and/or modify
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
 *  Generated by schema2code on Tue Jan 8 23:49:45 2013.
 **********************************************************************************
 *  Copyright 2010
 *
 */

package tst;

import java.util.*;
import java.text.DecimalFormat;
import java.text.DateFormat;
import java.text.SimpleDateFormat;


public class Event { 

    private String m_areaName; // default value is uninitialized
    private boolean m_areaNamePresent;
    private String m_name; // default value is uninitialized
    private boolean m_namePresent;
    private int m_id; // default value is uninitialized
    private boolean m_idPresent;
    private double m_speed; // default value is uninitialized
    private boolean m_speedPresent;

    public Event() {

        m_areaNamePresent = false;
        m_namePresent = false;
        m_idPresent = false;
        m_speedPresent = false;
    }

    public Event(Event val) {

        m_areaName = val.getAreaName();
        if (val != null) {
            m_areaNamePresent = true;
        }
        m_name = val.getName();
        if (val != null) {
            m_namePresent = true;
        }
        m_id = val.getId();
        if (val != null) {
            m_idPresent = true;
        }
        m_speed = val.getSpeed();
        if (val != null) {
            m_speedPresent = true;
        }
    }

    public boolean setAreaName(String val) {

        if (val.length() < 1)
          return false;
        if (val.length() > 36)
          return false;
        m_areaNamePresent = true;
        m_areaName = val;
        return true;
    }

    public String getAreaName() {

        return m_areaName;
    }

    public boolean hasAreaName() {

        return m_areaNamePresent;
    }

    public boolean setName(String val) {

        if (val.length() < 1)
          return false;
        if (val.length() > 36)
          return false;
        m_namePresent = true;
        m_name = val;
        return true;
    }

    public String getName() {

        return m_name;
    }

    public boolean hasName() {

        return m_namePresent;
    }

    public boolean setId(int val) {

        if (val <= 0)
          return false;
        if (val >= 10000)
          return false;
        m_idPresent = true;
        m_id = val;
        return true;
    }

    public int getId() {

        return m_id;
    }

    public boolean hasId() {

        return m_idPresent;
    }

    public boolean setSpeed(double val) {

        if (val < 0)
          return false;
        if (val > 1000.1)
          return false;
        m_speedPresent = true;
        m_speed = val;
        return true;
    }

    public double getSpeed() {

        return m_speed;
    }

    public boolean hasSpeed() {

        return m_speedPresent;
    }

    public String toXML() {

        String xml = "<Event";
        String dataMember;        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        df.setTimeZone(TimeZone.getTimeZone("UTC"));
        DecimalFormat nf = new DecimalFormat("0.000000");

        if ( hasName() ) {
            xml += " Name=\"" + encode( m_name) + "\"";
        }
        if ( hasId() ) {
            xml += " Id=\"" + m_id + "\"";
        }
        if ( hasSpeed() ) {
            DecimalFormat nfm_speed = new DecimalFormat("0.00");
            xml += " Speed=\"" + nfm_speed.format(m_speed) + "\"";
        }
        xml += ">\n";
        if ( hasAreaName() ) {
            xml += "<AreaName>";
            xml += m_areaName;
            xml += "</AreaName>\n";
        } 
        xml += "</Event>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "Event\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        df.setTimeZone(TimeZone.getTimeZone("UTC"));
        DecimalFormat nf = new DecimalFormat("0.000000");

        if ( hasName() ) {
            str +=  lead + "    Name = " + m_name + "\n";
        }
        if ( hasId() ) {
            str +=  lead + "    Id = " + m_id + "\n";
        }
        if ( hasSpeed() ) {
            DecimalFormat nfm_speed = new DecimalFormat("0.00");
            str +=  lead + "    Speed = " + nfm_speed.format(m_speed) + "\n";
        }
        if ( hasAreaName() ) {
            str += lead + " " ;
            str += "AreaName = " ;
            str += m_areaName ;
            str += "\n" );
        return str;
    }
    public String encode( String str) {

        str = str.replaceAll("&", "&amp;");
        str = str.replaceAll("<", "&lt;");
        str = str.replaceAll(">", "&gt;");
        str = str.replaceAll("\"", "&quot;");
        return str;
    }


}
