#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "employe.h"
#include "his.h"
#include <QMainWindow>

#include<QUrl>
#include<QAbstractState>
#include<QDesktopServices>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Ui::MainWindow *ui;
    Employe E ;



private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supp_clicked();

    void on_pb_modif_clicked();



    void on_pushButton_3_clicked();


    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pb_recherche_2_clicked();

    void on_pb_pdf_clicked();


    void on_pb_his_clicked();



    void on_pbstat_clicked();

private:
    his *His;



};

#endif // MAINWINDOW_H
