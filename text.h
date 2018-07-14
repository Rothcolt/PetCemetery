#ifndef TEXT_H
#define TEXT_H

#include "shape.h"

class text : public shape
{
public:
    // **** CONSTRUCTORS ***************** //
    text();
    // **** DESTRUCTOR ***************** //
    virtual ~text();
    // **** VIRTUAL ***************** //
    virtual drawShape();
    virtual moveShape();
    virtual calcPerimShape();
    virtual calcAreaShape();
    // **** ACCESSOR ***************** //
    // **** MUTATOR ***************** //
private:
    Qstring stringText; // CLASS OBJECT      : Holds string for text
    int x;              // Position Variable : Holds x-coordinate for text box
    int y;              // Position Variable : Holds y-coordinate for text box
    // Need textFontFamily, textFontStyle, and textFontWeight
};

#endif // TEXT_H
