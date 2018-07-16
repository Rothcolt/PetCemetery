#include "shape.h"

Shape::Shape()
{
    this->id = 0;
    this->pen.setStyle(Qt::PenStyle::SolidLine);
    this->pen.setColor(Qt::GlobalColor::black);
    this->pen.setWidth(10);
    this->pen.setCapStyle(pen.capStyle());
    this->pen.setJoinStyle(pen.joinStyle());

    this->brush.setColor(brush.color());
    this->brush.setStyle(brush.style());
}

Shape::Shape(QPen pen, QBrush brush, int id)
{
    this->id = id;
    this->pen.setStyle(pen.style());
    this->pen.setColor(pen.color());
    this->pen.setWidth(pen.width());
    this->pen.setCapStyle(pen.capStyle());
    this->pen.setJoinStyle(pen.joinStyle());

    this->brush.setColor(brush.color());
    this->brush.setStyle(brush.style());
}

Shape::~Shape()
{

}

//void Shape::setArea()
//{
//    area = calcAreaShape();
//}

//void Shape::setPerim()
//{
//    perimeter = calcPerimShape();
//}

//float Shape::getArea()
//{
//    return area;
//}

//float Shape::getPerim()
//{
//    return perimeter;
//}

//Qt::PenStyle Shape::getPenStyle()
//{
//    return penStyle;
//}

QPen Shape::getPen()
{
    return pen;
}

QBrush Shape::getBrush()
{
    return brush;
}

int Shape::getId()
{
    return id;
}
