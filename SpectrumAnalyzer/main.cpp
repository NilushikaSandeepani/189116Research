#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QtGlobal>
#include <QCoreApplication>
#include <QtCore>
#include "Mainpage.h"
#include "home.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    home w;

    w.show();
    return a.exec();
}
