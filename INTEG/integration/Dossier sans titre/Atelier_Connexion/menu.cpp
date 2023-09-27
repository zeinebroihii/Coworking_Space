#include "menu.h"
#include "ui_menu.h"
#include "mainwindow.h"
#include "gestionclient.h"
#include "gestion_salle.h"


menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_pushButton_2_clicked()
{
    MainWindow *w=new MainWindow(this);
   w->show();
}

void menu::on_pushButton_clicked()
{
    gestionclient *w=new gestionclient(this);
   w->show();
}

void menu::on_pushButton_salle_clicked()
{
    gestion_salle *w=new gestion_salle(this);
   w->show();
}
