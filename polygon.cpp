#include "polygon.h"

Polygon::Polygon()
       :Shape()
{
    x1 = 0;
    x2 = 0;
    x3 = 0;
    y1 = 0;
    y2 = 0;
    y3 = 0;
}

Polygon::Polygon(QPen pen, QBrush brush, int id, int x1, int y1, int x2, int y2, int x3, int y3)
{
    this->x1 = x1;
    this->x2 = x2;
    this->x3 = x3;
    this->y1 = y1;
    this->y2 = y2;
    this->y3 = y3;
    this->pen = QPen(pen);
    this->brush = QBrush(brush);
    this->id = id;
}

Polygon::~Polygon()
{

}

void Polygon::drawShape(QPainter* painter)
{
    // Uses pointer to access and invoke QPainter object drawPolygone function
//    painter->drawPolygon(this, Qt::OddEvenFill);
}

void Polygon::moveShape()
{
    // Resets polygon coordinates
//    setPoints(3, x1, y1, x2, y2, x3, y3);
}

//float Polygon::calcPerimShape()
//{
//    // Returns the result of the 3 distances between the 3 points
//    return
//    sqrt(pow((static_cast<float>(x1) + static_cast<float>(x2)), (2.0)) - pow((static_cast<float>(y1) + static_cast<float>(y2)), (2.0))) +
//    sqrt(pow((static_cast<float>(x1) + static_cast<float>(x3)), (2.0)) - pow((static_cast<float>(y1) + static_cast<float>(y3)), (2.0))) +
//    sqrt(pow((static_cast<float>(x2) + static_cast<float>(x3)), (2.0)) - pow((static_cast<float>(y2) + static_cast<float>(y3)), (2.0)));

//}

//float Polygon::calcAreaShape()
//{
//    // Area = (perimeter * apothem) / 2
//    // Apothem = length from midpoint to center of the polygon
//    return 0;
//}
