#ifndef SHAPEPARSER_H
#define SHAPEPARSER_H

#include <QWidget>
#include <iostream>
#include <fstream>
#include <qfile.h>
#include <QTextStream>
#include "ellipse.h"
#include "line.h"
#include "polygon.h"
#include "polyline.h"
#include "rectangle.h"
#include "circle.h"
#include "square.h"
#include "text.h"
#include "vector.h"
using namespace std;


//! Parsing class with all library inclusions.
class ShapeParser {
public:

    //! Parser for reading in shapes.
    ShapeParser();
    ShapeParser(QPainter *painter);              /*! Default constructor.        */
    ~ShapeParser();             /*! Default destructor.         */
    void ReadInShape();         /*! Read in shapes from a file. */
    void drawAll();

private:
    QPainter *painter;
    Vector<Shape*> *shapes;

};

#endif // SHAPEPARSER_H
