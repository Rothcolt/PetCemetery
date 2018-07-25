#ifndef SHAPE_H
#define SHAPE_H

#include "Inclusion_Tools.h"

/*! Base class for all shape objects */
class Shape {
public:

    /*! Shape object with QPainter variables.
     * Virtual functions allow shape to be drawn and moved. */

    Shape(QPen pen, QBrush brush, int id);              /*! Parameterized constructor. */
    virtual ~Shape();                                   /*! Default destructor.        */

    virtual void drawShape() = 0;      /*! Draw the shape in the paint module. */
    virtual void moveShape() = 0;                       /*! Change coordinates and move shape.  */
    QPainter &getPainter();                         /*! Getter for the QPainter object */
    QPen getPen();                                      /*! Getter for the QPen object.   */
    QBrush getBrush();                                  /*! Getter for the QBrush object. */
    int getId();                                        /*! Getter for the ID variable.   */

private:

/*    float area;      */                               /*! Shape's calculated area.      */
/*    float perimeter; */                               /*! Shape's calculated perimeter. */

protected:
    QPainter painter; // reg QPainter
    QPen pen;                                           /*! Pen used on shape.   */
    QBrush brush;                                       /*! Brush used on shape. */
    int id;                                             /*! Shape IDa.           */

};

#endif // SHAPE_H
