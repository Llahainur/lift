#include "mainwindow.h"
#include "dialog.h"
#include "controller.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog d;
    d.show();

    //MainWindow w;
    //w.show();
    int exec = a.exec();
    //std::unique_ptr<Lift> lift{ new Lift(10) };
    //std::unique_ptr<Controller> control{ new Controller(lift.operator->()) };

    //control->call(5);
    //control->call(3);
    //control->call(10);
    //qDebug() << "called";
    //control->drive_till_the_end();

    return exec;
}
