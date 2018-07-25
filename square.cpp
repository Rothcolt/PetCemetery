#include "square.h"

//! Paramterized constructor with all variables.
Square::Square(QPen pen, QBrush brush, int id, int x, int y, int length)
           :Shape(pen, brush, id)
{
    // Square variables.
    this->x = x;
    this->y = y;
    this->length = length;
}

//! Default destructor.
Square::~Square()
{

}

//! Draw the shape in the paint module.
void Square::drawShape()
{
    painter.drawRect(x, y, length, length);
    painter.drawText(x, y, 20, 20, Qt::AlignCenter, QString::number(id));
}

//! Change coordinates and move shape.
void Square::moveShape()
{
    // Resets square coordinates.
    // setPoints(3, x1, y1, x2, y2, x3, y3);
}

//! Return perimeter (not required).
/* float Square::calcPerimShape() {

    // Returns the result of the 3 distances between the 3 points.

    return
    sqrt(pow((static_cast<float>(x1) + static_cast<float>(x2)), (2.0)) - pow((static_cast<float>(y1) + static_cast<float>(y2)), (2.0))) +
    sqrt(pow((static_cast<float>(x1) + static_cast<float>(x3)), (2.0)) - pow((static_cast<float>(y1) + static_cast<float>(y3)), (2.0))) +
    sqrt(pow((static_cast<float>(x2) + static_cast<float>(x3)), (2.0)) - pow((static_cast<float>(y2) + static_cast<float>(y3)), (2.0)));

} */

//! Return area (not required).
/* float Square::calcAreaShape() {

    // Area = (perimeter * apothem) / 2
    // Apothem = length from midpoint to center of the polygon

    return 0;
} */
