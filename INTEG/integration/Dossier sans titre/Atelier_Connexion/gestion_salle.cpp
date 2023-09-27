#include "gestion_salle.h"

#include "ui_gestion_salle.h"
#include "salle.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QObject>
#include <QDebug>
#include <QMessageBox>
#include <QDialog>
#include <QFrame>
#include <QIntValidator>
#include <QPainter>
#include <QPdfWriter>
#include <QtPrintSupport/QPrintPreviewDialog>
#include <QtConfig>
#include<QPlainTextEdit>
#include <QThread>
#include"chat.h"
#include<QDesktopServices>
#include <QPieSeries>
#include <QtCharts/QChartView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QColor>


#include <QMessageBox>
#include <QIntValidator>
#include <QPainter>
#include <QPdfWriter>
#include <QSqlQuery>
#include<QtCharts>
#include<QPieSlice >
#include<QPieSeries>
#include<QPrinter>
#include <QFileDialog>
#include<QPrintDialog>
#include "connection.h"
#include <QFile>
#include <QtDebug>
#include "qrcodegen.hpp"
#include <QSystemTrayIcon>



salle S;
gestion_salle::gestion_salle(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestion_salle)
{
   ui->setupUi(this);


   ui->lineEdit_salle->setValidator(new QIntValidator(0, 100, this));
   ui->lineEdit_chaise->setValidator(new QIntValidator(0, 100, this));
   ui->lineEdit_tables->setValidator(new QIntValidator(0, 100, this));
   ui->lineEdit_tableau->setValidator(new QIntValidator(0, 100, this));
   ui->lineEdit_equipement->setMaxLength(8);
}

gestion_salle::~gestion_salle()
{
    delete ui;

}

