#include "shapeparser.h"

ShapeParser::ShapeParser()
{
    this->shapes = new Vector<Shape*>();
}

//! Default constructor.
ShapeParser::ShapeParser(QPainter *painter)
{
    this->painter = painter;
    this->shapes = new Vector<Shape*>();
}

ShapeParser::~ShapeParser() {}

//! Read in shapes from a file.
void ShapeParser::ReadInShape() {
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

    QFile file("shapes.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {

    }

    QTextStream in(&file);
    while (!in.atEnd())
    {
        // Reads in line from file
        QString line = in.readLine();

        // Splits line at ':' and separates values into key & token
        tokens = line.split(":");
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
        }
        else if(key == "PenWidth")
        {
            penWidth = value.toInt();
        }
        else if(key == "PenStyle")
        {
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
                penStyle = Qt::PenStyle::DashDotDotLine;
            }
            else if(value == "DashDotDotLine")
            {
                penStyle = Qt::PenStyle::DashDotDotLine;
            }
        }
        else if(key == "PenCapStyle")
        {
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
        }
        else if(key == "PenJoinStyle")
        {
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
        }
        else if(key == "BrushColor")
        {
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
        }
        else if(key == "BrushStyle")
        {
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
        }
        else if(key == "TextString")
        {
            textString = value;
        }
        else if(key == "TextColor")
        {
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
        }
        else if(key == "TextAlignment")
        {
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
        }
        else if(key == "TextFontWeight")
        {
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
        }

        QBrush brush(brushColor, brushStyle);
        QPen pen(brush, penWidth, penStyle, capStyle, joinStyle);
        pen.setColor(penColor);
        painter->setBrush(brush);
        painter->setPen(pen);

        QStringList splitDims = shapeDimensions.split(",");

        for(int i = 0; i < splitDims.length(); i++)
        {
            splitDims[i] = splitDims[i].trimmed();
        }

         //  Creates specified shape type & intializes with read in values
        if(shapeType == "Line")
        {
            newShape = new Line(painter, pen, brush, shapeId, splitDims[0].toInt(), splitDims[1].toInt(),
                    splitDims[2].toInt(), splitDims[3].toInt());
        }
        else if(shapeType == "Polyline")
        {
            newShape = new Polyline(painter, pen, brush, shapeId, splitDims[0].toInt(), splitDims[1].toInt(),
                    splitDims[2].toInt(), splitDims[3].toInt(), splitDims[4].toInt(), splitDims[5].toInt());
        }
        else if(shapeType == "Polygon")
        {
            newShape = new Polygon(painter, pen, brush, shapeId, splitDims[0].toInt(), splitDims[1].toInt(),
                    splitDims[2].toInt(), splitDims[3].toInt(), splitDims[4].toInt(), splitDims[5].toInt());
        }
        else if(shapeType == "Rectangle")
        {
            newShape = new Rectangle(painter, pen, brush, shapeId, splitDims[0].toInt(), splitDims[1].toInt(),
                    splitDims[2].toInt(), splitDims[3].toInt());
        }
        else if(shapeType == "Square")
        {
            newShape = new Square(painter, pen, brush, shapeId, splitDims[0].toInt(), splitDims[1].toInt(),
                    splitDims[2].toInt());
        }
        else if(shapeType == "Ellipse")
        {
            newShape = new Ellipse(painter, pen, brush, shapeId, splitDims[0].toInt(), splitDims[1].toInt(),
                    splitDims[2].toInt(), splitDims[3].toInt());
        }
        else if(shapeType == "Circle")
        {
            newShape = new Circle(painter, pen, brush, shapeId, splitDims[0].toInt(), splitDims[1].toInt(),
                                                 splitDims[2].toInt());
        }
        else if(shapeType == "Text")
        {
            newShape = new Text(textString, textFontFamily, textPointSize, textColor, textAllignment,
                                                textFontStyle, textFontWeight);
        }

        this->shapes->push_back(newShape);
    }// END - while
}

void ShapeParser::drawAll()
{
    Shape** it = this->shapes->begin();
    while(it != this->shapes->end()){
        (*it)->drawShape();
        it++;
    }
}// END - ReadInShape(void)
