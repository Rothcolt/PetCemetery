#include "shape.h"

Shape::Shape()
{
    area = 0;
    perimeter = 0;
}

void Shape::setArea()
{
    area = calcAreaShape();
}

void Shape::setPerim()
{
    perimeter = calcPerimShape();
}

float Shape::getArea()
{
    return area;
}

float Shape::getPerim()
{
    return perimeter;
}
