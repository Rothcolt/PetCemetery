#include "ellipse.h"

//! Default constructor.
Ellipse::Ellipse() :Shape() {

    x1 = 0;
    y1 = 0;
    a = 0;
    b = 0;

    return;
}

//! Paramterized constructor with all variables.
Ellipse::Ellipse(QPen pen, QBrush brush, int id, int x1, int y1, int a, int b) {

    this->x1 = x1;
    this->y1 = y1;
    this->a = a;
    this->b = b;
    this->pen = QPen(pen);
    this->brush = QBrush(brush);
    this->id = id;

    return;
}

//! Default destructor.
Ellipse::~Ellipse() {

    return;
}

//! Draw the shape in the paint module.
void Ellipse::drawShape(QPainter* painter) {

    painter->drawEllipse(x1, y1, a, b);

    return;
}

//! Change coordinates and move shape.
void Ellipse::moveShape() {

    // Resets rectangle coordinates
    // rectangle.moveTo(x1, y1);

    return;
}

//! Return perimeter (not required).
/* float Ellipse::calcPerimShape() {

    float a = (static_cast<float>(ptr->width) / 2);
    float b = (static_cast<float>(ptr->height) / 2);
    float pi = 3.14159265;

    // Returns the result of the ellipse perimeter approximation by the Indian Mathematician Ramanujan
    return pi * (3 * (a + b) - sqrt((3 * a + b) * (a + 3 * b)));

} */

//! Return area (not required).
/* float Ellipse::calcAreaShape() {

    float a = (static_cast<float>(ptr->width) / 2);
    float b = (static_cast<float>(ptr->height) / 2);
    float pi = 3.14159265;

    // Returns the result of the ellipse area formula
    return a * b * pi;

} */
