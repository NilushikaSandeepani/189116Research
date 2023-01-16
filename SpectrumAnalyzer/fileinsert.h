#ifndef FILEINSERT_H
#define FILEINSERT_H

#include <QDialog>

namespace Ui {
class fileinsert;
}

class fileinsert : public QDialog
{
    Q_OBJECT

public:
    explicit fileinsert(QWidget *parent = nullptr);
    ~fileinsert();

private:
    Ui::fileinsert *ui;
};

#endif // FILEINSERT_H
