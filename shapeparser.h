#ifndef SHAPEPARSER_H
#define SHAPEPARSER_H

#include <QWidget>
#include <iostream>
#include <fstream>
#include <qfile.h>
#include <QTextStream>
using namespace std;

class ShapeParser
{
public:
    ShapeParser();
    ~ShapeParser();
    void ReadInShape();

private:
    QVector shapeList;
};

#endif // SHAPEPARSER_H
