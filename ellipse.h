#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

class Ellipse: public Shape
{
public:
    // **** CONSTRUCTORS ***************** //
    Ellipse();
    Ellipse(int xI, int yI, int aI, int bI);
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
    int x1; // Position Variable : Holds x-coordinate for text box
    int y1; // Position Variable : Holds y-coordinate for text box
    int a;  // Semi major axis
    int b;  // Semi minor axis
};

#endif // ELLIPSE_H
