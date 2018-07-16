#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"

/*! Derived from abstract base class Shape. */
class Polygon: public Shape {
public:

    /*! Polygon object, with corner variables.
     * Able to be drawn and moved. */

    Polygon();                                          /*! Default constructor.      */
    Polygon(QPen pen, QBrush brush, int id, int x1,     /*! Paramterized constructor  */
            int y1, int x2, int y2, int x3, int y3);    /*! with all variables.       */
    virtual ~Polygon();                                 /*! Default destructor.       */

    virtual void drawShape(QPainter* painter);          /*! Draw the shape in the paint module. */
    virtual void moveShape();                           /*! Change coordinates and move shape.  */
/*  virtual float calcPerimShape(); */                  /*! Return perimeter (not required).    */
/*  virtual float calcAreaShape();  */                  /*! Return area (not required).         */

private:

    int x1;     /*! Position Variable : Holds first x-coordinate for polygon corner.  */
    int x2;     /*! Position Variable : Holds first y-coordinate for polygon corner.  */
    int x3;     /*! Position Variable : Holds second x-coordinate for polygon corner. */
    int y1;     /*! Position Variable : Holds second y-coordinate for polygon corner. */
    int y2;     /*! Position Variable : Holds third x-coordinate for polygon corner.  */
    int y3;     /*! Position Variable : Holds third y-coordinate for polygon corner.  */

};

#endif // POLYGON_Ha
