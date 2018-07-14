#ifndef SHAPE_H
#define SHAPE_H

#include "Inclusion_Tools.h"

class shape
{
public:
    // **** CONSTRUCTORS ***************** //
    shape();
    Shape(int w1, int h1);
    shape(const Shape &copyObject); // Copy constructor

    // **** DESTRUCTOR ***************** //
    virtual ~shape();

    // **** VIRTUAL ***************** //
    virtual void drawShape() = 0;
    virtual void moveShape() = 0;
    virtual int calcPerimShape() = 0;
    virtual float calcAreaShape() = 0;

private:
    QPainter artist;        // CLASS OBJECT   : Draws shapes
    int width;             // DIM   VARIABLE : Holds shape base measurement
    int height;           // DIM   VARIABLE : Holds shape height measurement
    QPen pen;               // CLASS OBJECT   : Holds pen class
    QBrush brush;           // BRUSH VARIABLE : Holds brush class
};

#endif // SHAPE_H
