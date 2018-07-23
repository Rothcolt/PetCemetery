#include "shape.h"
#include "renderarea.h"

//! Default constructor.
Shape::Shape()
{
    this->id = 0;
    pen = QPen();
    brush = QBrush();
}


//! Paramterized constructor.
Shape::Shape(QPainter *painter, QPen pen, QBrush brush, int id)
{
    this->id = id;
    this->pen = QPen(pen);
    this->brush = QBrush(brush);
    this->painter->initFrom(painter->device());
}

//! Default destructor.
Shape::~Shape()
{

}


//! Setter for the area.
/* void Shape::setArea() {

    area = calcAreaShape();
} */


//! Setter for the perimeter.
/* void Shape::setPerim() {

    perimeter = calcPerimShape();
} */


//! Getter for the area.
/* float Shape::getArea() {

    return area;
} */


//! Getter for the perimeter.
/* float Shape::getPerim() {

    return perimeter;
} */


//! Getter for the pen style.
/* Qt::PenStyle Shape::getPenStyle() {

    return penStyle;
} */

//! Getter for the QPainter object
QPainter* Shape::getPainter()
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
