#include "mainwindow.h"
#include "ui_mainwindow.h"

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


}

MainWindow::~MainWindow()
{
    delete ui;
}

