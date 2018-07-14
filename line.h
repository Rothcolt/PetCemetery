#ifndef LINE_H
#define LINE_H

#include "shape.h"

class Line
{
public:
    // **** CONSTRUCTORS ***************** //
    Line();
    Line(int x1, int y1, int x2, int y2);
    // **** DESTRUCTOR ***************** //
    virtual ~Line();
    // **** VIRTUAL ***************** //
    virtual void drawShape();
    virtual void moveShape();
    virtual float calcPerimShape();
    virtual float calcAreaShape();
    // **** ACCESSOR ***************** //
    // **** MUTATOR ***************** //

private:
    QLine line;  // CLASS OBJECT      : Holds line object
    int xI;      // Position Variable : Holds first x-coordinate for line
    int yI;      // Position Variable : Holds first y-coordinate for line
    int xII;     // Position Variable : Holds second x-coordinate for line
    int yII;     // Position Variable : Holds second y-coordinate for line

    Shape* ptr; // CLASS POINTER     : Used to access QPainter in the Shape class
};

#endif // LINE_H
