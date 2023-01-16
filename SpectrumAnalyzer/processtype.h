#ifndef PROCESSTYPE_H
#define PROCESSTYPE_H

#include <QDialog>

namespace Ui {
class processtype;
}

class processtype : public QDialog
{
    Q_OBJECT

public:
    explicit processtype(QWidget *parent = nullptr);
    ~processtype();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::processtype *ui;
};

#endif // PROCESSTYPE_H
