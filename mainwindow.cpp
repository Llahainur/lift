#include "mainwindow.h"
#include <QPainter>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::MainWindow(int floors, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    lift = new Lift(floors);
    control = new Controller(lift);

    for (int i=lift->min_floors;i<=lift->max_floors;i++){
        QLabel * l = new QLabel(this);
        l->setText(QString::number(i));
        l->setGeometry(50,500-20*i,30,20);
    }

    repaint();

}

void MainWindow::paintEvent(QPaintEvent *event){
    Q_UNUSED(event);
    QPainter painter(this); // Создаём объект отрисовщика
    // Устанавливаем кисть абриса
    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));
    for (int i=lift->min_floors;i<=lift->max_floors;i++){
        painter.setBrush(QBrush(Qt::white, Qt::SolidPattern));
        if (control->show_current_floor()==i)
            painter.setBrush(QBrush(Qt::green, Qt::SolidPattern));
        if(control->is_in_queue(i))
            painter.setBrush(QBrush(Qt::yellow, Qt::SolidPattern));

        painter.drawEllipse(80,500-20*i,20,20);

    }
}

MainWindow::~MainWindow()
{
    delete ui;
    delete lift;
    delete control;
}
