#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include "visiteur.h"
#include "evenement.h"
#include <QDate>
#include <QDebug>
#include"notification.h"
Notification N;
Visiteur V;
Evenement E ;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(V.afficher());
    ui->tableView_1->setModel(E.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_15_clicked()
{
   ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_14_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_16_clicked()
{

    QString nom= ui->lineEdit_nom->text();
    QString prenom= ui->lineEdit_prenom->text();
    QString email= ui->lineEdit_email->text();
    QString tel= ui->lineEdit_tel->text();
    //int id= ui->lineEdit_pourc_2->text().toInt();
    int id_e= ui->lineEdit_ide->text().toInt();
    int age= ui->spinBox->text().toInt();
    QString sexe;//= ui->radioButton->text();
    if (ui->radioButton->isChecked()) sexe="HOMME";
        else {
            sexe="FEMME";
        }
    QDate datee=QDate::currentDate();

    ///////////////////////
    /// \brief newV
    /// \return
    ///
    QRegExp mailREX("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b");
    mailREX.setCaseSensitivity(Qt::CaseInsensitive);
    mailREX.setPatternSyntax(QRegExp::RegExp);
    //qDebug() << mailREX.exactMatch(email);
    ////////////

    Visiteur newV (0,nom,prenom,email,sexe,tel,age,id_e,datee);

    if (ui->lineEdit_nom->text().isEmpty())
    {

        QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP NOM !!!!") ;

        QMessageBox::critical(0, qApp->tr("Ajout"),

                              qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);


    }

    else if (ui->lineEdit_prenom->text().isEmpty())
    {

        QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP PRENOM!!!!") ;
        QMessageBox::critical(0, qApp->tr("Ajout"),

                              qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

    }
    else if (ui->spinBox->text().isEmpty())
    {

        QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP AGE!!!!") ;
        QMessageBox::critical(0, qApp->tr("Ajout"),

                              qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

    }
    else if (ui->lineEdit_email->text().isEmpty() && !(mailREX.exactMatch(email)) )
    {

        QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP EMAIL!!!!") ;
        QMessageBox::critical(0, qApp->tr("Ajout"),

                              qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

    }

    else if (!(ui->radioButton->isChecked())&&(!(ui->radioButton_2->isChecked())))
    {

        QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP SEXE!!!!") ;
        QMessageBox::critical(0, qApp->tr("Ajout"),

                              qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

    }


    else if (ui->lineEdit_ide->text().isEmpty())
    {

        QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP ID EVENEMENT!!!!") ;
        QMessageBox::critical(0, qApp->tr("Ajout"),

                              qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

    }
    else if (ui->lineEdit_tel->text().isEmpty() && (ui->lineEdit_tel->text().length()<8))
    {

        QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP tel!!!!") ;
        QMessageBox::critical(0, qApp->tr("Ajout"),

                              qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

    }



    else{
        bool test=newV.ajouter();
        if(test)
        {

           // refresh_mortadha();
            //musicAdd->setMedia(QUrl("C:/sound/ajout succe.mp3"));

             //musicAdd->play();
            //N.notification_ajoutVisiteur();
            N.notification_ajoutVisiteur();

            QMessageBox::information(nullptr, QObject::tr("Ajouter un Visiteur"),
                                     QObject::tr("Visiteur ajouté(e).\n"
                                                 "Click Ok to exit."), QMessageBox::Ok);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Ajouter un visiteur"),
                                  QObject::tr("Erreur !.\n"
                                              "Click Ok to exit."), QMessageBox::Ok);

    }
}
// refrech
void MainWindow::on_pushButton_11_clicked()
{
   //Visiteur V;
    ui->tableView->setModel(V.afficher());
    ui->tableView_1->setModel(E.afficher());
}
// recherche
void MainWindow::on_lineEdit_returnPressed()
{
    if(ui->lineEdit->text()!="")
    {        //QString b=ui->comboBox_recherche_Publicite_2->currentText();
        QString a=ui->lineEdit->text();
        ui->tableView->setModel(V.displayClause("WHERE (ID LIKE '%"+a+"%' OR NOM LIKE '%"+a+"%' OR PRENOM LIKE '%"+a+"%' OR EMAIL LIKE '%"+a+"%' OR AGE LIKE '%"+a+"%' OR TEL LIKE '%"+a+"%' OR SEXE LIKE '%"+a+"%' OR ID_E LIKE '%"+a+"%' OR DATEVISITEUR LIKE '%"+a+"%') "));
    }
    else
        ui->tableView->setModel(V.afficher());
}
//supprimer
void MainWindow::on_pushButton_19_clicked()
{
    if(ui->tableView->currentIndex().row()==-1)
        QMessageBox::information(nullptr, QObject::tr("Suppression"),
                                 QObject::tr("Veuillez Choisir un(e) visiteur(e) du Tableau.\n"
                                             "Click Ok to exit."), QMessageBox::Ok);
    else
    {   int id=ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),0)).toInt();
        //Promotion p(ui->afficher_promo->model()->data(ui->afficher_promo->model()->index(ui->afficher_promo->currentIndex().row(),0)).toString(),ui->afficher_promo->model()->data(ui->afficher_promo->model()->index(ui->afficher_promo->currentIndex().row(),1)).toString(),ui->afficher_promo->model()->data(ui->afficher_promo->model()->index(ui->afficher_promo->currentIndex().row(),2)).toInt(),ui->afficher_promo->model()->data(ui->afficher_promo->model()->index(ui->afficher_promo->currentIndex().row(),3)).toDate(),ui->afficher_promo->model()->data(ui->afficher_promo->model()->index(ui->afficher_promo->currentIndex().row(),4)).toString());



        QString str = " Vous voulez vraiment supprimer \n le Visiteur :";
        int ret = QMessageBox::question(this, tr("Visiteur"),str,QMessageBox::Ok|QMessageBox::Cancel);

        switch (ret) {
        case QMessageBox::Ok:
            if (V.supprimer(id)){
                N.notification_supprimerVisiteur();
                //musicAdd->setMedia(QUrl("C:/Users/Lenovo/Desktop/onsss/ONS/sound/supp succ.mp3"));

                 //musicAdd->play();
                //refresh_mortadha();

                QMessageBox::information(0, qApp->tr("Suppression"),

                                         qApp->tr("Visiteur suprimée"), QMessageBox::Ok);

            }
            else
            {

                QMessageBox::critical(0, qApp->tr("Suppression"),
                                      qApp->tr("Visiteur non trouvé "), QMessageBox::Ok);
            }



            break;
        case QMessageBox::Cancel:

            break;
        default:
            // should never be reached
            break;
        }


    }
ui->tableView->setModel(V.afficher());
}

//Modifier
void MainWindow::on_pushButton_18_clicked()
{
    Visiteur test(
                  ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),0)).toInt(),
                  ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),2)).toString(),
                  ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),3)).toString(),
                  ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),4)).toString(),
                  ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),5)).toString(),
                  ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),6)).toString(),
                  ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),7)).toInt(),
                  ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),8)).toInt(),
                ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),1)).toDate()
     );
    bool ok;
    switch (ui->tableView->currentIndex().column()) {
    case 2 :
        test.set_nom(ui->lineEdit_2->text());
        ok=test.modifier();
    break;
    case 3 :
        test.set_prenom(ui->lineEdit_2->text());
        ok=test.modifier();
    break;
    case 4 :
        test.set_email(ui->lineEdit_2->text());
        ok=test.modifier();
    break;
    case 5 :
        test.set_tel(ui->lineEdit_2->text());
        ok=test.modifier();
    break;
    case 6 :
        test.set_age(ui->lineEdit_2->text().toInt());
        ok=test.modifier();
    break;
    case 7 :
        test.set_sexe(ui->lineEdit_2->text());
        ok=test.modifier();
    break;
    case 8 :
        test.set_idE(ui->lineEdit_2->text().toInt());
        ok=test.modifier();
    break;
    default:
        ok=false;
        break;
    }
    if(ok)
    {
        //QMessageBox::information(this," Modifier "," Votre Publicite est modifiée") ;
        QMessageBox::information(0, qApp->tr("Modification"),

                                 qApp->tr("Visiteur Modifiée"), QMessageBox::Ok);


       N.notification_modifierVisiteur();
      //  musicAdd->setMedia(QUrl("C:/sound/modif succ.mp3"));

        // musicAdd->play();
       // refresh_mortadha();


    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("modifier Visiteur"),
                              QObject::tr("Erreur !.\n"
                                          "Click Ok to exit."), QMessageBox::Ok);
    }

    ui->lineEdit_2->clear();
    ui->tableView->setModel(V.afficher());

}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    QString arr[9]={"interdit","interdit","Nom","Prenom","Email","Tel","Age","Sexe","ID Evenement"};
    ui->label_11->setText("Modifier "+arr[index.column()]);
    if (index.column()!=0 && index.column()!=1 ) ui->lineEdit_2->setText(index.data().toString());
    else
        ui->lineEdit_2->setText("...");
}

