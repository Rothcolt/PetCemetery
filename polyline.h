#ifndef POLYLINE_H
#define POLYLINE_H

#include "shape.h"

class Polyline: public Shape
{
public:
    // **** CONSTRUCTORS ***************** //
    Polyline();
    Polyline(QPen pen, QBrush brush, int id, int x1, int y1, int x2, int y2, int x3, int y3);
    // **** DESTRUCTOR ***************** //
    virtual ~Polyline();
    // **** VIRTUAL ***************** //
    virtual void drawShape(QPainter* painter);
    virtual void moveShape();
//    virtual float calcPerimShape();
//    virtual float calcAreaShape();
private:
    int x1;
    int x2;
    int x3;
    int y1;
    int y2;
    int y3;
};

#endif // POLYLINE_H
