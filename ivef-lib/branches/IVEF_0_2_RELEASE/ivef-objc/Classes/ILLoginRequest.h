/* 
 *  ILLoginRequest
 *
 *  ILLoginRequest is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Tue Jan 5 16:22:58 2010.
 **********************************************************************************
 *  Copyright 2009
 *
 */

#import <Foundation/Foundation.h>

@interface ILLoginRequest : NSObject { 
    int m_encryption;
    NSString *m_name;
    NSString *m_password;
}


/* Encryption:
   1 = plain 2 - 6 the 5 most common encryption 0 = custom */
-(void) setEncryption:(int) val;
-(int) encryption;

/* Name:
   Login name */
-(void) setName:(NSString *) val;
-(NSString *) name;

/* Password:
   Password value */
-(void) setPassword:(NSString *) val;
-(NSString *) password;

-(void) setAttributes:(NSDictionary *)attributeDict;
-(NSDictionary *) attributes;
-(NSString *) XML;
-(NSString *) stringValue;
-(NSString *) stringValueWithLead:(NSString *) lead;
-(NSString *) encode: (NSString *) input;

@end


