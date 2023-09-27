#include "client.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

Client::Client()
{
 id=0; nom=" ";prenom=" ";adressemail=" ";dateeffectuation=" ";sexe=" ";

}

Client::Client(int id, QString nom,QString prenom, QString adressemail,QString dateeffectuation,QString sexe)
{
    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->adressemail=adressemail;
    this->dateeffectuation=dateeffectuation;
    this->sexe=sexe;
}


int Client:: getid(){return id;}
QString Client:: getnom(){return nom;}
QString Client:: getprenom(){return prenom;}
QString Client:: getadressemail(){return adressemail;}
QString Client:: getdateeffectuation(){return dateeffectuation;}
QString Client:: getsexe(){return sexe;}

void Client::setid (int id){this->id=id;}
void Client::setnom(QString nom){this->nom=nom;}
void Client::setprenom(QString prenom){this->prenom=prenom;}
void Client::setadressemail(QString adressemail){this->adressemail=adressemail;}
void Client::setdateeffectuation(QString dateeffectuation){this->dateeffectuation=dateeffectuation;}
void Client::setsexe(QString sexe){this->sexe=sexe;}


bool Client::rechercheArchive()
{
    QSqlQueryModel *  model=new QSqlQueryModel();
    model->setQuery("select * from affarchive");
    int n = model->rowCount();
    for (int i = 0 ; i<n ; i ++ )
    {
        if (model->data(model->index(i,0)).toInt() == id )
        {
            return false ;
        }

    }
    return true ;
}




bool Client::ajouter()
{
    QSqlQuery query;
    QString res=QString::number(id);
         query.prepare("INSERT INTO Client (id, nom, prenom,adressemail,dateeffectuation,sexe ) "
                       "VALUES (:id, :nom, :prenom,:adressemail,:dateeffectuation,:sexe)");
         query.bindValue(":id", id);
         query.bindValue(":nom", nom);
         query.bindValue(":prenom", prenom);
          query.bindValue(":adressemail", adressemail);
          query.bindValue(":dateeffectuation", dateeffectuation);
          query.bindValue(":sexe", sexe);
         return query.exec();

}


bool Client::ajouterarchive()
{


    QSqlQuery query;

    QString id_string= QString ::number(id);

          query.prepare("INSERT INTO client (id,nom,prenom,adressemail,dateeffectuation,sexe) "
                        "VALUES (:id, :nom, :prenom,:adressemail, :dateeffectuation, :sexe)");
          query.bindValue(":id", id_string);
          query.bindValue(":nom", nom);
          query.bindValue(":prenom", prenom);
          query.bindValue(":adressemail", adressemail);
          query.bindValue(":dateeffectuation", dateeffectuation);
          query.bindValue(":sexe", sexe);

         return query.exec();
}
QSqlQueryModel* Client::afficher()
{
 QSqlQueryModel* model=new QSqlQueryModel();


       model->setQuery("SELECT* FROM CLIENT");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));//ajouter le nom de tableau
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("adressemail"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("dateeffectuation"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));
    return model;

}


bool Client::modifierC(int id,QString nom,QString prenom,QString adressemail,QString dateeffectuation)
{
    QSqlQuery query;

        query.prepare("UPDATE Client set id=id, nom=:nom, prenom=prenom, adressemail=:adressemail, dateeffectuation=:dateeffectuation");
        query.bindValue(":id", QString::number(id));
        query.bindValue(":nom", nom);
        query.bindValue(":prenom", prenom);
        query.bindValue(":adressemail", adressemail);
        query.bindValue(":dateeffectuation", dateeffectuation);


    return query.exec();
}

bool Client::supprimer(int id)
{
    QSqlQuery query;

         query.prepare("Delete from client where id=:id" );

         query.bindValue(":id", id);
         query.bindValue(0, id);
         return query.exec();


}
bool Client::supprimerArchive(int id){
    QSqlQuery query;
    QString res=QString::number(id);
    query.prepare("Delete from client where id= :id");
    query.bindValue(":id",res);
    return query.exec();
}

QSqlQueryModel* Client::afficherArchive()
{QSqlQueryModel* model=new QSqlQueryModel();

    model->setQuery ("select * from client ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("adressemail"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("dateeffectuation"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("sexe"));
    return model;

}
QSqlQueryModel *Client::triclientid()
{
    QSqlQueryModel * model=new QSqlQueryModel();
 model->setQuery("select * from Client order by id" );
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));

    return model;
}


QSqlQueryModel *Client::triclientnom()
{
    QSqlQueryModel * model=new QSqlQueryModel();
 model->setQuery("select * from Client order by nom" );
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));

    return model;
}

QSqlQueryModel *Client::triclientprenom()
{
    QSqlQueryModel * model=new QSqlQueryModel();
 model->setQuery("select * from Client order by prenom" );
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));

    return model;
}


QSqlQueryModel * Client::recherche(QString data)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM CLIENT where  id='"+data+"' OR nom='"+data+"' OR prenom='"+data+"'  ");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));


    return model;
}

