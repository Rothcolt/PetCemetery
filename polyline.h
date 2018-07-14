#ifndef POLYLINE_H
#define POLYLINE_H

#include "shape.h"

class Polyline
{
public:
    // **** CONSTRUCTORS ***************** //
    Polyline();
    // **** DESTRUCTOR ***************** //
    virtual ~Polyline();
    // **** VIRTUAL ***************** //
    virtual void drawShape();
    virtual void moveShape();
    virtual void calcPerimShape();
    virtual void calcAreaShape();

    // **** ACCESSOR ***************** //
    // **** MUTATOR ***************** //

private:
    QPolygon polyline;
};

#endif // POLYLINE_H
