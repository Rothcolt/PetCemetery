#include "text.h"

Text::Text()
{
   stringText = " ";
   textFontFamily = "Comic Sans MS";
   textPointSize = 10;
   textColor = Qt::GlobalColor::black;
   textAlignment = Qt::AlignmentFlag::AlignLeft;
   textFontStyle = QFont::Style::StyleNormal;
   textFontWeight = QFont::Weight::Normal;
}

Text::Text(QString text, QString fontFamily, int pointSize, Qt::GlobalColor color,
           Qt::AlignmentFlag align, QFont::Style fontStyle, QFont::Weight fontWeight)
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