void MainWindow::on_tableView_1_clicked(const QModelIndex &index)
{
    QString arr[7]={"interdit","Prix","Organisateur","Relevé Approximative","Capacité","Lieu"};
    ui->label_30->setText("Modifier "+arr[index.column()]);
    if (index.column()!=0) ui->lineEdit_5->setText(index.data().toString());
    else
        ui->lineEdit_5->setText("...");
}

void MainWindow::on_pushButton_22_clicked()
{
    QString lieu= ui->lineEdit_lieu->text();
    QString orga= ui->lineEdit_orga->text();
    int prix= ui->lineEdit_prix->text().toInt();
    int rev= ui->lineEdit_prix->text().toInt();
    int cap= ui->lineEdit_cap->text().toInt();
    //QDate datee=QDate::currentDate();
    QDateTime datee=ui->dateTimeEdit->dateTime();

    ///////////////////////
    /// \brief newV
    /// \return
    ///
   // QRegExp mailREX("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b");
   // mailREX.setCaseSensitivity(Qt::CaseInsensitive);
   // mailREX.setPatternSyntax(QRegExp::RegExp);
    //qDebug() << mailREX.exactMatch(email);
    ////////////

    Evenement newE (0,datee,prix,orga,rev,cap,lieu);

    if (ui->lineEdit_prix->text().isEmpty())
    {

        QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP PRIX !!!!") ;

        QMessageBox::critical(0, qApp->tr("Ajout"),

                              qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);


    }

    else if (ui->lineEdit_orga->text().isEmpty())
    {

        QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP ORGANISATEUR!!!!") ;
        QMessageBox::critical(0, qApp->tr("Ajout"),

                              qApp->tr("Probleme d'ajout"), QMessageBox::Ok);

    }
    else if (ui->lineEdit_rev->text().isEmpty())
    {

        QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP RELEVER APPROXIMATIVE!!!!") ;
        QMessageBox::critical(0, qApp->tr("Ajout"),

                              qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

    }
    else if (ui->lineEdit_cap->text().isEmpty())
    {

        QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP CAPACITE!!!!") ;
        QMessageBox::critical(0, qApp->tr("Ajout"),

                              qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

    }


    else if (ui->lineEdit_lieu->text().isEmpty())
    {

        QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP LIEU!!!!") ;
        QMessageBox::critical(0, qApp->tr("Ajout"),

                              qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

    }


    else{
        bool test=newE.ajouter();
        if(test)
        {

           // refresh_mortadha();
            //musicAdd->setMedia(QUrl("C:/sound/ajout succe.mp3"));

             //musicAdd->play();
            //N.notification_ajoutVisiteur();
            N.notification_ajoutEvenement();

            QMessageBox::information(nullptr, QObject::tr("Ajouter un Evenement"),
                                     QObject::tr("Visiteur ajouté(e).\n"
                                                 "Click Ok to exit."), QMessageBox::Ok);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Ajouter un Evenement"),
                                  QObject::tr("Erreur !.\n"
                                              "Click Ok to exit."), QMessageBox::Ok);

    }

}





void MainWindow::on_pushButton_32_clicked()
{
    Evenement test(
                  ui->tableView_1->model()->data(ui->tableView_1->model()->index(ui->tableView_1->currentIndex().row(),0)).toInt(),
                  ui->tableView_1->model()->data(ui->tableView_1->model()->index(ui->tableView_1->currentIndex().row(),1)).toDateTime(),
                  ui->tableView_1->model()->data(ui->tableView_1->model()->index(ui->tableView_1->currentIndex().row(),2)).toInt(),
                  ui->tableView_1->model()->data(ui->tableView_1->model()->index(ui->tableView_1->currentIndex().row(),3)).toString(),
                  ui->tableView_1->model()->data(ui->tableView_1->model()->index(ui->tableView_1->currentIndex().row(),4)).toInt(),
                  ui->tableView_1->model()->data(ui->tableView_1->model()->index(ui->tableView_1->currentIndex().row(),5)).toInt(),
                  ui->tableView_1->model()->data(ui->tableView_1->model()->index(ui->tableView_1->currentIndex().row(),6)).toString()


     );
    bool ok;
    switch (ui->tableView_1->currentIndex().column()) {
    case 2 :
        test.set_prix(ui->lineEdit_5->text().toInt());
        ok=test.modifier();
    break;
    case 3 :
        test.set_orga(ui->lineEdit_5->text());
        ok=test.modifier();
    break;
    case 4 :
        test.set_rev(ui->lineEdit_5->text().toInt());
        ok=test.modifier();
    break;
    case 5 :
        test.set_cap(ui->lineEdit_5->text().toInt());
        ok=test.modifier();
    break;
    case 7 :
        test.set_cap(ui->lineEdit_5->text().toInt());
        ok=test.modifier();
    break;
    case 8 :
        test.set_lieu(ui->lineEdit_5->text());
        ok=test.modifier();
    break;
    default:
        ok=false;
        break;
    }
    if(ok)
    {
        //QMessageBox::information(this," Modifier "," Votre Publicite est modifiée") ;
        QMessageBox::information(0, qApp->tr("Modification"),

                                 qApp->tr("Visiteur Modifiée"), QMessageBox::Ok);


       N.notification_modifierEvenement();
      //  musicAdd->setMedia(QUrl("C:/sound/modif succ.mp3"));

        // musicAdd->play();
       // refresh_mortadha();


    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("modifier Visiteur"),
                              QObject::tr("Erreur !.\n"
                                          "Click Ok to exit."), QMessageBox::Ok);
    }

    ui->lineEdit_5->clear();
    ui->tableView_1->setModel(E.afficher());

}
//supprimer evenement
void MainWindow::on_pushButton_30_clicked()
{
    if(ui->tableView_1->currentIndex().row()==-1)
        QMessageBox::information(nullptr, QObject::tr("Suppression"),
                                 QObject::tr("Veuillez Choisir un(e) visiteur(e) du Tableau.\n"
                                             "Click Ok to exit."), QMessageBox::Ok);
    else
    {   int id=ui->tableView_1->model()->data(ui->tableView_1->model()->index(ui->tableView_1->currentIndex().row(),0)).toInt();
        //Promotion p(ui->afficher_promo->model()->data(ui->afficher_promo->model()->index(ui->afficher_promo->currentIndex().row(),0)).toString(),ui->afficher_promo->model()->data(ui->afficher_promo->model()->index(ui->afficher_promo->currentIndex().row(),1)).toString(),ui->afficher_promo->model()->data(ui->afficher_promo->model()->index(ui->afficher_promo->currentIndex().row(),2)).toInt(),ui->afficher_promo->model()->data(ui->afficher_promo->model()->index(ui->afficher_promo->currentIndex().row(),3)).toDate(),ui->afficher_promo->model()->data(ui->afficher_promo->model()->index(ui->afficher_promo->currentIndex().row(),4)).toString());



        QString str = " Vous voulez vraiment supprimer \n le Visiteur :";
        int ret = QMessageBox::question(this, tr("Visiteur"),str,QMessageBox::Ok|QMessageBox::Cancel);

        switch (ret) {
        case QMessageBox::Ok:
            if (E.supprimer(id)){
                N.notification_supprimerEvenement();
                //musicAdd->setMedia(QUrl("C:/Users/Lenovo/Desktop/onsss/ONS/sound/supp succ.mp3"));

                 //musicAdd->play();
                //refresh_mortadha();

                QMessageBox::information(0, qApp->tr("Suppression"),

                                         qApp->tr("Visiteur suprimée"), QMessageBox::Ok);

            }
            else
            {

                QMessageBox::critical(0, qApp->tr("Suppression"),
                                      qApp->tr("Visiteur non trouvé "), QMessageBox::Ok);
            }



            break;
        case QMessageBox::Cancel:

            break;
        default:
            // should never be reached
            break;
        }


    }
ui->tableView_1->setModel(E.afficher());

}
//recherche Evenement
void MainWindow::on_lineEdit_6_returnPressed()
{
    if(ui->lineEdit_6->text()!="")
    {        //QString b=ui->comboBox_recherche_Publicite_2->currentText();
        QString a=ui->lineEdit_6->text();
        ui->tableView_1->setModel(E.displayClause("WHERE (ID LIKE '%"+a+"%' OR DATEEVENEMENT LIKE '%"+a+"%' OR PRIX LIKE '%"+a+"%' OR ORGANISATEUR LIKE '%"+a+"%' OR REVAPP LIKE '%"+a+"%' OR CAP LIKE '%"+a+"%' OR LIEU LIKE '%"+a+"%') "));
    }
    else
        ui->tableView_1->setModel(E.afficher());
}
