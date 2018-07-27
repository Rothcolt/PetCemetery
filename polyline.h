#ifndef POLYLINE_H
#define POLYLINE_H

#include "shape.h"

/*! Derived from abstract base class Shape. */
class Polyline: public Shape {
public:

    /*! Polyline object, with point variables.
     * Able to be drawn and moved. */

    Polyline(QPen pen, QBrush brush, int id, QString type, int x1,        /*! Paramterized constructor  */
             int y1, int x2, int y2, int x3, int y3);       /*! with all variables.       */
    virtual ~Polyline();                                    /*! Default destructor.       */

    virtual void drawShape();              /*! Draw the shape in the paint module. */
    virtual void moveShape();                               /*! Change coordinates and move shape.  */
/*  virtual float calcPerimShape(); */                      /*! Return perimeter (not required).    */
/*  virtual float calcAreaShape();  */                      /*! Return area (not required).         */

private:

    int x1;     /*! Position Variable : Holds first x-coordinate for polyline corner.  */
    int x2;     /*! Position Variable : Holds first y-coordinate for polyline corner.  */
    int x3;     /*! Position Variable : Holds second x-coordinate for polyline corner. */
    int y1;     /*! Position Variable : Holds second y-coordinate for polyline corner. */
    int y2;     /*! Position Variable : Holds third x-coordinate for polyline corner.  */
    int y3;     /*! Position Variable : Holds third y-coordinate for polyline corner.  */

};

#endif // POLYLINE_H
