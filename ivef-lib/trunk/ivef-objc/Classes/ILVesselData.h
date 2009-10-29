/* 
 *  ILVesselData
 *
 *  ILVesselData is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Oct 29 15:39:40 2009.
 **********************************************************************************
 *  Copyright 2009
 *
 */

#import <Foundation/Foundation.h>
#import "ILPosReport.h"
#import "ILStaticData.h"
#import "ILVoyage.h"
#import "ILTaggedItem.h"

@interface ILVesselData : NSObject { 
    ILPosReport *m_posReport;
    NSMutableArray *m_staticDatas;
    NSMutableArray *m_voyages;
    NSMutableArray *m_taggedItems;
}

-(void) setPosReport:(ILPosReport *) val;
-(ILPosReport *) posReport;
-(void) addStaticData:(ILStaticData *) val;
-(ILStaticData *) staticDataAt:(int) i;
-(int) countOfStaticDatas;
-(NSArray *) staticDatas;
-(void) addVoyage:(ILVoyage *) val;
-(ILVoyage *) voyageAt:(int) i;
-(int) countOfVoyages;
-(NSArray *) voyages;
-(void) addTaggedItem:(ILTaggedItem *) val;
-(ILTaggedItem *) taggedItemAt:(int) i;
-(int) countOfTaggedItems;
-(NSArray *) taggedItems;

-(void) setAttributes:(NSDictionary *)attributeDict;
-(NSDictionary *) attributes;
-(NSString *) XML;
-(NSString *) stringValue;
-(NSString *) stringValueWithLead:(NSString *) lead;
-(NSString *) encode: (NSString *) input;

@end



