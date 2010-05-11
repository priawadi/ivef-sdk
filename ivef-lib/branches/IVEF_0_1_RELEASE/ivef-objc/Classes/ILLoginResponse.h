/* 
 *  ILLoginResponse
 *
 *  ILLoginResponse is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Tue May 11 11:30:02 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>

//-----------------------------------------------------------
//! \brief       Class definition of ILLoginResponse
//!
//! 
//!

@interface ILLoginResponse : NSObject { 
    NSString *m_msgId;
    BOOL m_msgIdPresent;
    int m_result;
    BOOL m_resultPresent;
    NSString *m_reason;
    BOOL m_reasonPresent;
}


/* MsgId:
   Corresponds to the original MsgRefId from the Login.xml message */
//!Setter for MsgId
//!
-(BOOL) setMsgId:(NSString *) val;
//!Getter for MsgId
//!
-(NSString *) msgId;

/* Result:
   1 = Accepted 2 = Declined */
//!Setter for Result
//!
-(BOOL) setResult:(int) val;
//!Getter for Result
//!
-(int) result;

/* Reason:
   String describing reason for declining, only used when result is "Declined" */
//!Setter for Reason
//!
-(BOOL) setReason:(NSString *) val;
//!Getter for Reason
//!
-(NSString *) reason;
//!Test for pressence of Reason
//!
-(BOOL) hasReason;
//!Set attributes by providing a key/value dictionary
//!

-(BOOL) setAttributes:(NSDictionary *)attributeDict;
//!Get attributes as a key/value dictionary
//!
-(NSDictionary *) attributes;
//!Get a XML representation of this class
//!returns nil if not all required fields are set
//!
-(NSString *) XML;
//!Get a string representation of this class
//!
-(NSString *) stringValue;
-(NSString *) stringValueWithLead:(NSString *) lead;
//!Helper routine to encode any string to an XML escaped string
//!
-(NSString *) encode: (NSString *) input;

@end



