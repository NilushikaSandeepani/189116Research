#include "processtype.h"
#include "ui_processtype.h"
#include"home.h"
#include "selecttype.h"

processtype::processtype(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::processtype)
{
    ui->setupUi(this);
}

processtype::~processtype()
{
    delete ui;
}

void processtype::on_pushButton_clicked()
{
    hide();
    home h;
    h.setModal(true);
    h.exec();

}

//go to select type
void processtype::on_pushButton_2_clicked()
{
    hide();
    selecttype h;
    h.setModal(true);
    h.exec();

}

