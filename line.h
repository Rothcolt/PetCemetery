#ifndef LINE_H
#define LINE_H

#include "shape.h"

class Line
{
public:
    // **** CONSTRUCTORS ***************** //
    Line();
    Line(int xI, int yI, int xII, int yII);
    // **** DESTRUCTOR ***************** //
    virtual ~Line();
    // **** VIRTUAL ***************** //
    virtual void drawShape();
    virtual void moveShape(int xI, int yI, int xII, int yII);
    virtual float calcPerimShape();
    virtual float calcAreaShape();
    // **** ACCESSOR ***************** //
    // **** MUTATOR ***************** //

private:
    QLine line;  // CLASS OBJECT      : Holds line object
    int x1;      // Position Variable : Holds first x-coordinate for line
    int y1;      // Position Variable : Holds first y-coordinate for line
    int x2;     // Position Variable : Holds second x-coordinate for line
    int y2;     // Position Variable : Holds second y-coordinate for line

    Shape* ptr; // CLASS POINTER     : Used to access QPainter in the Shape class
};

#endif // LINE_H
