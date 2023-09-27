#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connection.h"
#include"employe.h"

#include<QString>
#include <QObject>
#include <QDebug>
#include <QMessageBox>
#include <QIntValidator>
/*#include <QSystemTrayIcon>
#include <QRegExpValidator>*/
#include <QPainter>
#include <QPdfWriter>
#include <QtPrintSupport/QPrintPreviewDialog>
#include <QtConfig>
#include <QTextStream>
#include <QFile>
#include <QDateTime>
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


#include<QUrl>







MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Employe E;
    ui->le_id->setValidator( new QIntValidator(0,99999, this));
    ui->tab_employe->setModel(E.afficher());



}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pb_ajouter_clicked()
{

    int id=ui->le_id->text().toInt();
    QString ids=ui->le_id->text();

   QString nom=ui->le_nom->text();
   QString prenom=ui->le_prenom->text();
   QString adressemail=ui->le_adressemail->text();
   QString dateembau=ui->le_dateembau->text();
   QString sexe=ui->le_sexe->text();
    Employe E(id,nom,prenom,adressemail,dateembau,sexe);


    if(E.ajouter())
    {
 // m.afficher();


        QMessageBox::information(nullptr,QObject::tr("ok"),
                              QObject::tr("Ajout effectue\n"
                                            "click cancel to exit") ,QMessageBox::Cancel);
        foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                                               le->clear();}
                                          QFile file("C:/Users/MSI/Desktop/tools_connexion_oracle/Atelier_Connexion/logs/historiques.txt");
                                          if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                                              return;
                                          QTextStream cout(&file);
                                          QString d_info = QDateTime::currentDateTime().toString();
                                          QString message2=" + "+d_info+" A employe has been added by id : "+ids+"\n";
                                          cout << message2;
                                         // hide();



        //REFRESH////////
        ui->tab_employe->setModel(E.afficher());


 }
    else
        QMessageBox::critical(nullptr,QObject::tr("not ok"),
                              QObject::tr("ajout non effectue .\n"
                                          "click cancel to exit ."),QMessageBox::Cancel );







}

void MainWindow::on_pb_supp_clicked()
{
  Employe E1;E1.setid(ui->le_id_supp->text().toInt());
  if(E1.supprimer(E1.getid()))
  {

      QMessageBox::information(nullptr,QObject::tr("ok"),
                            QObject::tr("supression effectue\n"
                                          "click cancel to exit") ,QMessageBox::Cancel);
      //REFRESH/////////
     ui->tab_employe->setModel(E.afficher());

}
  else
      QMessageBox::critical(nullptr,QObject::tr("not ok"),
                            QObject::tr("suppression non effectue .\n"
                                        "click cancel to exit ."),QMessageBox::Cancel );






}

void MainWindow::on_pb_modif_clicked()
{
    Employe E;
   E.setid(ui->lineEdit1->text().toInt());
    QString nom=ui->lineEdit_2->text();
     QString prenom=ui->lineEdit_3->text();

    bool test=(E.modifier(E.getid(),nom,prenom)) ;

    QMessageBox msgBox;
     if(test)
    {msgBox.setText("Modification avec succés.");
   ui->tab_employe->setModel(E.afficher());

    }
    else msgBox.setText("Echec de modification");
    msgBox.exec();
}



void MainWindow::on_pushButton_3_clicked()
{
    ui->tab_tri->setModel(E.triemploye());

}



void MainWindow::on_pushButton_4_clicked()
{
    ui->tab_tri->setModel(E.triemployenom());
}

void MainWindow::on_pushButton_5_clicked()
{
     ui->tab_tri->setModel(E.triemployeprenom());
}

void MainWindow::on_pb_recherche_2_clicked()
{
    Employe E;
       QString s1;
          QSqlQueryModel *model=E.recherche( ui->lineEdit_ch->text());
           ui->tab_employe->setModel(model);
}

void MainWindow::on_pb_pdf_clicked()
{
    QPdfWriter pdf("C:/Users/MSI/Desktop/tools_connexion_oracle/Atelier_Connexion/employe.pdf");

              QPainter painter(&pdf);
              int i = 4000;
                     painter.setPen(Qt::darkCyan);
                     painter.setFont(QFont("Time New Roman", 25));
                     painter.drawText(3000,1400,"liste des employes");
                     painter.setPen(Qt::black);
                     painter.setFont(QFont("Time New Roman", 15));
                     painter.drawRect(100,100,9400,2500);
                     painter.drawRect(100,3000,9400,500);
                     painter.setFont(QFont("Time New Roman", 9));
                     painter.drawText(400,3300,"id");
                     painter.drawText(1350,3300,"nom");
                     painter.drawText(2200,3300,"prenom");
                     painter.drawRect(100,3000,9400,9000);

                     QSqlQuery query;
                     query.prepare("select * from Employe");
                     query.exec();
                     while (query.next())
                     {
                         painter.drawText(400,i,query.value(0).toString());
                         painter.drawText(1350,i,query.value(1).toString());
                         painter.drawText(2300,i,query.value(2).toString());
                         painter.drawText(3400,i,query.value(3).toString());
                         painter.drawText(4400,i,query.value(4).toString());
                         painter.drawText(6200,i,query.value(5).toString());




                        i = i + 350;
                     }
                     QMessageBox::information(this, QObject::tr("PDF Saved Successfuly!"),
                     QObject::tr("PDF Saved Successfuly!.\n" "Click Cancel to exit."), QMessageBox::Cancel);

}



void MainWindow::on_pb_his_clicked()
{
    His=new his(this);
                        His->show();
                        his m;
                      m.readfile();
}




void MainWindow::on_pbstat_clicked()
{
    QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("SELECT sexe FROM Employe WHERE  sexe='femme' ");
        float countC=model->rowCount();

        model->setQuery("SELECT  sexe FROM Employe WHERE  sexe='male' ");
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
