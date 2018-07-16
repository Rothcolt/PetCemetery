QT += core gui widgets

TARGET = PetCemetery
TEMPLATE = app

HEADERS += \
    Inclusion_Tools.h \
    shape.h \
    line.h \
    polyline.h \
    polygon.h \
    rectangle.h \
    ellipse.h \
    text.h \
    shapeparser.h

SOURCES += \
    line.cpp \
    shape.cpp \
    polyline.cpp \
    polygon.cpp \
    rectangle.cpp \
    ellipse.cpp \
    text.cpp \
    shapeparser.cpp \
    main.cpp
