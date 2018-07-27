#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

/*! Derived from abstract base class Shape. */
class Square : public Shape {
public:

    /*! Square object, with position and side length variables.
     * Able to be drawn and moved. */

    Square(QPen pen, QBrush brush, int id, QString type,     /*! Parameterized constructor */
           int x, int y, int length);              /*! with all variables.       */
    virtual ~Square();                          /*! Default destructor.       */

    virtual void drawShape();  /*! Draw the shape in the paint module. */
    virtual void moveShape();                   /*! Change coordinates and move shape.  */
/*  virtual float calcPerimShape(); */          /*! Return perimeter (not required).    */
/*  virtual float calcAreaShape();  */          /*! Return area (not required).         */

private:
    int x;         /*! Position Variable : Holds x-coordinate for text box. */
    int y;         /*! Position Variable : Holds y-coordinate for text box. */
    int length;    /*! Size Variable: Hold length of each side of square.   */
};

#endif // SQUARE_H
