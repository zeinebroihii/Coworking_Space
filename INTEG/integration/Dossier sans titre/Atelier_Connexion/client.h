#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class Client
{
public:
    Client();
    Client(int,QString,QString,QString,QString,QString);
    int getid();
    QString getnom();
    QString getprenom();
    QString getadressemail();
    QString getdateeffectuation();
    QString getsexe();


    void setid(int);
    void setnom(QString);
    void setprenom(QString);
    void setadressemail(QString);
    void setdateeffectuation(QString);
    void setsexe(QString);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool modifierC(int id,QString nom,QString prenom,QString adressemail,QString dateeffectuation);
    bool supprimer(int);
    QSqlQueryModel * triclientid();
    QSqlQueryModel * triclientnom();
    QSqlQueryModel *triclientprenom();
    QSqlQueryModel *recherche(QString data);
     QSqlQueryModel* afficherArchive();
  bool ajouterarchive();
bool supprimerArchive(int id);



private:

    int id;
    QString nom,prenom,adressemail,dateeffectuation,sexe;

};

#endif // CLIENT_H
