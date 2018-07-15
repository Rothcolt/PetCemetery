#include "rectangle.h"

Rectangle::Rectangle()
{
    x1 = 0;
    y1 = 0;
    length = 0;
    width  = 0;
}

Rectangle::Rectangle(int xI, int yI, int w, int l)
{
   x1 = xI;
   y1 = yI;
   length = l;
   width  = w;
   setArea();
   setPerim();
}

void Rectangle::drawShape(QPainter* painter)
{
    painter->drawRect(x1, y1, width, length);
}

void Rectangle::moveShape(int x1, int y1)
{
    this->x1 = x1;
    this->y1 = y1;
}

float Rectangle::calcPerimShape()
{
    // Returns the result of (2 * width) + (2 * height)
   return (2 * static_cast<float>(width)) + (2 * static_cast<float>(length));
}

float Rectangle::calcAreaShape()
{
    // Returns the result of the width * height
   return (static_cast<float>(width) * static_cast<float>(length));
}
