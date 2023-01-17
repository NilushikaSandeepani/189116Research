#ifndef ERROR1_H
#define ERROR1_H

#include <QDialog>

namespace Ui {
class Error1;
}

class Error1 : public QDialog
{
    Q_OBJECT

public:
    explicit Error1(QWidget *parent = nullptr);
    ~Error1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Error1 *ui;
};

#endif // ERROR1_H
