#ifndef LINE_H
#define LINE_H

#include "shape.h"

/*! Derived from abstract base class Shape. */
class Line: public Shape {
public:

    /*! Line object, with endpoint variables.
     * Able to be drawn and moved. */

    Line();                                     /*! Default constructor.      */
    Line(QPainter* painter, QPen pen, QBrush brush, int id,        /*! Paramterized constructor  */
         int x1, int y1, int x2, int y2);       /*! with all variables.       */
    virtual ~Line();                            /*! Default destructor.       */

    virtual void drawShape();  /*! Draw the shape in the paint module. */
    virtual void moveShape();                   /*! Change coordinates and move shape.  */
/*  virtual float calcPerimShape(); */          /*! Return perimeter (not required).    */
/*  virtual float calcAreaShape(); */           /*! Return area (not required).         */

private:

    int x1;     /*! Position Variable : Holds first x-coordinate for line.  */
    int y1;     /*! Position Variable : Holds first y-coordinate for line.  */
    int x2;     /*! Position Variable : Holds second x-coordinate for line. */
    int y2;     /*! Position Variable : Holds second y-coordinate for line. */

};

#endif // LINE_H
