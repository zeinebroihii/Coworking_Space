#ifndef gestionclient_H
#define gestionclient_H

#include <QMainWindow>
#include <QMessageBox>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>
#include <QPainter>
#include "client.h"

#include <QFileDialog>
#include <QFile>
#include "chat.h"

namespace Ui {
class gestionclient;
}

class gestionclient : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestionclient(QWidget *parent = nullptr);
    ~gestionclient();



private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();



    void on_tri_nom_clicked();

    void on_tri_id_clicked();

    void on_tri_prenom_clicked();


    void on_rechercher_pb_clicked();

    void on_pdf_bo_clicked();


void on_chat_box_clicked();

void on_pushButton_archiverd_clicked();

     void on_pushButton_desarchiver_do_clicked();



     void on_pb_s_clicked();



private:
    Ui::gestionclient *ui;
    Client C;

    int selected=0;
        QStringList files;

};

#endif // gestionclient_H
