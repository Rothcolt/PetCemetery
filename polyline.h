#ifndef POLYLINE_H
#define POLYLINE_H

#include "shape.h"

class Polyline: public Shape
{
public:
    // **** CONSTRUCTORS ***************** //
    Polyline();
    Polyline(int x1, int y1, int x2, int y2, int x3, int y3);
    // **** DESTRUCTOR ***************** //
    virtual ~Polyline();
    // **** VIRTUAL ***************** //
    virtual void drawShape();
    virtual void moveShape();
    virtual float calcPerimShape();
    virtual float calcAreaShape();

    // **** ACCESSOR ***************** //
    // **** MUTATOR ***************** //

private:
    QPolygon polyline;
    int x1;
    int x2;
    int x3;
    int y1;
    int y2;
    int y3;
};

#endif // POLYLINE_H
