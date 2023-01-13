#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <qtextstream.h>
#include <algorithm>
#include <QtCore>
#include <QLabel>

#include <QApplication>
#include <QMainWindow>
#include <QVector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
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

    Document xlsxR("Dataset.xlsx");
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





    //Find the lamda max in data set

//    QMainWindow w;

        double highest = *std::max_element(y.begin(), y.end());
          std::cout << "The highest value in the data set is: " << highest << std::endl;

//        QLabel *label = new QLabel(QString("The highest value in the data set is: %1").arg(highest));
//            w.setCentralWidget(label);
//            w.show();





    ui->customplot->graph(0)->setData(x,y);
    ui->customplot->rescaleAxes();
    ui->customplot->replot();
    ui->customplot->update();



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Upload_clicked()
{

}

