#ifndef BALANCE_H
#define BALANCE_H

#include <QDialog>

namespace Ui {
class Balance;
}

class Balance : public QDialog
{
    Q_OBJECT

public:
    explicit Balance(QWidget *parent = nullptr);
    ~Balance();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Balance *ui;
};

#endif // BALANCE_H
