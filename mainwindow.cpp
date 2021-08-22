#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include "visiteur.h"
#include <QDate>
#include <QDebug>
#include"notification.h"
Notification N;
Visiteur V;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(V.afficher());
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

    Visiteur newV (nom,prenom,email,sexe,tel,age,id_e,datee);

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
            QMessageBox::critical(nullptr, QObject::tr("Ajouter une Promotion"),
                                  QObject::tr("Erreur !.\n"
                                              "Click Ok to exit."), QMessageBox::Ok);

    }
}

void MainWindow::on_pushButton_11_clicked()
{
   //Visiteur V;
    ui->tableView->setModel(V.afficher());
}

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
