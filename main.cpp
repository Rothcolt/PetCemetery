#include "Inclusion_Tools.h"
#include "rectangle.h"
#include "ellipse.h"
#include "line.h"
#include "polygon.h"
#include "polyline.h"
#include "shapeparser.h"
#include <QApplication>
#include "text.h"
#include "window.h"
#include "mainwindow.h"

/*! Main function file for the Qt painter project.
 * Calls upon all files to execute primary functinality */

//! Primary functionality.
int main(int argc, char *argv[]) {

    // Initialize QApp (the entire application itself)
    QApplication qApplication(argc, argv);

    // Initialize and show MainWindow
    MainWindow mainWindow;
    mainWindow.show();

    return qApplication.exec();
}
