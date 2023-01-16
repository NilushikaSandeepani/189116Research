#include "selecttype.h"
#include "ui_selecttype.h"
#include "processtype.h"
#include "test1.h"
#include "home.h"


selecttype::selecttype(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selecttype)
{
    ui->setupUi(this);
}

selecttype::~selecttype()
{
    delete ui;
}
//goto liquid
void selecttype::on_pushButton_2_clicked()
{

}

//back
void selecttype::on_pushButton_3_clicked()
{
    hide();
    processtype p;
    p.setModal(true);
    p.exec();
}


void selecttype::on_liquid_clicked()
{
    hide();
    test1 p;
    p.setModal(true);
    p.exec();
}


void selecttype::on_Back_clicked()
{
    hide();
    home p;
    p.setModal(true);
    p.exec();

}

