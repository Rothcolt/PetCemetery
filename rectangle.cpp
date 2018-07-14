#include "rectangle.h"

Rectangle::Rectangle()
{
    rectangle.setRect(0, 0, 50, 50);
    ptr = this;
}

Rectangle::Rectangle(int x1, int y1, int w1, int h1)
{
    // Invokes Shape custom constructor
    Shape::shape(w1, h1);
    // Assigns shape ptr to Rectangle object
    ptr = this;
    // Sets the first xy-coordinates, the width, and height of the rectangle
   rectangle.setRect(x1, y1, ptr->width, ptr->height);
}

void Rectangle::drawShape()
{
    // Uses pointer to access and invoke QPainter object drawPolygone function
    ptr->artist.drawRect(x1, y1, ptr->width, ptr->height);
}

void Rectangle::moveShape()
{
    // Resets polygon coordinates
    rectangle.moveTo(x1, y1);
}

void Rectangle::calcPerimShape()
{
    // Returns the result of (2 * width) + (2 * height)
    return (2 * static_cast<float>(ptr->width)) + (2 * static_cast<float>(ptr->height));
}

void Rectangle::calcAreaShape()
{
    // Returns the result of the width * height
    return static_cast<float>(ptr->width) * static_cast<float>(ptr->height)
}
