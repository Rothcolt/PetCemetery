#ifndef SHAPE_H
#define SHAPE_H

#include "Inclusion_Tools.h"

class Shape
{
public:
    // **** CONSTRUCTORS ***************** //
    Shape();
    Shape(const Shape &copyObject); // Copy constructor

    // **** DESTRUCTOR ***************** //
    virtual ~Shape();

    // **** VIRTUAL ***************** //
    virtual void drawShape(QPainter* painter) = 0;
    virtual void moveShape() = 0;
    virtual float calcPerimShape() = 0;
    virtual float calcAreaShape() = 0;
    void setArea();
    void setPerim();
    float getArea();
    float getPerim();

private:
    float area;
    float perimeter;
    QPainter artist; // CLASS OBJECT   : Draws shapes
    QPen pen;        // CLASS OBJECT   : Holds pen class
    QBrush brush;    // BRUSH VARIABLE : Holds brush class
};

#endif // SHAPE_H
