#include "shape.h"
#include "renderarea.h"

//! Paramterized constructor.
Shape::Shape(QPen pen, QBrush brush, int id, QString type)
{
    this->id = id;
    this->pen = QPen(pen);
    this->brush = QBrush(brush);
    this->type = type;
}

//! Default destructor.
Shape::~Shape()
{

}

//! Getter for the QPainter object
QPainter& Shape::getPainter()
{
    return painter;
}

//! Getter for the QPen object.
QPen Shape::getPen()
{
    return pen;
}


//! Getter for the QBrush object.
QBrush Shape::getBrush()
{
    return brush;
}


//! Getter for the ID variable.
int Shape::getId()
{
    return id;
}

QString Shape::getType()
{
    return type;
}
