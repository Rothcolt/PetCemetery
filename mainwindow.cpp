#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

// TODO: Implement password checking.
void MainWindow::on_pushButton_clicked()
{
    // Used for keeping track of page indices
    enum Pages {
        LOGIN,
        CANVAS
    };

    // Set the current page to the Canvas page
    ui->stackedWidget->setCurrentIndex(CANVAS);
}
