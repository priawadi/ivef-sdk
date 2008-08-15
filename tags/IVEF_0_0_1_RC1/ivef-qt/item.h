/* 
 *  Item
 *
 *  Item is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Aug 7 17:20:07 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#ifndef __ITEM_H__
#define __ITEM_H__

#include <QtCore>

class Item : public QObject { 
    Q_OBJECT

public:
    Item();
    Item(const Item&);
    Item & operator=(const Item&/*val*/);

    /* Element:
       Describes requested Vessel data element, possible values:
       1 = position
       2 = static data
       3 = voyage */
    void setElement(int val);
    int getElement() const;

    /* Field:
       Selected field. Can be 'all' or one of the items of vessel data PositionReport, Static Data  or Voyage */
    void setField(QString val);
    QString getField() const;
    QString toXML();
    QString toString(QString lead);

private:
    int m_element;
    QString m_field;

}; 

#endif

