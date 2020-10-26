#include "withdraw.h"
#include "ui_withdraw.h"
#include <QMessageBox>
Withdraw::Withdraw(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Withdraw)
{
    ui->setupUi(this);
}

Withdraw::~Withdraw()
{
    delete ui;
}

void Withdraw::on_pushButton_clicked()
{
    close();
}
