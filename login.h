#ifndef LOGIN_H
#define LOGIN_H

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
#include "window.h"

#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    void changeState();
    bool returnState();
    ~login();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::login *ui;
    bool running;
};

#endif // LOGIN_H
