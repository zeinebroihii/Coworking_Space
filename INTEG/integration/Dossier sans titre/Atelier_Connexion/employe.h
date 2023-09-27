#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <QString>
#include<QSqlQueryModel>
#include <QSqlQuery>

class Employe
{
public:
    Employe();
    Employe(int ,QString,QString,QString,QString,QString);
    int getid();
    QString getnom();
    QString getprenom();
    QString getadressemail();
    QString getdateembau();
    QString getsexe();

    void setid(int);
    void setnom(QString);
    void setprenom(QString);
    void setadressemail(QString);
    void setdateembau(QString);
    void setsexe(QString);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier(int id,QString nom,QString prenom );
    QSqlQueryModel * triemploye( );
    QSqlQueryModel * triemployenom( );
    QSqlQueryModel * triemployeprenom( );
    QSqlQueryModel * recherche(QString data);

private :
    int id;
        QString nom,prenom,adressemail,dateembau,sexe ;


};

#endif // EMPLOYE_H
