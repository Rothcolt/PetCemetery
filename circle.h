#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

/*! Derived from abstract base class Shape. */
class Circle : public Shape{
public:

    /*! Circle object, with position and radius variables.
     * Able to be drawn and moved. */

    Circle(QPen pen, QBrush brush, int id,      /*! Parameterized constructor */
           QString type, int x, int y, int radius);              /*! with all variables.       */
    virtual ~Circle();                          /*! Default destructor.       */

    virtual void drawShape();  /*! Draw the shape in the paint module. */
    virtual void moveShape();                   /*! Change coordinates and move shape.  */
/*  virtual float calcPerimShape(); */          /*! Return perimeter (not required).    */
/*  virtual float calcAreaShape();  */          /*! Return area (not required).         */

private:
    int x;         /*! Position Variable : Holds x-coordinate for text box. */
    int y;         /*! Position Variable : Holds y-coordinate for text box. */
    int radius;    /*! Size Variable: Holds the radius of the circle.       */
};

#endif // CIRCLE_H
