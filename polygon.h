#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"

class Polygon: public Shape
{
public:
    // **** CONSTRUCTORS ***************** //
    Polygon();
    Polygon(int index, int x1, int y1, int x2, int y2, int x3, int y3);
    // **** DESTRUCTOR ***************** //
    virtual ~Polygon();
    // **** VIRTUAL ***************** //
    virtual void drawShape();
    virtual void moveShape();
    virtual float calcPerimShape();
    virtual float calcAreaShape();
    // **** ACCESSOR ***************** //
    // **** MUTATOR ***************** //
private:
    QPolygon polygon;                        // CLASS OBJECT : Holds polygon points
    Qt::FillRule fillRule = Qt::OddEvenFill; // QT Variable  : Holds fill rule
};

#endif // POLYGON_H
