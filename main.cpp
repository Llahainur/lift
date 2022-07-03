#include "mainwindow.h"
#include "controller.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    //return a.exec();
    std::unique_ptr<Lift> lift{ new Lift(6) };
    std::unique_ptr<Controller> control{ new Controller(lift.operator->()) };

    control->call(5);
    qDebug() << "called";
    control->drive();

    qDebug() << control->show_current_floor();
    return 0;
}
