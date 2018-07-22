#include "shape.h"

//! Default constructor.
Shape::Shape() {

    this->id = 0;
//    this->pen.setStyle(Qt::PenStyle::SolidLine);
//    this->pen.setColor(Qt::GlobalColor::black);
//    this->pen.setWidth(10);
//    this->pen.setCapStyle(pen.capStyle());
//    this->pen.setJoinStyle(pen.joinStyle());

//    this->brush.setColor(brush.color());
//    this->brush.setStyle(brush.style());
    pen = QPen();
    brush = QBrush();

    return;
}


//! Paramterized constructor.
Shape::Shape(QPen pen, QBrush brush, int id) {

    this->id = id;
    this->pen.setStyle(pen.style());
    this->pen.setColor(pen.color());
    this->pen.setWidth(pen.width());
    this->pen.setCapStyle(pen.capStyle());
    this->pen.setJoinStyle(pen.joinStyle());

    this->brush.setColor(brush.color());
    this->brush.setStyle(brush.style());

    return;
}

//! Default destructor.
Shape::~Shape() {

    return;
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
QPen Shape::getPen() {

    return pen;
}


//! Getter for the QBrush object.
QBrush Shape::getBrush() {

    return brush;
}


//! Getter for the ID variable.
int Shape::getId() {

    return id;
}
