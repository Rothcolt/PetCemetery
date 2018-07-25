#include "text.h"

Text::Text(QString text, QString fontFamily, int pointSize, Qt::GlobalColor color,
           Qt::AlignmentFlag align, QFont::Style fontStyle, QFont::Weight fontWeight):Shape(QPen(), QBrush(), -1)
{
    stringText = text;
    textFontFamily = fontFamily;
    textPointSize = pointSize;
    textColor = color;
    textAlignment = align;
    textFontStyle = fontStyle;
    textFontWeight = fontWeight;
}

Text::~Text()
{

}

void Text::drawShape()
{

}

void Text::moveShape()
{

}

void Text::setText(QString text)
{
    stringText = text;
}

void Text::setFontFamily(QString fontFamily)
{
    fontFamily = textFontFamily;
}

void Text::setPointSize(int pointSize)
{
    textPointSize = pointSize;
}

void Text::setColor(Qt::GlobalColor color)
{
    textColor = color;
}

void Text::setAlignment(Qt::AlignmentFlag align)
{
    textAlignment = align;
}

void Text::setFontStyle(QFont::Style fontStyle)
{
    textFontStyle = fontStyle;
}

void Text::setFontWeight(QFont::Weight weight)
{
    textFontWeight = weight;
}
