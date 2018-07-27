#include <QDebug>
#include <QCoreApplication>
#include "shapeparser.h"

ShapeParser::ShapeParser()
{
}

ShapeParser::~ShapeParser() {}

//! Read in shapes from a file.
Vector<Shape *> *ShapeParser::ReadInShape(QString filePath) {
    int shapeId;
    int penWidth;
    int textPointSize;
    QString shapeType;
    QString textFontFamily;
    QString textString;
    QString shapeDimensions;
    QStringList tokens;
    QString key;
    QString value;
    Qt::GlobalColor   penColor;
    Qt::PenStyle      penStyle;
    Qt::PenCapStyle   capStyle;
    Qt::PenJoinStyle  joinStyle;
    Qt::GlobalColor   brushColor;
    Qt::BrushStyle    brushStyle;
    Qt::GlobalColor   textColor;
    Qt::AlignmentFlag textAllignment;
    QFont::Style  textFontStyle;
    QFont::Weight textFontWeight;
    Shape *newShape;
    Vector<Shape*> *shapes = new Vector<Shape*>();

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Unable to open file :(";
    }

    QTextStream in(&file);

    // throwaway first blank line
    QString line = in.readLine();

    while (!in.atEnd())
    {
        // Reads in line from file
        line = in.readLine();

        // Splits line at ':' and separates values into key & token
        tokens = line.split(":");

        if(tokens.length() > 1)
        {
            key   = tokens[0];
            value = tokens[1];
            // Trims white space off of data stored in value
            value = value.trimmed();

            if(key == "ShapeId")
            {
                shapeId = value.toInt();
            }
            else if(key == "ShapeType")
            {
                shapeType = value;
            }
            else if(key == "ShapeDimensions")
            {
                shapeDimensions = value;
            }
            else if(key == "PenColor")
            {
                penColor = setPenColor(value);
            }
            else if(key == "PenWidth")
            {
                penWidth = value.toInt();
            }
            else if(key == "PenStyle")
            {
                penStyle = setPenStyle(value);
            }
            else if(key == "PenCapStyle")
            {
                capStyle = setCapStyle(value);
            }
            else if(key == "PenJoinStyle")
            {
                joinStyle = setJoinStyle(value);
            }
            else if(key == "BrushColor")
            {
                brushColor = setBrushColor(value);
            }
            else if(key == "BrushStyle")
            {
                brushStyle = setBrushStyle(value);
            }
            else if(key == "TextString")
            {
                textString = value;
            }
            else if(key == "TextColor")
            {
                textColor = setTextColor(value);
            }
            else if(key == "TextAlignment")
            {
                textAllignment = setTextAlignment(value);
            }
            else if(key == "TextPointSize")
            {
                textPointSize = value.toInt();
            }
            else if(key == "TextFontFamily")
            {
                textFontFamily = value;
            }
            else if(key == "TextFontStyle")
            {
                textFontStyle = setTextFontStyle(value);
            }
            else if(key == "TextFontWeight")
            {
                textFontWeight = setTextFontWeight(value);
            }
        }
        else
        {
            QBrush brush(brushColor, brushStyle);
            QPen pen(brush, penWidth, penStyle, capStyle, joinStyle);
            pen.setColor(penColor);

            QStringList splitDims = shapeDimensions.split(",");

            for(int i = 0; i < splitDims.length(); i++)
            {
                splitDims[i] = splitDims[i].trimmed();
            }

            //  Creates specified shape type & intializes with read in values
            if(shapeType == "Line")
            {
                newShape = new Line(pen, brush, shapeId, shapeType, splitDims[0].toInt(), splitDims[1].toInt(),
                        splitDims[2].toInt(), splitDims[3].toInt());
            }
            else if(shapeType == "Polyline")
            {   
                newShape = new Polyline(pen, brush, shapeId, shapeType, splitDims[0].toInt(), splitDims[1].toInt(),
                        splitDims[2].toInt(), splitDims[3].toInt(), splitDims[4].toInt(), splitDims[5].toInt());
            }
            else if(shapeType == "Polygon")
            {
                newShape = new Polygon(pen, brush, shapeId, shapeType, splitDims[0].toInt(), splitDims[1].toInt(),
                        splitDims[2].toInt(), splitDims[3].toInt(), splitDims[4].toInt(), splitDims[5].toInt());
            }
            else if(shapeType == "Rectangle")
            {
                newShape = new Rectangle(pen, brush, shapeId, shapeType, splitDims[0].toInt(), splitDims[1].toInt(),
                        splitDims[2].toInt(), splitDims[3].toInt());
            }
            else if(shapeType == "Square")
            {
                newShape = new Square(pen, brush, shapeId, shapeType, splitDims[0].toInt(), splitDims[1].toInt(),
                        splitDims[2].toInt());
            }
            else if(shapeType == "Ellipse")
            {
                newShape = new Ellipse(pen, brush, shapeId, shapeType, splitDims[0].toInt(), splitDims[1].toInt(),
                        splitDims[2].toInt(), splitDims[3].toInt());
            }
            else if(shapeType == "Circle")
            {
                newShape = new Circle(pen, brush, shapeId, shapeType, splitDims[0].toInt(), splitDims[1].toInt(),
                        splitDims[2].toInt());
            }
            else if(shapeType == "Text")
            {
                QFont font(textFontFamily, textPointSize, textFontWeight, false);
                font.setStyle(textFontStyle);
                QPen textPen;
                textPen.setColor(textColor);
                QBrush textBrush;
                QPoint point = {splitDims[0].toInt(), splitDims[1].toInt()};
                int width = splitDims[2].toInt();
                int height = splitDims[3].toInt();

                newShape = new Text(textPen, textBrush, shapeId, shapeType, font, textString, textAllignment,
                                                   point, width, height);
            }

            shapes->push_back(newShape);
        }// END - if(tokens.length() > 1)
    }// END - while (!in.atEnd())
    return shapes;
}

