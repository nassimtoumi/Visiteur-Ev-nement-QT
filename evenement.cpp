#include "evenement.h"

Evenement::Evenement()
{
//id=NULL;
id=0;
prix=0;
orga="";
rev=0;
cap=0;
lieu="";

}
Evenement::Evenement(int id,QDateTime datee,int prix,QString orga,int rev,int cap,QString lieu)
{
  this->id=id;
  this->prix=prix;
  this->orga=orga;
  this->rev=rev;
  this->cap=cap;
  this->lieu=lieu;
  this->datee=datee;
}
QString Evenement::get_orga(){return  orga;}
QString Evenement::get_lieu(){return  lieu;}
int Evenement::get_id(){return id;}
int Evenement::get_cap(){return cap;}
int Evenement::get_rev(){return rev;}
int Evenement::get_prix(){return prix;}
QDateTime Evenement::get_date(){return  datee;}



void Evenement::set_orga(QString orga){this->orga=orga;}
void Evenement::set_lieu(QString lieu){this->lieu=lieu;}
void Evenement::set_id(int id){this->id=id;}
void Evenement::set_prix(int prix){this->prix=prix;}
void Evenement::set_cap(int cap){this->cap=cap;}
void Evenement::set_rev(int rev){this->rev=rev;}


bool Evenement::ajouter()
{
QSqlQuery query;
query.prepare("INSERT INTO EVENEMENT (DATEEVENEMENT,PRIX,ORGANISATEUR,REVAPP,CAP,LIEU) "
                    "VALUES (:date,:prix,:orga,:rev,:cap,:lieu)");
//query.bindValue(":id", id);
query.bindValue(":prix", prix);
query.bindValue(":orga", orga);
query.bindValue(":rev", rev);
query.bindValue(":cap", cap);
query.bindValue(":lieu", lieu);
query.bindValue(":date", datee);




return    query.exec();
}
QSqlQueryModel * Evenement::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from EVENEMENT");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATEEVENEMENT"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRIX"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("ORGANISATEUR"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("REVAPP"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("CAP"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("LIEU"));


    return model;
}
QSqlQueryModel *Evenement::displayClause(QString cls)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from EVENEMENT " +cls);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATEEVENEMENT"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRIX"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ORGANISATEUR"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("REVAPP"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("CAP"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("LIEU"));
    return model;
}
bool Evenement::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from EVENEMENT where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}

bool Evenement::modifier()
{   QSqlQuery query;
    query.prepare( "UPDATE EVENEMENT SET ID=:id,DATEEVENEMENT=:date,PRIX=:prix,ORGANISATEUR=:orga,REVAPP=:rev,CAP=:cap,LIEU=:lieu WHERE ID=:id;");
    query.bindValue(":id", id);
    query.bindValue(":prix", prix);
    query.bindValue(":orga", orga);
    query.bindValue(":rev", rev);
    query.bindValue(":cap", cap);
    query.bindValue(":lieu", lieu);
    query.bindValue(":date", datee);



 return query.exec();
}



