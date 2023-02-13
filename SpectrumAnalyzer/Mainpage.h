#ifndef MAINPAGE_H
#define MAINPAGE_H

#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"
#include <QDialog>

using namespace QXlsx;



namespace Ui {
class test1;
}

class test1 : public QDialog
{
    Q_OBJECT

public:
    explicit test1(QWidget *parent = nullptr);
    ~test1();

private slots:
    void on_Back_clicked();

    void on_Upload_3_clicked();

    void on_GraphInfo_clicked();

private:
    Ui::test1 *ui;
};

#endif // MAINPAGE_H
