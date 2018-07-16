#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"

class Polygon: public Shape
{
public:
    // **** CONSTRUCTORS ***************** //
    Polygon();
    Polygon(QPen pen, QBrush brush, int id, int x1, int y1, int x2, int y2, int x3, int y3);
    // **** DESTRUCTOR ***************** //
    virtual ~Polygon();
    // **** VIRTUAL ***************** //
    virtual void drawShape(QPainter* painter);
    virtual void moveShape();
//    virtual float calcPerimShape();
//    virtual float calcAreaShape();
    // **** ACCESSOR ***************** //
    // **** MUTATOR ***************** //
private:
    int x1;
    int x2;
    int x3;
    int y1;
    int y2;
    int y3;
};

#endif // POLYGON_Ha
