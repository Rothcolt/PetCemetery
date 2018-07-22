#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

/*! Derived from abstract base class Shape. */
class Ellipse: public Shape {
public:

    /*! Ellipse object, with position and axis variables.
     * Able to be drawn and moved. */

    Ellipse();                                  /*! Default constructor.      */
    Ellipse(QPainter* painter, QPen pen, QBrush brush, int id,     /*! Paramterized constructor  */
            int x1, int y1, int a, int b);      /*! with all variables.       */
    virtual ~Ellipse();                         /*! Default destructor.       */

    virtual void drawShape();  /*! Draw the shape in the paint module. */
    virtual void moveShape();                   /*! Change coordinates and move shape.  */
/*  virtual float calcPerimShape(); */          /*! Return perimeter (not required).    */
/*  virtual float calcAreaShape();  */          /*! Return area (not required).         */

private:
    int x1;     /*! Position Variable : Holds x-coordinate for text box. */
    int y1;     /*! Position Variable : Holds y-coordinate for text box. */
    int a;      /*! Semi major axis - variable exclusive to ellipses.    */
    int b;      /*! Semi minor axis - variable exclusive to ellipses.    */
};

#endif // ELLIPSE_H
