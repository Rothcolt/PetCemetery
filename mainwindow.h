#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "shapeparser.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    // readin from parser

private slots:
    void on_login_button_clicked();

    void on_actionImport_triggered();

private:
    Ui::MainWindow *ui;
    ShapeParser *parser;
      // global vector

};

#endif // MAINWINDOW_H
