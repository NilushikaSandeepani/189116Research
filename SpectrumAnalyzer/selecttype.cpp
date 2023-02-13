#include "selecttype.h"
#include "ui_selecttype.h"
#include "Mainpage.h"
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

//Diret into test1
void selecttype::on_liquid_clicked()
{
    hide();
    test1 t;
    t.setModal(true);
    t.exec();
}

//back to home
void selecttype::on_Back_clicked()
{
    hide();
    home m;
    m.setModal(true);
    m.exec();

}

