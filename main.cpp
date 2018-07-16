#include "Inclusion_Tools.h"
#include "rectangle.h"
#include "ellipse.h"
#include "line.h"
#include "polygon.h"
#include "polyline.h"
#include "shapeparser.h"
#include "login.h"
#include <QApplication>
#include "text.h"

/*! Main function file for the Qt painter project.
 * Calls upon all files to execute primary functinality */

//! Primary functionality.
int main(int argc, char *argv[]) { // argc(argument count), argv(argument vector) this will pass
                                   // the command line arguments to main()

    QApplication qApplication(argc, argv); // Need QApplication to show login screen
    login loginScreen;                     // Creating new login screen
    loginScreen.show();                    // Shows login Screen

    return qApplication.exec();
}
