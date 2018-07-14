#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle
{
public:
    // **** CONSTRUCTORS ***************** //
    Rectangle();
    // **** DESTRUCTOR ***************** //
    virtual ~Rectangle();
    // **** VIRTUAL ***************** //
    virtual void drawShape();
    virtual void moveShape();
    virtual void calcPerimShape();
    virtual void calcAreaShape();
    // **** ACCESSOR ***************** //
    // **** MUTATOR ***************** //

private:
    QRect rectangle;    // CLASS OBJECT      : Holds rectangle object
    int x;              // Position Variable : Holds x-coordinate for text box
    int y;              // Position Variable : Holds y-coordinate for text box
};

#endif // RECTANGLE_H
