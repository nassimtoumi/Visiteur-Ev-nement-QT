#include "user.h"
#include "ui_user.h"

User::User(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);
}

User::~User()
{
    delete ui;
}

void User::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void User::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void User::on_pushButton_7_clicked()
{
   ui->stackedWidget->setCurrentIndex(0);
}

void User::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
