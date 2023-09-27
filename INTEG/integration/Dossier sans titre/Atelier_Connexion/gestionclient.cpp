#include "gestionclient.h"
#include "ui_gestionclient.h"
#include"client.h"
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




gestionclient::gestionclient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestionclient)
{
   ui->setupUi(this);
   Client C;
   ui->le_id->setValidator(new QIntValidator(0,9999999,this));
   ui->tab_cli->setModel(C.afficher());
}

gestionclient::~gestionclient()
{
    delete ui;

}

//************************************************Ajout*********************************************************************************
void gestionclient::on_pb_ajouter_clicked()
{
   int id=ui->le_id->text().toInt();
   QString nom=ui->le_nom->text();
   QString prenom=ui->le_prenom->text();
   QString adressemail=ui->le_adressemail->text();
   QString dateeffectation=ui->le_dateeffectation->text();
   QString sexe=ui->sexe_le->text();
    Client C(id,nom,prenom,adressemail,dateeffectation,sexe);


    if(C.ajouter())
    {

        QMessageBox::information(nullptr,QObject::tr("ok"),
                              QObject::tr("Ajout effectué\n"
                                            "click cancel to exit") ,QMessageBox::Cancel);
        ui->tab_cli->setModel(C.afficher());

 }
    else
        QMessageBox::critical(nullptr,QObject::tr("not ok"),
                              QObject::tr("Ajout non effectué .\n"
                                          "click cancel to exit ."),QMessageBox::Cancel );

}




//**********************************suppression*****************************************************************************************

void gestionclient::on_pb_supprimer_clicked()
{
    Client C1;
    C1.setid(ui->le_id_supp->text().toInt());
    bool test=C1.supprimer(C1.getid());

    if(test)
    {
    QMessageBox::information(nullptr,QObject::tr("ok"),
                          QObject::tr("Suppression avec succes\n"
                                        "click cancel to exit") ,QMessageBox::Cancel);
    ui->tab_cli->setModel(C.afficher());

}
else
    QMessageBox::critical(nullptr,QObject::tr("not ok"),
                          QObject::tr("suppression echouée  .\n"
                                      "click cancel to exit ."),QMessageBox::Cancel );
}



//***********************************modification***************************************************************************************
void gestionclient::on_pb_modifier_clicked()
{
        Client C;
        C.setid(ui->le_id_2->text().toInt());
        QString nom=ui->le_nom_2->text();
        QString prenom=ui->le_prenom_2->text();
        QString adressemail=ui->le_adressemail_2->text();
        QString dateeffectuation=ui->le_dateeffectuation_2->text();


        bool test=C.modifierC(C.getid(),nom,prenom,adressemail,dateeffectuation);

        QMessageBox msgBox;


        if(test)
        {msgBox.setText("Modification avec succés.");
        ui->tab_cli->setModel(C.afficher());

        }
        else msgBox.setText("Echec de modification");
        msgBox.exec();
    }




//************************************************************************************************************************************
//+******************************************************les metiers***************************************************************************************
//************************************************************************************************************************************




//***********************************TRIIIII***************************************************************************************

void gestionclient::on_tri_nom_clicked()
{
    ui->tab_tri->setModel(C.triclientnom());

}


void gestionclient::on_tri_id_clicked()
{
    ui->tab_tri->setModel(C.triclientid());
}

void gestionclient::on_tri_prenom_clicked()
{
     ui->tab_tri->setModel(C.triclientprenom());
}




//***********************************RECHERCHE***************************************************************************************
void gestionclient::on_rechercher_pb_clicked()
{
   Client C;
   QString s1;
   QSqlQueryModel *model=C.recherche( ui->lineedit_ch->text());
   ui->tab_cli->setModel(model);

}


//***********************************PDF***************************************************************************************
void gestionclient::on_pdf_bo_clicked()
{
    QPdfWriter pdf("C:/Users/MSI/Desktop/tools_Connexion_Oracle/Atelier_Connexion/client.pdf");

          QPainter painter(&pdf);
          int i = 4000;
                 painter.setPen(Qt::darkCyan);
                 painter.setFont(QFont("Time New Roman", 25));
                 painter.drawText(3000,1400,"Your PDF");
                 painter.setPen(Qt::black);
                 painter.setFont(QFont("Time New Roman", 15));
                 painter.drawRect(100,100,9400,2500);
                 painter.drawRect(100,3000,9400,500);
                 painter.setFont(QFont("Time New Roman", 9));
                 painter.drawText(400,3300,"id");
                 painter.drawText(1350,3300,"nom");
                 painter.drawText(2200,3300,"prenom");
                 painter.drawText(3500,3300,"adressemail");
                 painter.drawText(5200,3300,"dateeffectation");

                 painter.drawRect(100,3000,9400,10000);

                 QSqlQuery query;
                 query.prepare("select * from Client");
                 query.exec();
                 while (query.next())
                 {
                     painter.drawText(400,i,query.value(0).toString());
                     painter.drawText(1350,i,query.value(1).toString());
                     painter.drawText(2300,i,query.value(2).toString());
                     painter.drawText(3400,i,query.value(3).toString());
                     painter.drawText(5400,i,query.value(4).toString());
                     painter.drawText(900,i,query.value(5).toString());




                    i = i + 350;
                 }
                 QMessageBox::information(this, QObject::tr("PDF Saved Successfuly!"),
                 QObject::tr("PDF Saved Successfuly!.\n" "Click Cancel to exit."), QMessageBox::Cancel);

}





