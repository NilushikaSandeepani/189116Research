#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <qtextstream.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->customplot->addGraph();
    ui->customplot->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
    ui->customplot->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->customplot->xAxis->setLabel("Wavelength");
    ui->customplot->yAxis->setLabel("Absorbance");
    ui->customplot->xAxis->setRange(0,500);
    ui->customplot->yAxis->setRange(0,600);

    ui->customplot->setInteractions(QCP::iRangeDrag| QCP::iRangeZoom| QCP::iSelectAxes| QCP::iSelectPlottables);


    QVector<double>x={1,2,3,4,5,6}, y={2,5,6,7,7,8};

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

