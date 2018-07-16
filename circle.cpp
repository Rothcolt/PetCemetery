#include "circle.h"

//! Default constructor.
Circle::Circle() : Shape() {

    x = 0;
    y = 0;
    radius = 0;

    return;
}


//! Paramterized constructor with all variables.
Circle::Circle(QPen pen, QBrush brush, int id, int xc, int yc, int r) {

    // Circle variables.
    this->x = xc;
    this->y = yc;
    this->radius = r;

    // Qpainter variables.
    this->pen = QPen(pen);
    this->brush = QBrush(brush);
    this->id = id;

    return;
}


//! Default destructor.
Circle::~Circle() {

    return;
}


//! Draw the shape in the paint module.
void Circle::drawShape(QPainter* painter) {

    // Uses pointer to access and invoke QPainter object drawPolygone function.
    // painter->drawPolygon(this, Qt::OddEvenFill);

    return;
}

//! Change coordinates and move shape.
void Circle::moveShape() {

    // Resets square coordinates.
    // setPoints(3, x1, y1, x2, y2, x3, y3);

    return;
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
