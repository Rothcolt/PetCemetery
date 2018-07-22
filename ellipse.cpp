#include "ellipse.h"

//! Default constructor.
Ellipse::Ellipse() :Shape()
{
    x1 = 0;
    y1 = 0;
    a = 0;
    b = 0;
}

//! Paramterized constructor with all variables.
Ellipse::Ellipse(QPainter *painter, QPen pen, QBrush brush, int id, int x1, int y1, int a, int b)
{
    this->x1 = x1;
    this->y1 = y1;
    this->a = a;
    this->b = b;
    this->pen = QPen(pen);
    this->brush = QBrush(brush);
    this->id = id;
}

//! Default destructor.
Ellipse::~Ellipse() {}

//! Draw the shape in the paint module.
void Ellipse::drawShape()
{
    painter->drawEllipse(x1, y1, a, b);
}

//! Change coordinates and move shape.
void Ellipse::moveShape()
{
    // Resets rectangle coordinates
    // rectangle.moveTo(x1, y1);
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
