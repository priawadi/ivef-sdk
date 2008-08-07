/* 
 *  Area
 *
 *  Area is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Aug 7 13:51:27 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __AREA_H__
#define __AREA_H__

#include <QtCore>
#include "pos.h"

class Area : public QObject { 
    Q_OBJECT

public:
    Area();
    Area(const Area&);
    Area & operator=(const Area&/*val*/);
    void addPos(Pos val);
    Pos getPosAt(int i) const;
    int countOfPoss() const;
    QString toXML();

private:
    QVector<Pos> m_poss;

}; 

#endif

