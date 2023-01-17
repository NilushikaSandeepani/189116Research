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

void Concentration::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    QString text = lineEdit->text();
      bool ok;
      int value = text.toInt(&ok);

      // Check if the input is a valid integer
      if (ok) {
          qDebug() << "The integer value entered is: " << value;
      } else {
          error1 e;
          e.setModal(true);
          e.exec();
      }
}

