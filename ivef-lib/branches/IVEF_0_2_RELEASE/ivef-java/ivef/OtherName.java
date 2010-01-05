/* 
 *  OtherName
 *
 *  OtherName is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Tue Jan 5 16:22:59 2010.
 **********************************************************************************
 *  Copyright 2008
 *
 */

package ivef;

import java.util.*;
import java.text.DateFormat;
import java.text.SimpleDateFormat;


public class OtherName { 

    private String m_lang; // default value is uninitialized
    private String m_name; // default value is uninitialized

    public OtherName() {

    }

    public OtherName(OtherName val) {

        m_lang = val.getLang();
        m_name = val.getName();
    }

    public void setLang(String val) {

        m_lang = val;
    }

    public String getLang() {

        return m_lang;
    }

    public void setName(String val) {

        m_name = val;
    }

    public String getName() {

        return m_name;
    }

    public String toXML() {

        String xml = "<OtherName";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'hh:mm:ss.SSSZ");

        xml += " Lang=\"" + encode( m_lang) + "\"";
        xml += " Name=\"" + encode( m_name) + "\"";
        xml += ">\n";
        xml += "</OtherName>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "OtherName\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'hh:mm:ss.SSSZ");

        str +=  lead + "    Lang = " + m_lang + "\n";
        str +=  lead + "    Name = " + m_name + "\n";
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
