#include "employe.h"
#include<QtDebug>
#include<QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QObject>

Employe::Employe()
{
id=0; nom=" "; prenom=" "; adressemail=" ";dateembau=" ";sexe=" ";

}
Employe::Employe(int id ,QString nom,QString prenom,QString adressemail,QString dateembau,QString sexe )
{this->id=id;
this->nom=nom;
this->prenom=prenom;
this->adressemail=adressemail;
this->dateembau=dateembau;
    this->sexe=sexe;
}
int Employe::getid(){return id ;}
QString Employe::getnom(){return nom;}
QString Employe:: getprenom(){return prenom ;}
QString Employe:: getadressemail(){return adressemail;}
QString Employe:: getdateembau(){return dateembau ;}
QString Employe::getsexe(){return sexe;}

void Employe:: setid(int id){this->id=id ;}
void Employe:: setnom(QString nom){this-> nom=nom ;}
void Employe::setprenom(QString prenom){this->prenom=prenom;}
void Employe:: setadressemail(QString adressemail){this->adressemail=adressemail;}
void Employe:: setdateembau(QString dateembau){this->dateembau=dateembau;}
void Employe:: setsexe(QString sexe){this-> sexe=sexe;}


//AJOUT--------------------------------------------

bool Employe::ajouter()
{


   QSqlQuery query;
   QString res =QString::number(id);
         query.prepare("INSERT INTO employe(id, nom, prenom,adressemail,dateembau,sexe) "
                       "VALUES (:id, :nom, :prenom, :adressemail,:dateembau,:sexe)");
         query.bindValue(":id", id);
         query.bindValue(":nom", nom);
         query.bindValue(":prenom", prenom);
         query.bindValue(":adressemail", adressemail);
         query.bindValue(":dateembau", dateembau);
          query.bindValue(":sexe", sexe);




        return query.exec();

}
// SUPPRESSION --------------------------------------------------------

bool Employe::supprimer(int id)
{
    QSqlQuery query;
    QString res =QString::number(id);
          query.prepare("Delete from employe where id=:id");
          query.bindValue(":id", id);




         return query.exec();




}


//------------AFFICHAGE-----------------------
QSqlQueryModel* Employe::afficher()
{
    QSqlQueryModel* model= new QSqlQueryModel() ;
          model->setQuery("select*  from Employe");
          model->setHeaderData(0, Qt::Horizontal,QObject::tr("identifiant"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("adressemail"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("dateembau"));
             model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));


    return model ;


}



//-------------------------MODIFICATION-------------------------------------




bool Employe::modifier(int id,QString nom,QString prenom)
{

QSqlQuery query;

QString res =QString::number(id);

query.prepare("Update employe set id=id,nom=:nom,prenom=prenom");

query.bindValue(":id",id);
query.bindValue(":nom",nom);
query.bindValue(":prenom",prenom);



return    query.exec();
}

 //---------------------------------------------------------TRI----------------------------------------------------//

QSqlQueryModel *Employe::triemploye()
{
    QSqlQueryModel * model=new QSqlQueryModel();
 model->setQuery("select * from EMPLOYE order by id" );
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));

    return model;
}

QSqlQueryModel *Employe::triemployenom()
{
    QSqlQueryModel * model=new QSqlQueryModel();
 model->setQuery("select * from EMPLOYE order by nom" );
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));

    return model;
}

QSqlQueryModel *Employe::triemployeprenom()
{
    QSqlQueryModel * model=new QSqlQueryModel();
 model->setQuery("select * from EMPLOYE order by prenom" );
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));

    return model;
}


//------------------------------------------RECHERCHE------------------------------------------------//


QSqlQueryModel * Employe::recherche(QString data)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM Employe  where  id='"+data+"' OR nom='"+data+"' OR prenom='"+data+"'  ");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));



    return model;
}





