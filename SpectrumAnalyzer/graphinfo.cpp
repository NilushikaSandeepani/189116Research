#include "graphinfo.h"
#include "ui_graphinfo.h"

GraphInfo::GraphInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GraphInfo)
{
    ui->setupUi(this);
}

GraphInfo::~GraphInfo()
{
    delete ui;
}
