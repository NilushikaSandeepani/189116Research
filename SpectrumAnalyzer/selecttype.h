#ifndef SELECTTYPE_H
#define SELECTTYPE_H

#include <QDialog>

namespace Ui {
class selecttype;
}

class selecttype : public QDialog
{
    Q_OBJECT

public:
    explicit selecttype(QWidget *parent = nullptr);
    ~selecttype();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_liquid_clicked();

    void on_Back_clicked();

private:
    Ui::selecttype *ui;
};

#endif // SELECTTYPE_H
