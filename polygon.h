#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"

class Polygon
{
public:
    // **** CONSTRUCTORS ***************** //
    Polygon();
    // **** DESTRUCTOR ***************** //
    virtual ~Polygon();
    // **** VIRTUAL ***************** //
    virtual void drawShape();
    virtual void moveShape();
    virtual void calcPerimShape();
    virtual void calcAreaShape();
    // **** ACCESSOR ***************** //
    // **** MUTATOR ***************** //
private:
    QPolygon polygon;                        // CLASS OBJECT : Holds polygon points
    Qt::FillRule fillRule = Qt::OddEvenFill; // QT Variable  : Holds fill rule
};

#endif // POLYGON_H
