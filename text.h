#ifndef TEXT_H
#define TEXT_H

#include "shape.h"

class Text : public Shape
{
public:
    // **** CONSTRUCTORS ***************** //
    Text();
    Text(QString text, QString fontFamily, int pointSize, Qt::GlobalColor color,
         Qt::AlignmentFlag align, QFont::Style fontStyle, QFont::Weight fontWeight);
    // **** DESTRUCTOR ***************** //
    virtual ~Text();
    // **** VIRTUAL ***************** //
    virtual void drawShape();
    virtual void moveShape();
//    virtual calcPerimShape();
//    virtual calcAreaShape();
    void setText(QString text);
    void setFontFamily(QString fontFamily);
    void setPointSize(int pointSize);
    void setColor(Qt::GlobalColor color);
    void setAlignment(Qt::AlignmentFlag align);
    void setFontStyle(QFont::Style fontStyle);
    void setFontWeight(QFont::Weight weight);
protected:
    QString stringText; // CLASS OBJECT      : Holds string for text
    QString textFontFamily;
    int textPointSize;
    Qt::GlobalColor textColor;
    Qt::AlignmentFlag textAlignment;
    QFont::Style textFontStyle;
    QFont::Weight textFontWeight;
};

#endif // TEXT_H
