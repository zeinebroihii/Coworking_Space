#include "etudiant.h"

Etudiant::Etudiant()
{
id=0; nom=" " ; prenom=" ";
}
Etudiant::Etudiant(int id ,QString nom,QString prenom)
{
    this->id=id; this->nom=nom ; this->prenom=prenom;
}
int Etudiant::getid(){return id ;}
QString Etudiant:: getnom(){ return nom ;}
QString Etudiant:: getprenom(){ return prenom ;}
void Etudiant::setid(int id){ this->id=id;}
void Etudiant::setnom(QString nom){ this->nom=nom ;}
void Etudiant::setprenom(QString prenom) { this->prenom=prenom ;}
