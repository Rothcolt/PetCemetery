#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    running = true;
}

login::~login()
{
    delete ui;
}

void login::changeState() {
    if (running = true) { running = false; }
    else { running = true; }
}

bool login::returnState() {
    return running;
}

void login::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_2_password->text();

       if(username == "shrek" && password == "swamp")
       {
          // QMessageBox::information(this, "Login", "Admin username and password is correct");

          hide();                          // This will hide the login window after entering in correct login
          // secDialog = new SecDialog(this); // creates a new window
          // secDialog->show();               // shows new window
          Window window;
          window.show();
          // changeState();
       }

       else if(username == "donkey" && password == "waffles") {
          // QMessageBox::information(this, "Login", "Username and password is correct");

          hide();                          // This will hide the login window after entering in correct login
          // secDialog = new SecDialog(this); // creates a new window
          // secDialog->show();               // shows new window
          Window window;
          window.show();
          // changeState();
       }
       else
       {
           QMessageBox::information(this, "Login","Username and password is not correct");
       }

   }

