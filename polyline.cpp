#include "polyline.h"
#include "vector.h"

//! Paramterized constructor with all variables.
Polyline::Polyline(QPen pen, QBrush brush, int id, int x1, int y1, int x2, int y2, int x3, int y3)
            :Shape(pen, brush, id)
{
    // Polyline variables.
    this->x1 = x1;
    this->x2 = x2;
    this->x3 = x3;
    this->y1 = y1;
    this->y2 = y2;
    this->y3 = y3;
}

//! Default destructor.
Polyline::~Polyline()
{

}

//! Draw the shape in the paint module.
void Polyline::drawShape()
{
    // Uses pointer to access and invoke QPainter object drawPolygone function
    QPoint p1(x1, y1);
    QPoint p2(x2, y2);
    QPoint p3(x3, y3);
    Vector<QPoint> points;

    points.push_back(p1);
    points.push_back(p2);
    points.push_back(p3);
    painter.drawPolyline(&points[0], points.size());
    painter.drawText(points[0].x(), points[0].y(), 20, 20, Qt::AlignCenter, QString::number(id));
}

//! Change coordinates and move shape.
void Polyline::moveShape()
{
    // Resets polygon coordinates
    // polygon.setPoints(3, x1, y1, x2, y2, x3, y3);
}

//! Return perimeter (not required).
/* float Polyline::calcPerimShape() {

    // Returns the result of the 3 distances between the 3 points

    return
    sqrt(pow((static_cast<float>(x1) + static_cast<float>(x2)), (2.0)) - pow((static_cast<float>(y1) + static_cast<float>(y2)), (2.0))) +
    sqrt(pow((static_cast<float>(x1) + static_cast<float>(x3)), (2.0)) - pow((static_cast<float>(y1) + static_cast<float>(y3)), (2.0))) +
    sqrt(pow((static_cast<float>(x2) + static_cast<float>(x3)), (2.0)) - pow((static_cast<float>(y2) + static_cast<float>(y3)), (2.0)));
} */


//! Return area (not required).
/* float Polyline::calcAreaShape() {

    // Area = (perimeter * apothem) / 2
    // Apothem = length from midpoint to center of the polygon

    return 0; //TEMPORARY
} */
