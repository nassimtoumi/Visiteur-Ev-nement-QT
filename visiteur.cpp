#include "visiteur.h"

Visiteur::Visiteur()
{ 
//id=NULL;
id_e=0;
age=0;
nom="";
prenom="";
email="";
sexe="";
tel="";

}
Visiteur::Visiteur(int id,QString nom,QString prenom,QString email,QString sexe,QString tel,int age,int id_e,QDate datee)
{
  this->id=id;
  this->id_e=id_e;
  this->age=age;
  this->nom=nom;
  this->prenom=prenom;
  this->email=email;
  this->sexe=sexe;
  this->tel=tel;
  this->datee=datee;
}
QString Visiteur::get_nom(){return  nom;}
QString Visiteur::get_prenom(){return  prenom;}
QString Visiteur::get_email(){return  email;}
QString Visiteur::get_sexe(){return  sexe;}
QString Visiteur::get_tel(){return  tel;}
int Visiteur::get_id(){return id;}
int Visiteur::get_id_e(){return id_e;}
int Visiteur::get_age(){return age;}
QDate Visiteur::get_date(){return  datee;}


void Visiteur::set_nom(QString nom){this->nom=nom;}
void Visiteur::set_prenom(QString prenom){this->prenom=prenom;}
void Visiteur::set_email(QString email){this->email=email;}
void Visiteur::set_sexe(QString sexe){this->sexe=sexe;}
void Visiteur::set_tel(QString tel){this->tel=tel;}
void Visiteur::set_age(int age){this->age=age;}
void Visiteur::set_idE(int ide){this->id_e=ide;}


bool Visiteur::ajouter()
{
QSqlQuery query;
query.prepare("INSERT INTO VISITEUR (DATEVISITEUR,NOM,PRENOM,EMAIL,TEL,AGE,SEXE,ID_E) "
                    "VALUES (:date,:nom,:prenom,:email,:tel,:age,:sexe,:id_e)");
//query.bindValue(":id", id);
query.bindValue(":id_e", id_e);
query.bindValue(":age", age);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);
query.bindValue(":email", email);
query.bindValue(":sexe", sexe);
query.bindValue(":tel", tel);
query.bindValue(":date", datee);




return    query.exec();
}
QSqlQueryModel * Visiteur::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from VISITEUR");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATEVISITEUR"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("EMAIL"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("TEL"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("AGE"));
model->setHeaderData(7, Qt::Horizontal, QObject::tr("SEXE"));
model->setHeaderData(8, Qt::Horizontal, QObject::tr("ID_E"));


    return model;
}
QSqlQueryModel *Visiteur::displayClause(QString cls)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from VISITEUR " +cls);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATEVISITEUR"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("EMAIL"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TEL"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("AGE"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("SEXE"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("ID_E"));
    return model;
}
bool Visiteur::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from VISITEUR where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}

bool Visiteur::modifier()
{   QSqlQuery query;
    query.prepare( "UPDATE VISITEUR SET ID=:id,DATEVISITEUR=:date,NOM=:nom,PRENOM=:prenom,EMAIL=:email,TEL=:tel,AGE=:age,SEXE=:sexe,ID_E=:id_e WHERE ID=:id;");
    query.bindValue(":id", id);
    query.bindValue(":id_e", id_e);
    query.bindValue(":age", age);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":sexe", sexe);
    query.bindValue(":tel", tel);
    query.bindValue(":date", datee);



 return query.exec();
}



