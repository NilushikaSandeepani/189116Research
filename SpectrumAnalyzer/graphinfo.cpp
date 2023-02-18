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

void GraphInfo::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{

}

