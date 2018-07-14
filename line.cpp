#include "line.h"

Line::Line()
{
    line.setLine(0, 0, 50, 50);
    xI = 0;
    yI = 0;
    xII = 50;
    yII = 50;

    ptr = this;
}

Line::Line(int x1, int y1, int x2, int y2)
{
    line.setLine(x1, y1, x2, y2);
    xI = x1;
    yI = y1;
    xII = x2;
    yII = y2;

    ptr = this;
}

void Line::drawShape()
{
    // Uses pointer to access and invoke QPainter object drawLine function
    ptr->artist.drawLine(line);
}

void Line::moveShape(int x1, int y1, int x2, int y2)
{
    // Uses line method to reset position
    line.setLine(x1, y1, x2, y2);
}

float Line::calcPerimShape()
{
    // Returns the result of the distance formula
    return sqrt(pow((static_cast<float>(x1) + static_cast<float>(x2)), (2.0)) - pow((static_cast<float>(y1) + static_cast<float>(y2)), (2.0)));
}

float Line::calcAreaShape()
{
    return 0.0;
}
