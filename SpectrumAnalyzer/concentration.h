#ifndef CONCENTRATION_H
#define CONCENTRATION_H

#include <QDialog>

namespace Ui {
class Concentration;
}

class Concentration : public QDialog
{
    Q_OBJECT

public:
    explicit Concentration(QWidget *parent = nullptr);
    ~Concentration();

private slots:
    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_Pathlength_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::Concentration *ui;
};

#endif // CONCENTRATION_H
