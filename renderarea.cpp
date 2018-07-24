#include "renderarea.h"

#include <QPainter>

//! [0]
RenderArea::RenderArea(QWidget *parent)
    : QWidget(parent)
{
    // Fill canvas background with base color (white)
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);

    QPainter *painter = new QPainter(this);

    this->parser = ShapeParser(painter);
    this->parser.ReadInShape();
}
//! [0]

//! [1]
QSize RenderArea::minimumSizeHint() const
{
    return QSize(100, 100);
}
//! [1]

//! [2]
QSize RenderArea::sizeHint() const
{
    return QSize(400, 200);
}
//! [2]

//! [3]
void RenderArea::setShape(Shape shape)
{
    this->shape = shape;
    update();
}
//! [3]

//! [4]
void RenderArea::setPen(const QPen &pen)
{
    this->pen = pen;
    update();
}
//! [4]

//! [5]
void RenderArea::setBrush(const QBrush &brush)
{
    this->brush = brush;
    update();
}
//! [5]

//! [6]
void RenderArea::setAntialiased(bool antialiased)
{
    this->antialiased = antialiased;
    update();
}
//! [6]

//! [7]
void RenderArea::setTransformed(bool transformed)
{
    this->transformed = transformed;
    update();
}
//! [7]

// **IMPORTANT**
// This function is called when you call update().
// It is responsible for drawing your shapes on the canvas.
//void RenderArea::paintEvent(QPaintEvent * /* event */)
//{
//    this->parser.drawAll();
//}
//! [13]
