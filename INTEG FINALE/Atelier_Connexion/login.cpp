#include "login.h"
#include "ui_login.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include<QMessageBox>
#include"mainwindow.h"
#include"ui_mainwindow.h"
#include "menu.h"
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}


void login::on_pushButton_clicked()
{
    bool verif=false;
        QString log=ui->lineEdit_username->text();
        QString pass=ui->lineEdit_pasword->text();
        QSqlQuery qry;
        QMessageBox msgbox;
        if(qry.exec("select id, nom from employe where id =  '"+pass+"' and nom = '" +log+ "' " ))
        {
            while(qry.next())
            {
                msgbox.setText("welcome");

                 menu *w=new menu(this);
                w->show();
                        msgbox.exec();
                        verif=true;
            }

            if(verif==false)
            {

               msgbox.setText("id/mot de passe incorrect");
                       msgbox.exec();
            }
        }
        else
        {
            msgbox.setText("erreur req sql");
                    msgbox.exec();
        }


}

