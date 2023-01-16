#ifndef TEST1_H
#define TEST1_H

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

private:
    Ui::test1 *ui;
};

#endif // TEST1_H
