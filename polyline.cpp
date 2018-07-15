#include "polyline.h"

Polyline::Polyline()
{
    x1 = 0;
    x2 = 0;
    x3 = 0;
    y1 = 0;
    y2 = 0;
    y3 = 0;
}

Polyline::Polyline(int xI, int yI, int xII, int yII, int xIII, int yIII)
{
    x1 = xI;
    x2 = xII;
    x3 = xIII;
    y1 = yI;
    y2 = yII;
    y3 = yIII;
}

void Polyline::drawShape()
{
    // Uses pointer to access and invoke QPainter object drawPolygone function
//    polyline.artist.drawPolyline(polygon);
}

void Polyline::moveShape()
{
    // Resets polygon coordinates
//    polygon.setPoints(3, x1, y1, x2, y2, x3, y3);
}

float Polyline::calcPerimShape()
{
    // Returns the result of the 3 distances between the 3 points
   return 0; //TEMPORARY
//    sqrt(pow((static_cast<float>(x1) + static_cast<float>(x2)), (2.0)) - pow((static_cast<float>(y1) + static_cast<float>(y2)), (2.0))) +
//    sqrt(pow((static_cast<float>(x1) + static_cast<float>(x3)), (2.0)) - pow((static_cast<float>(y1) + static_cast<float>(y3)), (2.0))) +
//    sqrt(pow((static_cast<float>(x2) + static_cast<float>(x3)), (2.0)) - pow((static_cast<float>(y2) + static_cast<float>(y3)), (2.0)));
}

float Polyline::calcAreaShape()
{
    // Area = (perimeter * apothem) / 2
    // Apothem = length from midpoint to center of the polygon
    return 0; //TEMPORARY
}
