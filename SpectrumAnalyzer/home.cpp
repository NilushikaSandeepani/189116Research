#include "home.h"
#include "ui_home.h"
#include "selecttype.h"

home::home(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);
}

home::~home()
{
    delete ui;
}
//move to select type ui
void home::on_pushButton_clicked()
{
    hide();
    selecttype p;
    p.setModal(true);
    p.exec();
}

