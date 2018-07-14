#include "ellipse.h"

Ellipse::Ellipse()
{
    rectangle.setRect(0, 0, 50, 50);
    ptr = this;
}

Ellipse::Ellipse(int x1, int y1, int w1, int h1)
{
    // Invokes Shape custom constructor
    Shape::shape(w1, h1);
    // Assigns shape ptr to Rectangle object
    ptr = this;
    // Sets the first xy-coordinates, the width, and height of the rectangle
   rectangle.setRect(x1, y1, ptr->width, ptr->height);
}

void Ellipse::drawShape()
{
    // Uses pointer to access and invoke QPainter object drawRect function
    ptr->artist.drawEllipse(rectangle);
}

void Ellipse::moveShape()
{
    // Resets rectangle coordinates
    rectangle.moveTo(x1, y1);
}

void Ellipse::calcPerimShape()
{
    float a = (static_cast<float>(ptr->width) / 2);
    float b = (static_cast<float>(ptr->height) / 2);
    float pi = 3.14159265;

    // Returns the result of the ellipse perimeter approximation by the Indian Mathematician Ramanujan
    return pi * (3 * (a + b) - sqrt((3 * a + b) * (a + 3 * b)));
}

void Ellipse::calcAreaShape()
{
    float a = (static_cast<float>(ptr->width) / 2);
    float b = (static_cast<float>(ptr->height) / 2);
    float pi = 3.14159265;
    // Returns the result of the ellipse area formula
    return a * b * pi;
}