Qt::GlobalColor ShapeParser::setPenColor(QString value)
{
    Qt::GlobalColor penColor;

    // Checks & sets pen color type
    if(value == "white")
    {
        penColor = Qt::GlobalColor::white;
    }
    else if(value == "black")
    {
        penColor = Qt::GlobalColor::black;
    }
    else if(value == "red")
    {
        penColor = Qt::GlobalColor::red;
    }
    else if(value == "green")
    {
        penColor = Qt::GlobalColor::green;
    }
    else if(value == "blue")
    {
        penColor = Qt::GlobalColor::blue;
    }
    else if(value == "cyan")
    {
        penColor = Qt::GlobalColor::cyan;
    }
    else if(value == "magenta")
    {
        penColor = Qt::GlobalColor::magenta;
    }
    else if(value == "yellow")
    {
        penColor = Qt::GlobalColor::yellow;
    }
    else if(value == "gray")
    {
        penColor = Qt::GlobalColor::gray;
    }
    else
    {
        penColor = Qt::GlobalColor::black;
    }

    return penColor;
}

Qt::PenStyle ShapeParser::setPenStyle(QString value)
{
    Qt::PenStyle penStyle;

    // Checks & sets pen style type
    if(value == "NoPen")
    {
        penStyle = Qt::PenStyle::NoPen;
    }
    else if(value == "SolidLine")
    {
        penStyle = Qt::PenStyle::SolidLine;
    }
    else if(value == "DashLine")
    {
        penStyle = Qt::PenStyle::DashLine;
    }
    else if(value == "DotLine")
    {
        penStyle = Qt::PenStyle::DotLine;
    }
    else if(value == "DashDotLine")
    {
        penStyle = Qt::PenStyle::DashDotLine;
    }
    else if(value == "DashDotDotLine")
    {
        penStyle = Qt::PenStyle::DashDotDotLine;
    }
    else
    {
        penStyle = Qt::PenStyle::SolidLine;
    }

    return penStyle;
}

Qt::PenCapStyle   ShapeParser::setCapStyle(QString value)
{
    Qt::PenCapStyle capStyle;

    // Checks & sets pen cap style
    if(value == "FlatCap")
    {
        capStyle = Qt::PenCapStyle::FlatCap;
    }
    else if(value == "SquareCap")
    {
        capStyle = Qt::PenCapStyle::SquareCap;
    }
    else if(value == "RoundCap")
    {
        capStyle = Qt::PenCapStyle::RoundCap;
    }
    else
    {
        capStyle = Qt::PenCapStyle::FlatCap;
    }

    return capStyle;
}

Qt::PenJoinStyle  ShapeParser::setJoinStyle(QString value)
{
    Qt::PenJoinStyle joinStyle;

    // Checks & sets pen join style
    if(value == "MiterJoin")
    {
        joinStyle = Qt::PenJoinStyle::MiterJoin;
    }
    else if(value == "BevelJoin")
    {
        joinStyle = Qt::PenJoinStyle::BevelJoin;
    }
    else if(value == "RoundJoin")
    {
        joinStyle = Qt::PenJoinStyle::RoundJoin;
    }
    else
    {
        joinStyle = Qt::PenJoinStyle::RoundJoin;
    }
    return joinStyle;
}

