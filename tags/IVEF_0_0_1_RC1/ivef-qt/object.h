/* 
 *  Object
 *
 *  Object is free software: you can redistribute it and/or modify
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

#ifndef __OBJECT_H__
#define __OBJECT_H__

#include <QtCore>

class Object : public QObject { 
    Q_OBJECT

public:
    Object();
    Object(const Object&);
    Object & operator=(const Object&/*val*/);

    /* FileName:
       Name of the filter. The filter can be a predefined selector or can be defined here in the future. One of the predefined selectors will be 'all' */
    void setFileName(QString val);
    QString getFileName() const;
    QString toXML();
    QString toString(QString lead);

private:
    QString m_fileName;

}; 

#endif

