#include "ellipse.h"

Ellipse::Ellipse()
{
    x1 = 0;
    y1 = 0;
    a = 0;
    b = 0;
}

Ellipse::Ellipse(int xI, int yI, int aI, int bI)
{
    x1 = xI;
    y1 = yI;
    a = aI;
    b = bI;
}

void Ellipse::drawShape()
{
    // Uses pointer to access and invoke QPainter object drawRect function
//    ptr->artist.drawEllipse(rectangle);
}

void Ellipse::moveShape()
{
    // Resets rectangle coordinates
//    rectangle.moveTo(x1, y1);
}

void Ellipse::calcPerimShape()
{
//    float a = (static_cast<float>(ptr->width) / 2);
//    float b = (static_cast<float>(ptr->height) / 2);
    float pi = 3.14159265;

    // Returns the result of the ellipse perimeter approximation by the Indian Mathematician Ramanujan
//    return pi * (3 * (a + b) - sqrt((3 * a + b) * (a + 3 * b)));
}

void Ellipse::calcAreaShape()
{
//    float a = (static_cast<float>(ptr->width) / 2);
//    float b = (static_cast<float>(ptr->height) / 2);
    float pi = 3.14159265;
    // Returns the result of the ellipse area formula
//    return a * b * pi;
}
