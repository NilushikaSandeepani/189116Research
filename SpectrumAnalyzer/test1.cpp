#include "test1.h"
#include "ui_test1.h"
#include "home.h"

#include <iostream>
#include <qtextstream.h>
#include <algorithm>
#include <QtCore>
#include <QLabel>

#include <QApplication>
#include <QMainWindow>
#include <QVector>


test1::test1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::test1)
{
    ui->setupUi(this);

    ui->customplot->addGraph();
    ui->customplot->graph(0)->setScatterStyle(QCPScatterStyle::ssNone);
    ui->customplot->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->customplot->xAxis->setLabel("Wavelength");
    ui->customplot->yAxis->setLabel("Absorbance");
    ui->customplot->xAxis->setRange(0,1000);
    ui->customplot->yAxis->setRange(0,5);

    ui->customplot->setInteractions(QCP::iRangeDrag| QCP::iRangeZoom| QCP::iSelectAxes| QCP::iSelectPlottables);

    QVector<double> x, y;

    x.clear();
    y.clear();

    int row=900;
    bool ok = true;
    QString k="Dataset.xlsx";

    Document xlsxR(k);
    if (xlsxR.load())
    {
       for (int i=1; i<=row; i++){
           Cell* cell = xlsxR.cellAt(i, 1);
           if ( cell != NULL )
           {
               QVariant var = cell->readValue();
               x.append(var.toDouble(&ok));
           }
       }

       for (int i=1; i<=row; i++){
           Cell* cell = xlsxR.cellAt(i, 2);
           if ( cell != NULL )
           {
               QVariant var = cell->readValue();
               y.append(var.toDouble(&ok));
           }
       }
    } else {

        qDebug() << "Error Loading File";
    }


}

test1::~test1()
{
    delete ui;
}