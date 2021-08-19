#include "connection.h"

connection::connection()
{

}

bool connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test-db");//inserer le nom de la source de données ODBC
db.setUserName("nassim");//inserer nom de l'utilisateur
db.setPassword("nassim");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
