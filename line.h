#ifndef LINE_H
#define LINE_H

#include "shape.h"

class Line: public Shape
{
public:
    // **** CONSTRUCTORS ***************** //
    Line();
    Line(QPen pen, QBrush brush, int id, int x1, int y1, int x2, int y2);
    // **** DESTRUCTOR ***************** //
    virtual ~Line();
    // **** VIRTUAL ***************** //
    virtual void drawShape(QPainter* painter);
    virtual void moveShape();
//    virtual float calcPerimShape();
//    virtual float calcAreaShape();
    // **** ACCESSOR ***************** //
    // **** MUTATOR ***************** //
private:
    int x1;      // Position Variable : Holds first x-coordinate for line
    int y1;      // Position Variable : Holds first y-coordinate for line
    int x2;     // Position Variable : Holds second x-coordinate for line
    int y2;     // Position Variable : Holds second y-coordinate for line
};

#endif // LINE_H
