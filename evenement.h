#ifndef EVENEMENT_H
#define EVENEMENT_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include<QDate>

class Evenement
{
public:
    Evenement();
    Evenement(int,QDateTime,int,QString,int,int,QString);
    QString get_orga();
    QString get_lieu();
    int get_id();
    int get_cap();
    int get_prix();
    int get_rev();
    QDateTime get_date();
    void set_orga(QString);
    void set_lieu(QString);
    void set_prix(int);
    void set_rev(int);
    void set_cap(int);
    void set_id(int);
     void set_date(QDateTime);

    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier();
    bool test_pourc(int);
    QSqlQueryModel *displayClause(QString cls);
    QSqlQueryModel *trideccroissant();
    QSqlQueryModel *tricroissant();


private:
    QString lieu,orga;
    int id,prix,cap,rev;
    QDateTime datee;
};

#endif // EVENEMENT_H
