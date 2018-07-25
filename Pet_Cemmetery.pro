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
    shapeparser.h \
    vector.h \
    square.h \
    circle.h \
    renderarea.h \
    mainwindow.h

SOURCES += \
    line.cpp \
    shape.cpp \
    polyline.cpp \
    polygon.cpp \
    rectangle.cpp \
    ellipse.cpp \
    text.cpp \
    shapeparser.cpp \
    main.cpp \
    square.cpp \
    circle.cpp \
    renderarea.cpp \
    mainwindow.cpp

FORMS += \
    mainwindow.ui \
    mainwindow.ui

DISTFILES += \
    shape.txt

