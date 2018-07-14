#include "polygon.h"

Polygon::Polygon()
{
    polygon.putPoints(0, 1, 0, 0);
    ptr = this;
}

Polygon::Polygon(int index, int x1, int y1, int x2, int y2, int x3, int y3)
{
    // Puts three points down that determine the shape of the polygon
    polygon.putPoints(index, 3, x1, y1, x2, y2, x3, y3);
    // Assigns shape ptr to Polygon object
    ptr = this;
}

void Polygon::drawShape()
{
    // Uses pointer to access and invoke QPainter object drawPolygone function
    ptr->artist.drawPolygon(polygon, fillRule);
}

void Polygon::moveShape()
{
    // Resets polygon coordinates
    polygon.setPoints(3, x1, y1, x2, y2, x3, y3);
}

void Polygon::calcPerimShape()
{
    // Returns the result of the 3 distances between the 3 points
    return
    sqrt(pow((static_cast<float>(x1) + static_cast<float>(x2)), (2.0)) - pow((static_cast<float>(y1) + static_cast<float>(y2)), (2.0))) +
    sqrt(pow((static_cast<float>(x1) + static_cast<float>(x3)), (2.0)) - pow((static_cast<float>(y1) + static_cast<float>(y3)), (2.0))) +
    sqrt(pow((static_cast<float>(x2) + static_cast<float>(x3)), (2.0)) - pow((static_cast<float>(y2) + static_cast<float>(y3)), (2.0)));
}

void Polygon::calcAreaShape()
{
    // Area = (perimeter * apothem) / 2
    // Apothem = length from midpoint to center of the polygon
}
