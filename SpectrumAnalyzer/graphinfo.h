#ifndef GRAPHINFO_H
#define GRAPHINFO_H

#include <QDialog>

namespace Ui {
class GraphInfo;
}

class GraphInfo : public QDialog
{
    Q_OBJECT

public:
    explicit GraphInfo(QWidget *parent = nullptr);
    ~GraphInfo();

private:
    Ui::GraphInfo *ui;
};

#endif // GRAPHINFO_H
