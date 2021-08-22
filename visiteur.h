#ifndef VISITEUR_H
#define VISITEUR_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include<QDate>

class Visiteur
{
public:
    Visiteur();
    Visiteur(QString,QString,QString,QString,QString,int,int,QDate);
    QString get_nom();
    QString get_prenom();
    QString get_email();
    QString get_sexe();
    QString get_tel();
    int get_id();
    int get_id_e();
    int get_age();
    QDate get_date();

    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier();
    bool test_pourc(int);
    QSqlQueryModel *displayClause(QString cls);
    QSqlQueryModel *trideccroissant();
    QSqlQueryModel *tricroissant();


private:
    QString nom,prenom,email,sexe,tel;
    int id,id_e,age;
    QDate datee;
};

#endif // VISITEUR_H
