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

    void on_actionReport_by_Shape_ID_triggered();

    void on_pushButton_clicked();

    void on_add_shape_button_clicked();

    void on_shape_type_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    ShapeParser *parser;
};

#endif // MAINWINDOW_H
