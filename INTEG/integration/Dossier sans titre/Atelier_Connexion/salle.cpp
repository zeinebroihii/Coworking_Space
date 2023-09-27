#include "salle.h"

#include<QPainter>
#include<QPdfWriter>
#include <QString>
#include <QSqlQuery>
#include <QtDebug>
#include<QObject>

salle::salle()
{
numero_salle = 0;
Nombre_tables = 0;
Nombre_chaise= 0;
Nombre_tableaux= 0;
equipements="";


}

salle::salle(int SALLE,int TABLES,int CHAISE,int TABLEAU,QString EQUIPEMENT)
{


    numero_salle = SALLE;
    Nombre_tables=TABLES;
    Nombre_chaise=CHAISE;
    Nombre_tableaux=TABLEAU;
    equipements = EQUIPEMENT;
}


salle::salle(int SALLE,int TABLES,int CHAISE)
{


    numero_salle = SALLE;
    Nombre_tables=TABLES;
    Nombre_chaise = CHAISE;
}



bool salle::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO GS_SALLE (SALLE,TABLES,CHAISE,TABLEAU,EQUIPEMENT) "
                        "VALUES (:SALLE,:TABLES,:CHAISE,:TABLEAU,:EQUIPEMENT)");
    query.bindValue(":SALLE", numero_salle);
    query.bindValue(":TABLES", Nombre_tables);
    query.bindValue(":CHAISE", Nombre_chaise);
    query.bindValue(":TABLEAU", Nombre_tableaux);
    query.bindValue(":EQUIPEMENT", equipements);



    return    query.exec();
}


bool salle::supprimer(int SALLE)
{
    QSqlQuery query;
    QString res= QString::number(SALLE);
    query.prepare("Delete from GS_SALLE where SALLE = :numero_salle ");
    query.bindValue(":numero_salle", res);
    return    query.exec();
}


bool salle::modifier(int numero_salle, int Nombre_tables , int Nombre_chaise)
{
    QSqlQuery query;


     query.prepare( "UPDATE GS_SALLE SET CHAISE=:CHAISE,TABLES=:TABLES WHERE SALLE = :SALLE;");
     query.bindValue(":CHAISE", Nombre_chaise);
     query.bindValue(":TABLES", Nombre_tables);
     query.bindValue(":SALLE", numero_salle);


  return query.exec();
}




QSqlQueryModel * salle::affiche()
{
    QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from GS_SALLE");

model->setHeaderData(0, Qt::Horizontal, QObject::tr("numero_salle"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nombre_tables"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nombre_chaise"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nombre_tableaux"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("equipements"));


    return model;
}


void salle::genererPDFact()
{

    QPdfWriter pdf("C:/Users/21627/OneDrive/Bureau/Nouveau dossier/PDF.pdf");
    QPainter painter(&pdf);
   int i = 4000;
        painter.setPen(Qt::green);
        painter.setFont(QFont("Arial", 50));
        painter.drawText(1100,1200,"Liste Des salles");
        painter.setPen(Qt::red);
        painter.setFont(QFont("Arial", 15));
        painter.drawRect(100,100,7300,2600);
        painter.drawRect(0,3000,9600,500);
        painter.setFont(QFont("Arial", 9));
        painter.drawText(200,3300,"numero_salle");
        painter.drawText(1300,3300,"Nombre_tables");
        painter.drawText(2400,3300,"Nombre_chaise");
           painter.drawText(3500,3300,"Nombre_tableaux");
              painter.drawText(4600,3300,"equipements");

        QSqlQuery query;
        query.prepare("select * from GS_SALLE");
        query.exec();
        while (query.next())
        {
            painter.drawText(200,i,query.value(0).toString());
            painter.drawText(1300,i,query.value(1).toString());
            painter.drawText(2400,i,query.value(2).toString());
            painter.drawText(3500,i,query.value(3).toString());
            painter.drawText(4600,i,query.value(4).toString());


           i = i + 500;
        }


}


QSqlQueryModel* salle::RechercheSalle(QString recherche)
{
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("SELECT * FROM GS_SALLE WHERE SALLE LIKE '"+recherche+"%' OR TABLES LIKE '"+recherche+"%' OR CHAISE LIKE '"+recherche+"%'");
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("SALLE"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("TABLES"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("CHAISE"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("TABLEAU"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("EQUIPEMENT"));

return model;
}



QSqlQueryModel * salle::trierespParnumero_salle()
{

    QSqlQuery * q = new  QSqlQuery ();
           QSqlQueryModel * model = new  QSqlQueryModel ();
           q->prepare("SELECT * FROM GS_SALLE order by SALLE ASC ");

           q->exec();
           model->setQuery(*q);
           return model;

}


QSqlQueryModel * salle::trierespParTable()
{

    QSqlQuery * q = new  QSqlQuery ();
           QSqlQueryModel * model = new  QSqlQueryModel ();
           q->prepare("SELECT * FROM GS_SALLE order by TABLES ASC ");

           q->exec();
           model->setQuery(*q);
           return model;

}



QSqlQueryModel * salle::trierespParChaise()
{

    QSqlQuery * q = new  QSqlQuery ();
           QSqlQueryModel * model = new  QSqlQueryModel ();
           q->prepare("SELECT * FROM GS_SALLE order by CHAISE ASC ");

           q->exec();
           model->setQuery(*q);
           return model;

}
