/* 
 *  VesselData
 *
 *  VesselData is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed Jul 30 17:01:59 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __VESSELDATA_H__
#define __VESSELDATA_H__

#include <QtCore>
#include "posreport.h"
#include "staticdata.h"
#include "voyage.h"

class VesselData : QObject { 
    Q_OBJECT

public:
    VesselData();
    VesselData(const VesselData&);
    VesselData & operator=(const VesselData&/*val*/);
    void setPosReport(PosReport val);
    PosReport getPosReport();
    void addStaticData(StaticData val);
    StaticData getStaticDataAt(int i);
    int countOfStaticDatas();
    void addVoyage(Voyage val);
    Voyage getVoyageAt(int i);
    int countOfVoyages();
    QString toXML();

private:
    PosReport m_posReport;
    QVector<StaticData> m_staticDatas;
    QVector<Voyage> m_voyages;

}; 

#endif

