#include "square.h"

//! Default constructor.
Square::Square() : Shape()
{
    x = 0;
    y = 0;
    length = 0;
}

//! Paramterized constructor with all variables.
Square::Square(QPainter* painter, QPen pen, QBrush brush, int id, int xc, int yc, int l)
{
    // Square variables.
    this->x = xc;
    this->y = yc;
    this->length = l;

    // Qpainter variables.
    this->pen = QPen(pen);
    this->brush = QBrush(brush);
    this->id = id;
}

//! Default destructor.
Square::~Square()
{

}

//! Draw the shape in the paint module.
void Square::drawShape()
{
    // Uses pointer to access and invoke QPainter object drawPolygone function.
    // painter->drawPolygon(this, Qt::OddEvenFill);
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
