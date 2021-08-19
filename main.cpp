#include "mainwindow.h"
#include "user.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include <QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //open qss file
        QFile file(":/qss/Integrid.qss");
        file.open(QFile::ReadOnly);

        QString styleSheet { QLatin1String(file.readAll()) };

        //setup stylesheet
        a.setStyleSheet(styleSheet);
    User z ;
    MainWindow w;
    connection c;


    bool test=c.createconnect();
    if(test)
    {w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful."), QMessageBox::Ok);

z.show();
}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed."), QMessageBox::Ok);



    return a.exec();
}