Qt::GlobalColor   ShapeParser::setBrushColor(QString value)
{
    Qt::GlobalColor brushColor;

    // Checks & sets brush color type
    if(value == "white")
    {
        brushColor = Qt::GlobalColor::white;
    }
    else if(value == "black")
    {
        brushColor = Qt::GlobalColor::black;
    }
    else if(value == "red")
    {
        brushColor = Qt::GlobalColor::red;
    }
    else if(value == "green")
    {
        brushColor = Qt::GlobalColor::green;
    }
    else if(value == "blue")
    {
        brushColor = Qt::GlobalColor::blue;
    }
    else if(value == "cyan")
    {
        brushColor = Qt::GlobalColor::cyan;
    }
    else if(value == "magenta")
    {
        brushColor = Qt::GlobalColor::magenta;
    }
    else if(value == "yellow")
    {
        brushColor = Qt::GlobalColor::yellow;
    }
    else if(value == "gray")
    {
        brushColor = Qt::GlobalColor::gray;
    }
    else
    {
        brushColor = Qt::GlobalColor::white;
    }

    return brushColor;
}

Qt::BrushStyle    ShapeParser::setBrushStyle(QString value)
{
    Qt::BrushStyle brushStyle;

    // Checks & sets brush style type
    if(value == "SolidPattern")
    {
        brushStyle = Qt::BrushStyle::SolidPattern;
    }
    else if(value == "HorPattern")
    {
        brushStyle = Qt::BrushStyle::HorPattern;
    }
    else if(value == "VerPattern")
    {
        brushStyle = Qt::BrushStyle::VerPattern;
    }
    else if(value == "NoBrush")
    {
        brushStyle = Qt::BrushStyle::NoBrush;
    }
    else
    {
        brushStyle = Qt::BrushStyle::SolidPattern;
    }

    return brushStyle;
}

Qt::GlobalColor   ShapeParser::setTextColor(QString value)
{
    Qt::GlobalColor textColor;

    // Checks & sets text color type
    if(value == "white")
    {
        textColor = Qt::GlobalColor::white;
    }
    else if(value == "black")
    {
        textColor = Qt::GlobalColor::black;
    }
    else if(value == "red")
    {
        textColor = Qt::GlobalColor::red;
    }
    else if(value == "green")
    {
        textColor = Qt::GlobalColor::green;
    }
    else if(value == "blue")
    {
        textColor = Qt::GlobalColor::blue;
    }
    else if(value == "cyan")
    {
        textColor = Qt::GlobalColor::cyan;
    }
    else if(value == "magenta")
    {
        textColor = Qt::GlobalColor::magenta;
    }
    else if(value == "yellow")
    {
        textColor = Qt::GlobalColor::yellow;
    }
    else if(value == "gray")
    {
        textColor = Qt::GlobalColor::gray;
    }
    else
    {
        textColor = Qt::GlobalColor::black;
    }

    return textColor;
}

Qt::AlignmentFlag ShapeParser::setTextAlignment(QString value)
{
    Qt::AlignmentFlag textAllignment;

    // Checks & sets text alignment type
    if(value == "AlignLeft")
    {
        textAllignment = Qt::AlignmentFlag::AlignLeft;
    }
    else if(value == "AlignRight")
    {
        textAllignment = Qt::AlignmentFlag::AlignRight;
    }
    else if(value == "AlignTop")
    {
        textAllignment = Qt::AlignmentFlag::AlignTop;
    }
    else if(value == "AlignBottom")
    {
        textAllignment = Qt::AlignmentFlag::AlignBottom;
    }
    else if(value == "AlignCenter")
    {
        textAllignment = Qt::AlignmentFlag::AlignCenter;
    }
    else
    {
        textAllignment = Qt::AlignmentFlag::AlignLeft;
    }

    return textAllignment;
}

QFont::Style  ShapeParser::setTextFontStyle(QString value)
{
    QFont::Style textFontStyle;

    // Checks & sets font style type
    if(value == "StyleNormal")
    {
        textFontStyle = QFont::Style::StyleNormal;
    }
    else if(value == "StyleItalic")
    {
        textFontStyle = QFont::Style::StyleItalic;
    }
    else if(value == "StyleOblique")
    {
        textFontStyle = QFont::Style::StyleOblique;
    }
    else
    {
        textFontStyle = QFont::Style::StyleNormal;
    }

    return textFontStyle;
}

QFont::Weight ShapeParser::setTextFontWeight(QString value)
{
    QFont::Weight textFontWeight;

    // Checks & sets font weight type
    if(value == "Thin")
    {
        textFontWeight = QFont::Weight::Thin;
    }
    else if(value == "Light")
    {
        textFontWeight = QFont::Weight::Light;
    }
    else if(value == "Normal")
    {
        textFontWeight = QFont::Weight::Normal;
    }
    else if (value == "Bold")
    {
        textFontWeight = QFont::Weight::Bold;
    }
    else
    {
        textFontWeight = QFont::Weight::Normal;
    }

    return textFontWeight;
}
