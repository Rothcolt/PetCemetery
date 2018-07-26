#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>

// Used for keeping track of page indices
enum Pages {
    LOGIN,
    CANVAS,
    REPORT_ID
};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->parser = new ShapeParser();
    ui->stackedWidget->setCurrentIndex(LOGIN);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_button_clicked()
{
   QString username = ui->username_line->text(); // User entered username
   QString password = ui->password_line->text(); // User entered password

     // Checks if username & password is valid
    if(username == "shrek" && password == "swamp")
    {
        // Set the current page to the Canvas page
        ui->stackedWidget->setCurrentIndex(CANVAS);
//        ui->stackedWidget->show();


    }
    else
    {
        QMessageBox loginError; // Error message box

        // Outputs error message if wrong username or password is made
        loginError.critical(ui->stackedWidget, "Error", "Please enter a valid username/password");
        loginError.setFixedSize(500, 200);
    } // END - if else

}

//need function to read in shapes
// calls shape parser

void MainWindow::on_actionImport_triggered()
{
    QString importFile = QFileDialog::getOpenFileName();
    ui->canvas->setShapes(this->parser->ReadInShape(importFile));

}

void MainWindow::on_actionReport_by_Shape_ID_triggered()
{
   ui->stackedWidget->setCurrentIndex(REPORT_ID);
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(CANVAS);
}

void MainWindow::on_add_shape_button_clicked()
{
//    enum editShapePage{
//        SHAPE,
//        PEN,
//        BRUSH,
//        TEXT
//    };

//    Vector<Shape> shapesList;

//    // create shape
//    // add shape to vector of shapes in program

//    ui->canvas->setShapes(shapesList);
}



void MainWindow::on_shape_type_currentIndexChanged(int index)
{
    ui->shape_dimensions->setCurrentIndex(index);
}
