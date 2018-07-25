#include "rectangle.h"

//! Paramterized constructor with all variables.
Rectangle::Rectangle(QPen pen, QBrush brush, int id, int x1, int y1, int w, int l)
               :Shape(pen, brush, id)
{
   this->x1 = x1;
   this->y1 = y1;
   length = l;
   width  = w;
}

//! Default destructor.
Rectangle::~Rectangle()
{

}

//! Draw the shape in the paint module.
void Rectangle::drawShape()
{
    painter.drawRect(x1, y1, width, length);
    painter.drawText(x1, y1, 20, 20, Qt::AlignCenter, QString::number(id));
}

//! Change coordinates and move shape.
void Rectangle::moveShape()
{

}

////! Return perimeter (not required).
//float Rectangle::calcPerimShape() {

//    // Returns the result of (2 * width) + (2 * height)
//    return (2 * static_cast<float>(width)) + (2 * static_cast<float>(length));
//}


////! Return area (not required).
//float Rectangle::calcAreaShape() {

//    // Returns the result of the width * height
//    return (static_cast<float>(width) * static_cast<float>(length));
//}
