#include "dialog.h"



Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->label->setText("Введите число этажей");
    ui->spinBox->setMaximum(20);
    ui->spinBox->setMinimum(1);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{

    MainWindow *m;
    int floors=ui->spinBox->value();
    m=new MainWindow(floors);

    m->show();
    Dialog::~Dialog();
    return;
}

