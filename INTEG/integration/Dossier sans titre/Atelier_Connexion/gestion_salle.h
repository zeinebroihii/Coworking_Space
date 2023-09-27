#ifndef GESTION_SALLE_H
#define GESTION_SALLE_H


#include <QMainWindow>
#include <QMessageBox>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>
#include <QPainter>
#include "salle.h"

#include <QFileDialog>
#include <QFile>
#include "chat.h"

namespace Ui {
class gestion_salle;
}

class gestion_salle : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestion_salle(QWidget *parent = nullptr);
    ~gestion_salle();



private slots:


    /****/


    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
     void on_tableView_clicked(const QModelIndex &index);
    void on_pushButton_6_clicked();


    void on_SSS_2_clicked();

    void on_pushButton_Afficher_clicked();

    void on_pushButton_Excel_clicked();


    void on_lineEdit_recherche_textChanged();


    void on_comboBox_tri_activated();


    /****/

private:
    Ui::gestion_salle *ui;
    salle S;
};


#endif // GESTION_SALLE_H
