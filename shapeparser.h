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
#include "renderarea.h"
using namespace std;


//! Parsing class with all library inclusions.
class ShapeParser {
public:
    //! Parser for reading in shapes.
    ShapeParser();
    ~ShapeParser();             /*! Default destructor.         */
    Vector<Shape*> *ReadInShape(QString filePath);         /*! Read in shapes from a file. */
    Qt::GlobalColor setPenColor(QString value);
    Qt::PenStyle setPenStyle(QString value);
    Qt::PenCapStyle   setCapStyle(QString value);
    Qt::PenJoinStyle  setJoinStyle(QString value);
    Qt::GlobalColor   setBrushColor(QString value);
    Qt::BrushStyle    setBrushStyle(QString value);
    Qt::GlobalColor   setTextColor(QString value);
    Qt::AlignmentFlag setTextAlignment(QString value);
    QFont::Style  setTextFontStyle(QString value);
    QFont::Weight setTextFontWeight(QString value);

};

#endif // SHAPEPARSER_H
