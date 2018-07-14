#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

class Ellipse
{
public:
    // **** CONSTRUCTORS ***************** //
    Ellipse();
    // **** DESTRUCTOR ***************** //
    virtual ~Ellipse();
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

#endif // ELLIPSE_H
