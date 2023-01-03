#include "mainwindow.h"
#include "xlsxdocument.h"

using namespace QXlsx;

#include <QApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

        QXlsx::Document xlsx;

        xlsx.read("A1");



    MainWindow w;

    w.show();
    return a.exec();
}
