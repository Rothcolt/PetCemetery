#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle: public Shape
{
public:
    // **** CONSTRUCTORS ***************** //
    Rectangle();
    Rectangle(int xI, int yI, int w, int l);
    // **** DESTRUCTOR ***************** //
    virtual ~Rectangle();
    // **** VIRTUAL ***************** //
    virtual void drawShape(QPainter* painter);
    virtual void moveShape(int x1, int y1);
    virtual float calcPerimShape();
    virtual float calcAreaShape();
    // **** ACCESSOR ***************** //
    // **** MUTATOR ***************** //

private:
    int x1;     // Position Variable : Holds x-coordinate for text box
    int y1;     // Position Variable : Holds y-coordinate for text box
    int length;
    int width;
};

#endif // RECTANGLE_H
