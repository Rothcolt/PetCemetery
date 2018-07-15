#include "line.h"

Line::Line()
{
    line.setLine(0, 0, 50, 50);
    x1 = 0;
    y1 = 0;
    x2 = 50;
    y2 = 50;

//    ptr = this;
}

Line::Line(int xI, int yI, int xII, int yII)
{
    line.setLine(xI, yI, xII, yII);
    x1 = xI;
    y1 = yI;
    x2 = xII;
    y2 = yII;

//    ptr = this;
}

void Line::drawShape()
{
    // Uses pointer to access and invoke QPainter object drawLine function
//    ptr->artist.drawLine(line);
}

void Line::moveShape(int xI, int yI, int xII, int yII)
{
    // Uses line method to reset position
    line.setLine(xI, yI, xII, yII);
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
