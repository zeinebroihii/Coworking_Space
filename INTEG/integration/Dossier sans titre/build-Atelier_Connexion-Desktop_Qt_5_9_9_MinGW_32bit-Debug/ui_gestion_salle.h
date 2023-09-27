/********************************************************************************
** Form generated from reading UI file 'gestion_salle.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_SALLE_H
#define UI_GESTION_SALLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_salle
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_recherche;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_chaise;
    QLineEdit *lineEdit_nmbr_modif;
    QPushButton *pushButton_Excel;
    QLineEdit *lineEdit_num_supp;
    QLineEdit *lineEdit_salle;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_tables;
    QLineEdit *lineEdit_11;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *SSS_2;
    QLineEdit *lineEdit_18;
    QLabel *label_8;
    QLineEdit *lineEdit_num_modif;
    QLineEdit *lineEdit_22;
    QLineEdit *lineEdit_chaise_modif;
    QPushButton *pushButton;
    QTableView *tableView;
    QPushButton *pushButton_Afficher;
    QComboBox *comboBox_tri;
    QLabel *label;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_tableau;
    QLineEdit *lineEdit_equipement;
    QLabel *qrcode;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestion_salle)
    {
        if (gestion_salle->objectName().isEmpty())
            gestion_salle->setObjectName(QStringLiteral("gestion_salle"));
        gestion_salle->resize(1185, 887);
        centralwidget = new QWidget(gestion_salle);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lineEdit_recherche = new QLineEdit(centralwidget);
        lineEdit_recherche->setObjectName(QStringLiteral("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(1020, 240, 113, 20));
        lineEdit_12 = new QLineEdit(centralwidget);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(40, 170, 131, 22));
        lineEdit_12->setReadOnly(true);
        lineEdit_19 = new QLineEdit(centralwidget);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(410, 350, 181, 22));
        lineEdit_19->setReadOnly(true);
        lineEdit_chaise = new QLineEdit(centralwidget);
        lineEdit_chaise->setObjectName(QStringLiteral("lineEdit_chaise"));
        lineEdit_chaise->setGeometry(QRect(190, 230, 113, 20));
        lineEdit_nmbr_modif = new QLineEdit(centralwidget);
        lineEdit_nmbr_modif->setObjectName(QStringLiteral("lineEdit_nmbr_modif"));
        lineEdit_nmbr_modif->setGeometry(QRect(600, 320, 113, 20));
        lineEdit_nmbr_modif->setReadOnly(false);
        pushButton_Excel = new QPushButton(centralwidget);
        pushButton_Excel->setObjectName(QStringLiteral("pushButton_Excel"));
        pushButton_Excel->setGeometry(QRect(370, 560, 93, 28));
        lineEdit_num_supp = new QLineEdit(centralwidget);
        lineEdit_num_supp->setObjectName(QStringLiteral("lineEdit_num_supp"));
        lineEdit_num_supp->setGeometry(QRect(230, 430, 113, 20));
        lineEdit_num_supp->setReadOnly(false);
        lineEdit_salle = new QLineEdit(centralwidget);
        lineEdit_salle->setObjectName(QStringLiteral("lineEdit_salle"));
        lineEdit_salle->setGeometry(QRect(190, 140, 113, 20));
        lineEdit_14 = new QLineEdit(centralwidget);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(40, 260, 131, 22));
        lineEdit_14->setReadOnly(true);
        lineEdit_15 = new QLineEdit(centralwidget);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(40, 230, 131, 22));
        lineEdit_15->setReadOnly(true);
        lineEdit_tables = new QLineEdit(centralwidget);
        lineEdit_tables->setObjectName(QStringLiteral("lineEdit_tables"));
        lineEdit_tables->setGeometry(QRect(190, 170, 113, 20));
        lineEdit_11 = new QLineEdit(centralwidget);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(40, 140, 131, 22));
        lineEdit_11->setReadOnly(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(950, 240, 71, 16));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 390, 121, 51));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(130, 470, 121, 31));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(370, 460, 93, 28));
        SSS_2 = new QPushButton(centralwidget);
        SSS_2->setObjectName(QStringLiteral("SSS_2"));
        SSS_2->setGeometry(QRect(370, 510, 93, 28));
        lineEdit_18 = new QLineEdit(centralwidget);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(410, 320, 181, 22));
        lineEdit_18->setReadOnly(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 430, 171, 20));
        lineEdit_num_modif = new QLineEdit(centralwidget);
        lineEdit_num_modif->setObjectName(QStringLiteral("lineEdit_num_modif"));
        lineEdit_num_modif->setGeometry(QRect(600, 290, 113, 20));
        lineEdit_num_modif->setReadOnly(false);
        lineEdit_22 = new QLineEdit(centralwidget);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));
        lineEdit_22->setGeometry(QRect(410, 290, 181, 22));
        lineEdit_22->setReadOnly(true);
        lineEdit_chaise_modif = new QLineEdit(centralwidget);
        lineEdit_chaise_modif->setObjectName(QStringLiteral("lineEdit_chaise_modif"));
        lineEdit_chaise_modif->setGeometry(QRect(600, 350, 113, 20));
        lineEdit_chaise_modif->setReadOnly(false);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 310, 121, 31));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(360, 50, 771, 161));
        pushButton_Afficher = new QPushButton(centralwidget);
        pushButton_Afficher->setObjectName(QStringLiteral("pushButton_Afficher"));
        pushButton_Afficher->setGeometry(QRect(360, 230, 121, 31));
        comboBox_tri = new QComboBox(centralwidget);
        comboBox_tri->setObjectName(QStringLiteral("comboBox_tri"));
        comboBox_tri->setGeometry(QRect(660, 230, 110, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 301, 71));
        label->setStyleSheet(QLatin1String("color: rgb(49, 140, 231);\n"
"font: 36pt \"Niagara Engraved\";"));
        lineEdit_13 = new QLineEdit(centralwidget);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(40, 200, 131, 22));
        lineEdit_13->setReadOnly(true);
        lineEdit_tableau = new QLineEdit(centralwidget);
        lineEdit_tableau->setObjectName(QStringLiteral("lineEdit_tableau"));
        lineEdit_tableau->setGeometry(QRect(190, 200, 113, 20));
        lineEdit_equipement = new QLineEdit(centralwidget);
        lineEdit_equipement->setObjectName(QStringLiteral("lineEdit_equipement"));
        lineEdit_equipement->setGeometry(QRect(190, 260, 113, 20));
        qrcode = new QLabel(centralwidget);
        qrcode->setObjectName(QStringLiteral("qrcode"));
        qrcode->setGeometry(QRect(750, 400, 261, 211));
        gestion_salle->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_salle);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1185, 26));
        gestion_salle->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_salle);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_salle->setStatusBar(statusbar);

        retranslateUi(gestion_salle);

        QMetaObject::connectSlotsByName(gestion_salle);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_salle)
    {
        gestion_salle->setWindowTitle(QApplication::translate("gestion_salle", "MainWindow", Q_NULLPTR));
        lineEdit_12->setText(QApplication::translate("gestion_salle", "Nombre de tables :", Q_NULLPTR));
        lineEdit_19->setText(QApplication::translate("gestion_salle", "Nouveau nombre de chaises :", Q_NULLPTR));
        pushButton_Excel->setText(QApplication::translate("gestion_salle", "Excel", Q_NULLPTR));
        lineEdit_14->setText(QApplication::translate("gestion_salle", "Equipements :", Q_NULLPTR));
        lineEdit_15->setText(QApplication::translate("gestion_salle", "Nombre Chaises :", Q_NULLPTR));
        lineEdit_11->setText(QApplication::translate("gestion_salle", "Numero Salle :", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestion_salle", "Recherche :", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("gestion_salle", "Modifier", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("gestion_salle", "Supprimer", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("gestion_salle", "PDF", Q_NULLPTR));
        SSS_2->setText(QApplication::translate("gestion_salle", "statistique", Q_NULLPTR));
        lineEdit_18->setText(QApplication::translate("gestion_salle", "Nouveau nombre de tables :", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestion_salle", "numro de  salle \303\240 supprimer:", Q_NULLPTR));
        lineEdit_22->setText(QApplication::translate("gestion_salle", "Numero de salle a modifier:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gestion_salle", "Ajouter", Q_NULLPTR));
        pushButton_Afficher->setText(QApplication::translate("gestion_salle", "Afficher", Q_NULLPTR));
        comboBox_tri->clear();
        comboBox_tri->insertItems(0, QStringList()
         << QApplication::translate("gestion_salle", "Tri", Q_NULLPTR)
         << QApplication::translate("gestion_salle", "Tri par Salle", Q_NULLPTR)
         << QApplication::translate("gestion_salle", "Tri par Table", Q_NULLPTR)
         << QApplication::translate("gestion_salle", "Tri par Chaise", Q_NULLPTR)
        );
        label->setText(QApplication::translate("gestion_salle", "GESTION DES SALLES", Q_NULLPTR));
        lineEdit_13->setText(QApplication::translate("gestion_salle", "Nombre de tableau :", Q_NULLPTR));
        qrcode->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gestion_salle: public Ui_gestion_salle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_SALLE_H
