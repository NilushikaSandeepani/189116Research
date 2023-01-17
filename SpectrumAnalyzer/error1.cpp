#include "error1.h"
#include "ui_error1.h"

Error1::Error1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Error1)
{
    ui->setupUi(this);
}

Error1::~Error1()
{
    delete ui;
}

void Error1::on_pushButton_clicked()
{
    hide();
}