void gestionclient::on_sendButton_clicked()
{
    chat *chat_window= new chat(this);
        chat_window->setModal(true);
        chat_window->show();

        qDebug()<< "Chat is running on " << QThread::currentThread();

        chat_window->exec();
}

bool gestionclient::launch_chat(chat &chat_window)
{
    chat_window.setModal(true);
    chat_window.show();

    qDebug()<< "Chat is running on " << QThread::currentThread();

    return chat_window.exec();
}

//archivage:
void gestionclient::on_pushButton_archiverd_clicked()
{
    int id =ui->tab_cli->model()->data(ui->tab_cli->model()->index(ui->tab_cli->currentIndex().row(),0)).toInt();
    QString nom = ui->tab_cli->model()->data(ui->tab_cli->model()->index(ui->tab_cli->currentIndex().row(),1)).toString();
    QString prenom = ui->tab_cli->model()->data(ui->tab_cli->model()->index(ui->tab_cli->currentIndex().row(),2)).toString();
    QString adressemail = ui->tab_cli->model()->data(ui->tab_cli->model()->index(ui->tab_cli->currentIndex().row(),3)).toString();

     QString dateeffectation= ui->tab_cli->model()->data(ui->tab_cli->model()->index(ui->tab_cli->currentIndex().row(),4)).toString();
     QString sexe = ui->tab_cli->model()->data(ui->tab_cli->model()->index(ui->tab_cli->currentIndex().row(),5)).toString();
   Client C(id,nom,prenom,adressemail,dateeffectation,sexe);
    bool test = C.ajouterarchive();
    bool test1 = C.supprimer(id);
    if((test)&&(test1))
    {
        //refresh

        ui->tab_cli->setModel(C.afficher());
         ui->archiveView->setModel(C.afficherArchive());

        QMessageBox::information(nullptr, QObject::tr("ok"),
                              QObject::tr("archivé avec succes\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
        //ui->le_id_2->setModel(C.afficher());
          //      ui->le_id_supp->setModel(C.afficher());





     }
              else
                  QMessageBox::critical(nullptr, QObject::tr("not ok"),
                              QObject::tr("error lors de l'archivage\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);


}



void gestionclient::on_pushButton_desarchiver_do_clicked()
{
    int id =ui->archiveView->model()->data(ui->archiveView->model()->index(ui->archiveView->currentIndex().row(),0)).toInt();
    QString nom = ui->archiveView->model()->data(ui->archiveView->model()->index(ui->archiveView->currentIndex().row(),1)).toString();
    QString prenom = ui->archiveView->model()->data(ui->archiveView->model()->index(ui->archiveView->currentIndex().row(),2)).toString();
    QString adressemail = ui->archiveView->model()->data(ui->archiveView->model()->index(ui->archiveView->currentIndex().row(),3)).toString();
    QString dateeffectation = ui->archiveView->model()->data(ui->archiveView->model()->index(ui->archiveView->currentIndex().row(),4)).toString();
    QString sexe = ui->archiveView->model()->data(ui->archiveView->model()->index(ui->archiveView->currentIndex().row(),5)).toString();
    Client C(id,nom,prenom,adressemail,dateeffectation,sexe);
    bool test = C.ajouter();
    bool test1 = C.supprimerArchive(id);
    if((test)&&(test1))
    {
        //refresh

        ui->tab_cli->setModel(C.afficher());
         ui->archiveView->setModel(C.afficherArchive());

        QMessageBox::information(nullptr, QObject::tr("ok"),
                              QObject::tr("desarchivé avec succes\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
        ui->le_id_2;
        ui->tab_cli->setModel(C.afficher());
        ui->le_id_supp;
        ui->tab_cli->setModel(C.afficher());


     }
              else
                  QMessageBox::critical(nullptr, QObject::tr("not ok"),
                              QObject::tr("error lors de desarchivage\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);


}

void gestionclient::on_pb_s_clicked()
{
    QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("SELECT sexe FROM Client WHERE  sexe='femme' ");
        float countC=model->rowCount();

        model->setQuery("SELECT  sexe FROM Client WHERE  sexe='male' ");
        float countEC=model->rowCount();

        float total=countC+countEC;

                QPieSeries *series = new QPieSeries();
                series->append("femme",countC);
                series->append("male",countEC);

                if (countC!=0)
                {QPieSlice *slice = series->slices().at(0);
                    slice->setLabel("femme "+QString("%1%").arg(100*slice->percentage(),3,'f',1));
                    slice->setLabelVisible();
                    slice->setPen(QPen(Qt::black));}
                if ( countEC!=0)
                {

                    QPieSlice *slice1 = series->slices().at(1);

                    slice1->setLabel("male "+QString("%1%").arg(100*slice1->percentage(),3,'f',1));
                    slice1->setLabelVisible();
                    slice1->setBrush(QColor(Qt::cyan));
                }


                // Create the chart widget
                QChart *chart = new QChart();

                // Add data to chart with title
                chart->addSeries(series);
                chart->setTitle("Totale "+ QString::number(total));

                // Used to display the chart
                QChartView *chartView = new QChartView(chart);
                chartView->setRenderHint(QPainter::Antialiasing);
                chartView->resize(1000,500);


                chart->legend()->hide();
                chartView->show();
}
