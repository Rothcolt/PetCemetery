#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QBrush>
#include <QPen>
#include <QPixmap>
#include <QWidget>
#include "vector.h"

//! [0]
class RenderArea : public QWidget
{
    Q_OBJECT

public:

    RenderArea(QWidget *parent = 0);
    QSize minimumSizeHint() const override;
    QSize sizeHint() const override;
    void setShapes(Vector<Shape*> *shapes);
    Vector<Shape*>* getShapes() const;

public slots:

protected:
   void paintEvent(QPaintEvent *event) override;

private:
    Vector<Shape*> *shapes;
};
//! [0]

#endif // RENDERAREA_H
