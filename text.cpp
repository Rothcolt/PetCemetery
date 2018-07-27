#include "text.h"

Text::Text(QPen pen, QBrush brush, int id, QString type, QFont font, QString text, Qt::AlignmentFlag textAlignment,
                QPoint point, int width, int height)
      : Shape(pen, brush, id, type)
{
    stringText = text;
    this->font = font;
    this->textAlignment = textAlignment;
    this->point = point;
    this->width = width;
    this->height = height;
}

Text::~Text()
{

}

void Text::drawShape()
{
    painter.setPen(pen);
    painter.setFont(font);
    painter.drawText(point.x(), point.y(), width, height, textAlignment, stringText);

    painter.setFont(QFont());
    painter.drawText(point.x(), point.y(), 20, 20, Qt::AlignCenter, QString::number(id));
}

void Text::moveShape()
{

}

void Text::setText(QString text)
{
    stringText = text;
}


void Text::setColor(Qt::GlobalColor color)
{
    textColor = color;
}

void Text::setAlignment(Qt::AlignmentFlag align)
{
    textAlignment = align;
}
