#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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

void MainWindow::on_login_button_clicked()
{
    // Used for keeping track of page indices
    enum Pages {
        LOGIN,
        CANVAS
    };

   QString username = ui->username_line->text(); // User entered username
   QString password = ui->password_line->text(); // User entered password

     // Checks if username & password is valid
    if(username == "shrek" && password == "swamp")
    {
        // Set the current page to the Canvas page
        ui->stackedWidget->setCurrentIndex(CANVAS);
    }
    else
    {
        QMessageBox loginError; // Error message box

        // Outputs error message if wrong username or password is made
        loginError.critical(ui->stackedWidget, "Error", "Please enter a valid username/password");
        loginError.setFixedSize(500, 200);
    } // END - if else

}
