/* 
 *  Header
 *
 *  Header is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed Jan 6 14:24:23 2010.
 **********************************************************************************
 *  Copyright 2008
 *
 */

package ivef;

import java.util.*;
import java.text.DateFormat;
import java.text.SimpleDateFormat;


public class Header { 

    private String m_version; // default value is uninitialized
    private String m_msgRefId; // default value is uninitialized

    public Header() {

        m_version = "0.1.4";
    }

    public Header(Header val) {

        m_version = val.getVersion();
        m_msgRefId = val.getMsgRefId();
    }

    public void setVersion(String val) {

        m_version = val;
    }

    public String getVersion() {

        return m_version;
    }

    public void setMsgRefId(String val) {

        m_msgRefId = val;
    }

    public String getMsgRefId() {

        return m_msgRefId;
    }

    public String toXML() {

        String xml = "<Header";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'hh:mm:ss.SSSZ");

        xml += " Version=\"" + encode( m_version) + "\"";
        xml += " MsgRefId=\"" + encode( m_msgRefId) + "\"";
        xml += ">\n";
        xml += "</Header>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "Header\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'hh:mm:ss.SSSZ");

        str +=  lead + "    Version = " + m_version + "\n";
        str +=  lead + "    MsgRefId = " + m_msgRefId + "\n";
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
