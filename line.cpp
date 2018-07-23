#include "line.h"

//! Derived from abstract base class Shape.
Line::Line() : Shape()
{
    this->x1 = 0;
    this->y1 = 0;
    this->x2 = 0;
    this->y2 = 0;
}

//! Paramterized constructor with all variables.
Line::Line(QPainter* painter, QPen pen, QBrush brush, int id, int x1, int y1, int x2, int y2)
       :Shape(painter, pen, brush, id)
{
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}

//! Default destructor.
Line::~Line()
{

}

//! Draw the shape in the paint module.
void Line::drawShape()
{
    painter->drawLine(x1, y1, x2, y2);
}

//! Change coordinates and move shape.
void Line::moveShape()
{
    // Uses line method to reset position
    // line.setLine(xI, yI, xII, yII);
}

//! Return perimeter (not required).
/* float Line::calcPerimShape() {

    // Returns the result of the distance formula
    return sqrt(pow((static_cast<float>(x1) + static_cast<float>(x2)), (2.0)) - pow((static_cast<float>(y1) + static_cast<float>(y2)), (2.0)));

} */

//! Return area (not required).
/* float Line::calcAreaShape() {

    return 0.00;
} */
