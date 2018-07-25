#include "circle.h"

//! Paramterized constructor with all variables.
Circle::Circle(QPen pen, QBrush brush, int id, int x, int y, int radius)
         :Shape(pen, brush, id)
{
    // Circle variables.
    this->x = x;
    this->y = y;
    this->radius = radius;
}


//! Default destructor.
Circle::~Circle()
{}


//! Draw the shape in the paint module.
void Circle::drawShape()
{
    QPoint points = {x, y};
    painter.drawEllipse(points, radius / 2, radius / 2);
    painter.drawText(points.x(), points.y(), 20, 20, Qt::AlignCenter, QString::number(id));
}

//! Change coordinates and move shape.
void Circle::moveShape()
{
    // Resets square coordinates.
    // setPoints(3, x1, y1, x2, y2, x3, y3);
}

//! Return perimeter (not required).
/* float Circle::calcPerimShape() {

    // Returns the result of the 3 distances between the 3 points.

    return
    sqrt(pow((static_cast<float>(x1) + static_cast<float>(x2)), (2.0)) - pow((static_cast<float>(y1) + static_cast<float>(y2)), (2.0))) +
    sqrt(pow((static_cast<float>(x1) + static_cast<float>(x3)), (2.0)) - pow((static_cast<float>(y1) + static_cast<float>(y3)), (2.0))) +
    sqrt(pow((static_cast<float>(x2) + static_cast<float>(x3)), (2.0)) - pow((static_cast<float>(y2) + static_cast<float>(y3)), (2.0)));

} */

//! Return area (not required).
/* float Circle::calcAreaShape() {

    // Area = (perimeter * apothem) / 2
    // Apothem = length from midpoint to center of the polygon

    return 0;
} */
