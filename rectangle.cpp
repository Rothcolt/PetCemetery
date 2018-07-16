#include "rectangle.h"

Rectangle::Rectangle()
    :Shape()
{
    this->x1 = 0;
    this->y1 = 0;
    length = 0;
    width  = 0;
}

Rectangle::Rectangle(QPen pen, QBrush brush, int id, int x1, int y1, int w, int l)
{
   this->x1 = x1;
   this->y1 = y1;
   length = l;
   width  = w;
   this->id = id;
   this->pen = QPen(pen);
   this->brush = QBrush(brush);
}

Rectangle::~Rectangle()
{

}

void Rectangle::drawShape(QPainter* painter)
{
    painter->drawRect(x1, y1, width, length);
}

void Rectangle::moveShape()
{

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
