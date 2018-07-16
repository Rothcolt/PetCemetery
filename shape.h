#ifndef SHAPE_H
#define SHAPE_H

#include "Inclusion_Tools.h"

class Shape
{
public:
    // **** CONSTRUCTORS ***************** //
    Shape();
    Shape(QPen pen, QBrush brush, int id);

    // **** DESTRUCTOR ***************** //
    virtual ~Shape();

    // **** VIRTUAL ***************** //
    virtual void drawShape(QPainter* painter) = 0;
    virtual void moveShape() = 0;
//    virtual float calcPerimShape() = 0;
//    virtual float calcAreaShape() = 0;

    // Setters
//    void setArea();
//    void setPerim();

    // Getters
//    float getArea();
//    float getPerim();
    QPen getPen();
    QBrush getBrush();
    int getId();
private:
//    float area;      // Shape's calculated area
//    float perimeter; // Shape's caluclated perimeter
protected:
    QPen pen;              // Pen used on shape
    QBrush brush;          // Brush used on shape
    int id;                // Shape IDa
};

#endif // SHAPE_H
