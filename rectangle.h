#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

/*! Derived from abstract base class Shape. */
class Rectangle: public Shape {
public:

    /*! Rectangle object, with position, length, and width variables.
     * Able to be drawn and moved. */

    Rectangle();                                    /*! Default constructor.      */
    Rectangle(QPainter* painter, QPen pen, QBrush brush, int id,       /*! Parameterized constructor */
              int x1, int y1, int w, int l);        /*! with all variables.       */
    virtual ~Rectangle();                           /*! Default destructor.       */

    virtual void drawShape();      /*! Draw the shape in the paint module. */
    virtual void moveShape();                       /*! Change coordinates and move shape.  */
//    virtual float calcPerimShape();                 /*! Return perimeter (not required).    */
//    virtual float calcAreaShape();                  /*! Return area (not required).         */

private:
    int x1;         /*! Position Variable : Holds x-coordinate for text box. */
    int y1;         /*! Position Variable : Holds y-coordinate for text box. */
    int length;     /*! Size Variable: Hold length of the rectangle.         */
    int width;      /*! Size Variable: Hold width of the rectangle.          */
};

#endif // RECTANGLE_H
