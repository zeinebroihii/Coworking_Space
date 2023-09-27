#ifndef SALLE_H
#define SALLE_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class salle
{
private:
    int numero_salle,Nombre_tables,Nombre_chaise,Nombre_tableaux ;
    QString equipements;


public:


    salle();
    salle(int,int,int,int,QString);

    //getters
    int get_salle ()
    {
        return numero_salle ;
    }
    int get_table()
    {
        return Nombre_tables ;
    }
    int get_chaise ()
    {
        return Nombre_chaise ;
    }
    int get_tableaux()
    {
        return Nombre_tableaux ;
    }
    QString get_equipements ()
    {
        return equipements ;
    }

    //setters
    void set_salle (int s )
    {
        numero_salle = s ;
    }
    void set_table (int t )
    {
        Nombre_tables = t ;
    }
    void set_chaise (int c)
    {
        Nombre_chaise = c ;
    }
    void set_tableaux (int ta )
    {
        Nombre_tableaux = ta ;
    }
    void set_equipement(QString e)
    {
        equipements = e ;
    }
         QSqlQueryModel * trierespParnumero_salle();
         QSqlQueryModel * trierespParTable();
         QSqlQueryModel * trierespParChaise();
    bool ajouter();
    bool modifier(int SALLE,int TABLES,int CHAISE);
    bool supprimer(int);
    void genererPDFact();
    QSqlQueryModel * affiche();
salle(int SALLE,int TABLES,int CHAISE);


QSqlQueryModel* RechercheSalle(QString);

} ;


#endif // SALLE_H
