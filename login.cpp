#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_2_password->text();

       if(username == "shrek" && password == "swamp")
       {
           QMessageBox::information(this, "Login", "Username and password is correct");

          // hide();                          // This will hide the login window after entering in correct login
          // secDialog = new SecDialog(this); // creates a new window
          // secDialog->show();               // shows new window
       }
       else
       {
           QMessageBox::information(this, "Login","Username and password is not correct");
       }

   }

