/* 
 *  ObjectData
 *
 *  ObjectData is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Sep 4 16:29:00 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __OBJECTDATA_H__
#define __OBJECTDATA_H__

#include <QtCore>
#include "IVEF2posreport.h"
#include "IVEF2staticdata.h"
#include "IVEF2voyage.h"

class ObjectData : public QObject { 
    Q_OBJECT

public:
    ObjectData();
    ObjectData(const ObjectData&);
    ObjectData & operator=(const ObjectData&/*val*/);
    void addPosReport(PosReport val);
    PosReport getPosReportAt(int i) const;
    int countOfPosReports() const;
    void addStaticData(StaticData val);
    StaticData getStaticDataAt(int i) const;
    int countOfStaticDatas() const;
    void addVoyage(Voyage val);
    Voyage getVoyageAt(int i) const;
    int countOfVoyages() const;

    /* Id:
       The unique identification of this object */
    void setId(int val);
    int getId() const;
    QString toXML();
    QString toString(QString lead);

private:
    QVector<PosReport> m_posReports;
    QVector<StaticData> m_staticDatas;
    QVector<Voyage> m_voyages;
    int m_id;

}; 

#endif

