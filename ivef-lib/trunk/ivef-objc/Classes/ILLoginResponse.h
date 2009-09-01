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
 *  Generated by xsd2code on Tue Sep 1 21:18:22 2009.
 **********************************************************************************
 *  Copyright 2009
 *
 */

#import <Foundation/Foundation.h>

@interface ILLoginResponse : NSObject { 
    NSString *m_msgId;
    int m_result;
    NSString *m_reason;
    bool m_reasonPresent;
}


/* MsgId:
   Corresponds to the original MsgRefId from the Login.xml message */
-(void) setMsgId:(NSString *) val;
-(NSString *) msgId;

/* Result:
   1 = Accepted 2 = Declined */
-(void) setResult:(int) val;
-(int) result;

/* Reason:
   String describing reason for declining, only used when result is "Declined" */
-(void) setReason:(NSString *) val;
-(NSString *) reason;
-(bool) hasReason;

-(void) setAttributes:(NSDictionary *)attributeDict;
-(NSDictionary *) attributes;
-(NSString *) XML;
-(NSString *) stringValue;
-(NSString *) stringValueWithLead:(NSString *) lead;
-(NSString *) encode: (NSString *) input;

@end



