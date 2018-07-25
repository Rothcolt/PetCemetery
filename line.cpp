#include "line.h"

//! Paramterized constructor with all variables.
Line::Line(QPen pen, QBrush brush, int id, int x1, int y1, int x2, int y2)
       :Shape(pen, brush, id)
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
    QPoint point1 = {x1, y1};
    QPoint point2 = {x2, y2};

    painter.setPen(pen);
    painter.setBrush(brush);
//    painter.drawLine(x1, y1, x2, y2);
    painter.drawLine(point1, point2);
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
