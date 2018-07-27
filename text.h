#ifndef TEXT_H
#define TEXT_H

#include "shape.h"

class Text : public Shape
{
public:
    // **** CONSTRUCTORS ***************** //
    Text(QPen pen, QBrush brush, int id, QString type, QFont font, QString text, Qt::AlignmentFlag textAlignment,
            QPoint point, int width, int height);
    // **** DESTRUCTOR ***************** //
    virtual ~Text();
    // **** VIRTUAL ***************** //
    virtual void drawShape();
    virtual void moveShape();
    void setText(QString text);
    void setColor(Qt::GlobalColor color);
    void setAlignment(Qt::AlignmentFlag align);
protected:
    QString stringText; // CLASS OBJECT      : Holds string for text
    Qt::GlobalColor textColor;
    Qt::AlignmentFlag textAlignment;
    QPoint point;
    int width;
    int height;
    QFont font;

};

#endif // TEXT_H
