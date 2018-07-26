#include "renderarea.h"
#include "shape.h"
#include "line.h"
#include "polyline.h"
#include "polygon.h"
#include "rectangle.h"
#include "square.h"
#include "ellipse.h"
#include "circle.h"
#include "text.h"
#include <QDebug>
#include <QPainter>

//! [0]
RenderArea::RenderArea(QWidget *parent)
    : QWidget(parent)
{
    // Fill canvas background with base color (white)
    setMinimumSize(1100, 800);
    setMaximumSize(1100, 800);
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
    this->shapes = new Vector<Shape*>();
}

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

void RenderArea::setShapes(Vector<Shape *> *shapes)
{
    this->shapes = shapes;
    update();
}

void RenderArea::paintEvent(QPaintEvent * /* event */)
{
    if(shapes->size() > 0)
    {
        for(Vector<Shape*>::v_iterator it = shapes->begin(); it != shapes->end(); ++it)
        {
            if(!(*it)->getPainter().isActive())
            {
                (*it)->getPainter().begin(this);
                (*it)->getPainter().setPen((*it)->getPen());
                (*it)->getPainter().setBrush((*it)->getBrush());
                (*it)->getPainter().setRenderHint(QPainter::Antialiasing, true);
                (*it)->getPainter().save();
                (*it)->drawShape();
                (*it)->getPainter().restore();
                (*it)->getPainter().end();
            } // END - if
        } // END - for
    } // END -if

    // restores original painter state
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, false);
    painter.setPen(palette().dark().color());
    painter.setBrush(Qt::NoBrush);
    painter.drawRect(QRect(0, 0, width() - 1, height() - 1));
}



//! [13]
