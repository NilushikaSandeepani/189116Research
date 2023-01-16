#include "fileinsert.h"
#include "ui_fileinsert.h"

fileinsert::fileinsert(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fileinsert)
{
    ui->setupUi(this);
}

fileinsert::~fileinsert()
{
    delete ui;
}
