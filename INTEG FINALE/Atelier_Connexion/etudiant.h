#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <QString>

class Etudiant
{
public:
    Etudiant();
    Etudiant(int,QString,QString);
    int getid();
    QString getnom();
    QString getprenom();
    void setid(int);
    void setnom(QString);
    void setprenom(QString);

private :
    int id ;
    QString nom, prenom ;
};

#endif // ETUDIANT_H
