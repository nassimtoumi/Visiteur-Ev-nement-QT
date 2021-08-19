#ifndef USER_H
#define USER_H

#include <QDialog>

namespace Ui {
class User;
}

class User : public QDialog
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = nullptr);
    ~User();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::User *ui;
};

#endif // USER_H
