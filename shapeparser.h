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
#include "text.h"
using namespace std;


//! Parsing class with all library inclusions.
class ShapeParser {
public:

    //! Parser for reading in shapes.

    ShapeParser();              /*! Default constructor.        */
    ~ShapeParser();             /*! Default destructor.         */
    void ReadInShape();         /*! Read in shapes from a file. */

private:

//    QVector shapeList;

};

#endif // SHAPEPARSER_H
