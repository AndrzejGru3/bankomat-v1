#include "menu.h"
#include "ui_menu.h"
#include "balance.h"
#include "withdraw.h"
#include "fill.h"
Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_7_clicked()
{
   close();
}

void Menu::on_pushButton_clicked()
{
    Balance balance;
    balance.setModal(true);
    balance.exec();
}

void Menu::on_pushButton_2_clicked()
{
    Withdraw withdraw;
    withdraw.setModal(true);
    withdraw.exec();
}

void Menu::on_pushButton_4_clicked()
{
    Fill fill;
    fill.setModal(true);
    fill.exec();
}
