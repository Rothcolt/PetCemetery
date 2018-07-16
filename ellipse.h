#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

class Ellipse: public Shape
{
public:
    // **** CONSTRUCTORS ***************** //
    Ellipse();
    Ellipse(QPen pen, QBrush brush, int id, int x1, int y1, int a, int b);
    // **** DESTRUCTOR ***************** //
    virtual ~Ellipse();
    // **** VIRTUAL ***************** //
    virtual void drawShape(QPainter* painter);
    virtual void moveShape();
//    virtual float calcPerimShape();
//    virtual float calcAreaShape();
private:
    int x1; // Position Variable : Holds x-coordinate for text box
    int y1; // Position Variable : Holds y-coordinate for text box
    int a;  // Semi major axis
    int b;  // Semi minor axis
};

#endif // ELLIPSE_H