void gestion_salle::on_pushButton_clicked() //ajout
{
       int numero_salle = ui->lineEdit_salle->text().toInt();
        int Nombre_tables = ui->lineEdit_tables->text().toInt();
        int Nombre_chaise = ui->lineEdit_chaise->text().toInt();
        int Nombre_tableaux = ui->lineEdit_tableau->text().toInt();
        QString equipements = ui->lineEdit_equipement->text();

       salle S (numero_salle,Nombre_tables,Nombre_chaise,Nombre_tableaux,equipements);
       bool test = S.ajouter();
        if(test)
        {

            QMessageBox::information(nullptr, QObject::tr("ajout"),
                        QObject::tr("produit ajouté.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

            ui->tableView->setModel(S.affiche());



    }
        else
            QMessageBox::critical(nullptr, QObject::tr("not OK"),
                        QObject::tr("problème d'ajout.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

                ui->lineEdit_salle->clear();
                ui->lineEdit_tables->clear();
                ui->lineEdit_chaise->clear();
                ui->lineEdit_tableau->clear();
                ui->lineEdit_equipement->clear();
    }
void gestion_salle::on_pushButton_2_clicked() //modification
{
    int numero_salle = ui->lineEdit_num_modif->text().toInt();
    int Nombre_tables = ui->lineEdit_nmbr_modif->text().toInt();
    int Nombre_chaise = ui->lineEdit_chaise_modif->text().toInt();

    salle S(numero_salle,Nombre_tables,Nombre_chaise);
    bool test = S.modifier(numero_salle,Nombre_tables,Nombre_chaise);
    if(test)
    {

        QMessageBox::information(nullptr, QObject::tr("modification"),
                    QObject::tr("service modifié.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

        ui->tableView->setModel(S.affiche());

}
    else
        QMessageBox::critical(nullptr, QObject::tr("not OK"),
                    QObject::tr("problème de modification.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);





}
void gestion_salle::on_pushButton_4_clicked() //supprimer
{

    int numero_salle = ui->lineEdit_num_supp->text().toInt();

        bool test = S.supprimer(numero_salle);


       if(test)
        {

            QMessageBox::information(nullptr, QObject::tr("suppression"),
                        QObject::tr("produit supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

            ui->tableView->setModel(S.affiche());

    }
        else
            QMessageBox::critical(nullptr, QObject::tr("not OK"),
                        QObject::tr("problème de suppression.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

}


void gestion_salle::on_pushButton_6_clicked() //PDF
{

    QPdfWriter pdf("C:\\Users\\21627\\OneDrive\\Bureau\\Nouveau dossier\\PDF_SALLE.pdf");

           QPainter painter(&pdf);
           int i = 4000;
                  painter.setPen(Qt::red);
                  painter.setFont(QFont("Time New Roman", 25));
                  painter.drawText(3000,1400,"Liste Des salles");
                  painter.setPen(Qt::black);
                  painter.setFont(QFont("Time New Roman", 15));
                  painter.drawRect(100,3000,9400,500);
                  painter.setFont(QFont("Time New Roman", 9));
                  painter.drawText(1000,3300,"numero_salle");
                  painter.drawText(2500,3300,"Nombre_tables");
                  painter.drawText(4000,3300,"Nombre_tableaux");
                  painter.drawText(5500,3300,"Nombre_chaise");
                  painter.drawText(7000,3300,"equipements");
                  painter.drawRect(100,3000,9400,9000);

                  QSqlQuery query;
                  query.prepare("select * from GS_SALLE");
                  query.exec();
                  while (query.next())
                  {
                      painter.drawText(1000,i,query.value(0).toString());
                      painter.drawText(2500,i,query.value(1).toString());
                      painter.drawText(4000,i,query.value(2).toString());
                      painter.drawText(5500,i,query.value(3).toString());
                      painter.drawText(7000,i,query.value(4).toString());


                     i = i + 350;
                  }
                  QMessageBox::information(this, QObject::tr("PDF Enregistré!"),
                  QObject::tr("PDF Enregistré!.\n" "Click Cancel to exit."), QMessageBox::Cancel);

}





void gestion_salle::on_SSS_2_clicked() //stat
{
    QSqlQueryModel * model= new QSqlQueryModel();
                             model->setQuery("select * from GS_SALLE where SALLE < 10 ");
                             float code=model->rowCount();
                             model->setQuery("select * from GS_SALLE where SALLE  between 10 and 50 ");
                             float codee=model->rowCount();
                             model->setQuery("select * from GS_SALLE where SALLE >50 ");
                             float codeee=model->rowCount();
                             float total=code+codee+codeee;
                             QString a=QString("moins de 10 \t"+QString::number((code*100)/total,'f',2)+"%" );
                             QString b=QString("entre 10 et 50 \t"+QString::number((codee*100)/total,'f',2)+"%" );
                             QString c=QString("+50 \t"+QString::number((codeee*100)/total,'f',2)+"%" );
                             QPieSeries *series = new QPieSeries();
                             series->append(a,code);
                             series->append(b,codee);
                             series->append(c,codeee);
                     if (code!=0)
                     {QPieSlice *slice = series->slices().at(0);
                      slice->setLabelVisible();
                      slice->setPen(QPen());}
                     if ( codee!=0)
                     {
                              // Add label, explode and define brush for 2nd slice
                              QPieSlice *slice1 = series->slices().at(1);
                              //slice1->setExploded();
                              slice1->setLabelVisible();
                     }
                     if(codeee!=0)
                     {
                              // Add labels to rest of slices
                              QPieSlice *slice2 = series->slices().at(2);
                              //slice1->setExploded();
                              slice2->setLabelVisible();
                     }
                             // Create the chart widget
                             QChart *chart = new QChart();
                             // Add data to chart with title and hide legend
                             chart->addSeries(series);
                             chart->setTitle("Pourcentage Par numero_salle :Nombre Des salles "+ QString::number(total));
                             chart->legend()->hide();
                             // Used to display the chart
                             QChartView *chartView = new QChartView(chart);
                             chartView->setRenderHint(QPainter::Antialiasing);
                             chartView->resize(1000,500);
                             chartView->show();
}

void gestion_salle::on_pushButton_Afficher_clicked() //AFFIC
{
    ui->tableView->setModel(S.affiche());

}

void gestion_salle::on_pushButton_Excel_clicked() //fichier exel
{
    QString nomFile="fichier excel ";
            QMessageBox msg;
            if(!nomFile.length()){

                msg.setText("entrer le nom du fichier");
                msg.exec();
            }
            else{
            QFile file("C:\\Users\\21627\\OneDrive\\Documents\\ProjetC++\\"+nomFile+".csv");
            QString finalmsg="fichier modifie avec succes";
             if(!file.exists()){
             finalmsg="fichier cree avec succes";
             }
            file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);

            QTextStream txt(&file);
            txt<<"numero_salle \t\t    Nombre_tables    \t\t    Nombre_chaise   \t\t     Nombre_tableaux  \t\t       equipements      \n";

            for(int i=0;i<5;i++){

            QString numero_salle= ui->tableView->model()->index(i,0).data().toString();
            QString Nombre_tables= ui->tableView->model()->index(i,1).data().toString();
            QString Nombre_chaise= ui->tableView->model()->index(i,2).data().toString();
            QString Nombre_tableaux= ui->tableView->model()->index(i,3).data().toString();
            QString equipements= ui->tableView->model()->index(i,4).data().toString();

            if(numero_salle.length()){

            txt<< "'"+ numero_salle +"' \t";
            txt<< "                    '"+ Nombre_tables +"' \t";
            txt<< "                             '"+ Nombre_chaise +"' \t";
            txt<< "                             '"+ Nombre_tableaux +"' \t";
            txt<< "                             '"+ equipements +"' \n";
            }
            }
            msg.setText(finalmsg);
            msg.exec();
            file.close();
            }

}

void gestion_salle::on_lineEdit_recherche_textChanged()
{

    QString rech=ui->lineEdit_recherche->text();
    ui->tableView->setModel(S.RechercheSalle(rech));
}



void gestion_salle::on_comboBox_tri_activated()
{
    if(ui->comboBox_tri->currentText()=="Tri par Salle")
    {
        ui->tableView->setModel(S.trierespParnumero_salle());

    }else if(ui->comboBox_tri->currentText()=="Tri par Table")
    {
        ui->tableView->setModel(S.trierespParTable());

    }else
    {
        ui->tableView->setModel(S.trierespParChaise());
    }
}


void gestion_salle::on_tableView_clicked(const QModelIndex &index)
{
        QString numero_salle=ui->tableView->model()->data(ui->tableView->model()->index(index.row(),0)).toString();
        ui -> lineEdit_11->setText(numero_salle) ;
        QString Nombre_tables=ui->tableView->model()->data(ui->tableView->model()->index(index.row(),0)).toString();
        ui -> lineEdit_12->setText(Nombre_tables);
        QString Nombre_chaise=ui->tableView->model()->data(ui->tableView->model()->index(index.row(),0)).toString();
        ui -> lineEdit_13->setText(Nombre_chaise);
        QString Nombre_tableaux=ui->tableView->model()->data(ui->tableView->model()->index(index.row(),2)).toString();
        ui -> lineEdit_14->setText(Nombre_tableaux);
        QString equipements=ui->tableView->model()->data(ui->tableView->model()->index(index.row(),4)).toString();
        ui -> lineEdit_15->setText(equipements) ;

        //generer code QR
        QString text ="salle details :  nombre tables :"+ ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),0)).toString()
                +" nombre table :"+ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),1)).toString()
                +" nombre chaise :"+ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),2)).toString()
                +" nombre tableaux :"+ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),3)).toString()
                +" equipements "+ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),4)).toString();
        using namespace qrcodegen;
          // Create the QR Code object
          QrCode qr = QrCode::encodeText( text.toUtf8().data(), QrCode::Ecc::MEDIUM );
          qint32 sz = qr.getSize();
          QImage im(sz,sz, QImage::Format_RGB32);
            QRgb black = qRgb(  0,  0,  0);
            QRgb white = qRgb(255,255,255);
          for (int y = 0; y < sz; y++)
            for (int x = 0; x < sz; x++)
              im.setPixel(x,y,qr.getModule(x, y) ? black : white );
          ui->qrcode->setPixmap( QPixmap::fromImage(im.scaled(256,256,Qt::KeepAspectRatio,Qt::FastTransformation),Qt::MonoOnly) );

}

