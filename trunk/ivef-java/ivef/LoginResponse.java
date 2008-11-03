/* 
 *  LoginResponse
 *
 *  LoginResponse is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Mon Nov 3 10:56:24 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

package ivef;

import java.util.*;
import java.text.DateFormat;
import java.text.SimpleDateFormat;


public class LoginResponse { 

    private String m_msgId; // default value is uninitialized
    private int m_result; // default value is uninitialized
    private String m_reason; // default value is uninitialized
    private boolean m_reasonPresent;

    public LoginResponse() {

        m_reasonPresent = false;
    }

    public LoginResponse(LoginResponse val) {

        m_msgId = val.getMsgId();
        m_result = val.getResult();
        m_reasonPresent = val.hasReason();
        m_reason = val.getReason();
    }

    public void setMsgId(String val) {

        m_msgId = val;
    }

    public String getMsgId() {

        return m_msgId;
    }

    public void setResult(int val) {

        if ( ( val != 1 ) &&
             ( val != 2 ) )
            return;
        m_result = val;
    }

    public int getResult() {

        return m_result;
    }

    public void setReason(String val) {

        m_reasonPresent = true;
        m_reason = val;
    }

    public String getReason() {

        return m_reason;
    }

    public boolean hasReason() {

        return m_reasonPresent;
    }

    public String toXML() {

        String xml = "<LoginResponse";
        DateFormat df = new SimpleDateFormat("yyyy-MM-ddhh:mm:ss.zzz");

        xml += " MsgId=\"" + m_msgId + "\"";
        xml += " Result=\"" + m_result + "\"";
        if ( hasReason() ) {
            xml += " Reason=\"" + m_reason + "\"";
        }
        xml += ">\n";
        xml += "</LoginResponse>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "LoginResponse\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-ddhh:mm:ss.zzz");

        str +=  lead + "    MsgId = " + m_msgId + "\n";
        str +=  lead + "    Result = " + m_result + "\n";
        if ( hasReason() ) {
            str +=  lead + "    Reason = " + m_reason + "\n";
        }
        return str;
    }

}
