#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "lift.h"
#include "controller.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    MainWindow(int floors,QWidget *parent = nullptr);
    ~MainWindow();//добавить лифт и контроллер лифта

private:
    Ui::MainWindow *ui;
    Lift * lift;
    Controller * control;
    QLabel * labels[];
public slots:
    void paintEvent(QPaintEvent *event);
};
#endif // MAINWINDOW_H
