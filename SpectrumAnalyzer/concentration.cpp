#include "concentration.h"
#include "ui_concentration.h"
#include "error1.h"
#include <QtWidgets>

Concentration::Concentration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Concentration)
{
    ui->setupUi(this);
}

Concentration::~Concentration()
{
    delete ui;
}

//Input data to pathlength
void Concentration::on_Pathlength_cursorPositionChanged(int arg1, int arg2)
{
    QString text = ui->lineEdit_2->text();
      bool ok;
      int value = text.toInt(&ok);

      // Check if the input is a valid integer
      if (ok) {
          qDebug() << value;
      } else {
          Error1 e;
          e.setModal(true);
          e.exec();
      }
}

