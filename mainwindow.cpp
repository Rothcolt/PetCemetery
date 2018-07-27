#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>

// Used for keeping track of page indices
enum Pages {
    LOGIN,
    CANVAS,
    REPORT_ID,
    CONTACT_US
};

enum shapeTypes {
    LINE,
    POLYLINE,
    POLYGON,
    RECTANGLE,
    SQUARE,
    ELLIPSE,
    CIRCLE
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

    // changes page to reports page
    ui->stackedWidget->setCurrentIndex(REPORT_ID);

    // set rows to same value as vector size
    // add for loop
    ui->tableWidget->setRowCount(5);
    ui->tableWidget->setSortingEnabled(true);

    Vector<Shape*> *shapes = ui->canvas->getShapes();

    QTableWidgetItem *item = new QTableWidgetItem;
    Vector<Shape*>::v_iterator it = shapes->begin();
    int row = 0;

    while(it != shapes->end())
    {
        item = new QTableWidgetItem;
        item->setData(Qt::DisplayRole, (*it)->getId());
        ui->tableWidget->setItem(row,0, item);
        ui->tableWidget->setItem(row,1, new QTableWidgetItem((*it)->getType()));
        row++;
        it++;
    }
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(CANVAS);

}

void MainWindow::on_add_shape_button_clicked()
{
    int shapeId;
    int penWidth = ui->pen_width->value();
    int textPointSize = ui->text_size->value();
    QString shapeType = ui->shape_type->currentText();

    // GET SHAPE DATA FROM PAINTER
//    if(ui->shape_dimensions->currentIndex() <= CIRCLE)
//    {
//    }

}



void MainWindow::on_shape_type_currentIndexChanged(int index)
{
    ui->shape_dimensions->setCurrentIndex(index);
}

void MainWindow::on_return_painter_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(CANVAS);
}

void MainWindow::on_actionContact_Page_triggered()
{
    ui->stackedWidget->setCurrentIndex(CONTACT_US);
}
