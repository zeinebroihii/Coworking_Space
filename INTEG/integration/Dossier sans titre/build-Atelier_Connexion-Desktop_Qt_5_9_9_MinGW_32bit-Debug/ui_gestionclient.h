/********************************************************************************
** Form generated from reading UI file 'gestionclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONCLIENT_H
#define UI_GESTIONCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestionclient
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *le_dateeffectation;
    QLineEdit *le_id;
    QLineEdit *le_nom;
    QPushButton *pb_ajouter;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *le_prenom;
    QLineEdit *le_adressemail;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *sexe_le;
    QWidget *tab_2;
    QTableView *tab_cli;
    QTableView *tab_tri;
    QPushButton *tri_nom;
    QPushButton *tri_id;
    QPushButton *tri_prenom;
    QPushButton *rechercher_pb;
    QLineEdit *lineedit_ch;
    QPushButton *pdf_bo;
    QPushButton *pushButton_archiverd;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_5;
    QGroupBox *groupBox_6;
    QPushButton *pb_s;
    QWidget *tab_3;
    QGroupBox *groupBox_3;
    QLabel *label_6;
    QLineEdit *le_id_supp;
    QPushButton *pb_supprimer;
    QWidget *Modifierunclient;
    QGroupBox *groupBox_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *le_id_2;
    QLineEdit *le_nom_2;
    QLineEdit *le_prenom_2;
    QLineEdit *le_adressemail_2;
    QLineEdit *le_dateeffectuation_2;
    QPushButton *pb_modifier;
    QWidget *tab_5;
    QTableView *archiveView;
    QPushButton *pushButton_desarchiver_do;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *gestionclient)
    {
        if (gestionclient->objectName().isEmpty())
            gestionclient->setObjectName(QStringLiteral("gestionclient"));
        gestionclient->resize(1259, 540);
        centralWidget = new QWidget(gestionclient);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 30, 1081, 431));
        tabWidget->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"\n"
"\n"
"font: 87 8pt \"Segoe UI Black\";"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 1071, 351));
        groupBox->setStyleSheet(QLatin1String("font: 81 11pt \"Rockwell Extra Bold\";\n"
"background-image: url(:/img/images (1).jpg);"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 70, 111, 20));
        label->setStyleSheet(QStringLiteral("font: 12pt \"Palatino Linotype\";"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 140, 56, 16));
        label_2->setStyleSheet(QStringLiteral("font: 12pt \"Palatino Linotype\";"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 210, 101, 16));
        label_3->setStyleSheet(QStringLiteral("font: 12pt \"Palatino Linotype\";"));
        le_dateeffectation = new QLineEdit(groupBox);
        le_dateeffectation->setObjectName(QStringLiteral("le_dateeffectation"));
        le_dateeffectation->setGeometry(QRect(900, 210, 113, 22));
        le_id = new QLineEdit(groupBox);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(280, 70, 113, 22));
        le_nom = new QLineEdit(groupBox);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(280, 140, 111, 21));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(490, 310, 131, 28));
        pb_ajouter->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(570, 80, 141, 20));
        label_4->setStyleSheet(QStringLiteral("font: 12pt \"Palatino Linotype\";"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(560, 210, 151, 16));
        label_5->setStyleSheet(QStringLiteral("font: 12pt \"Palatino Linotype\";"));
        le_prenom = new QLineEdit(groupBox);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(280, 220, 113, 22));
        le_adressemail = new QLineEdit(groupBox);
        le_adressemail->setObjectName(QStringLiteral("le_adressemail"));
        le_adressemail->setGeometry(QRect(900, 80, 113, 22));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 530, 191, 16));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 300, 71, 21));
        sexe_le = new QLineEdit(groupBox);
        sexe_le->setObjectName(QStringLiteral("sexe_le"));
        sexe_le->setGeometry(QRect(280, 300, 113, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_cli = new QTableView(tab_2);
        tab_cli->setObjectName(QStringLiteral("tab_cli"));
        tab_cli->setGeometry(QRect(15, 11, 411, 281));
        tab_cli->setStyleSheet(QStringLiteral("background-color: rgb(111, 190, 184);"));
        tab_tri = new QTableView(tab_2);
        tab_tri->setObjectName(QStringLiteral("tab_tri"));
        tab_tri->setGeometry(QRect(520, 20, 361, 271));
        tab_tri->setStyleSheet(QStringLiteral("background-color: rgb(111, 190, 184);"));
        tri_nom = new QPushButton(tab_2);
        tri_nom->setObjectName(QStringLiteral("tri_nom"));
        tri_nom->setGeometry(QRect(110, 330, 131, 28));
        tri_id = new QPushButton(tab_2);
        tri_id->setObjectName(QStringLiteral("tri_id"));
        tri_id->setGeometry(QRect(110, 300, 131, 28));
        tri_prenom = new QPushButton(tab_2);
        tri_prenom->setObjectName(QStringLiteral("tri_prenom"));
        tri_prenom->setGeometry(QRect(110, 360, 131, 28));
        rechercher_pb = new QPushButton(tab_2);
        rechercher_pb->setObjectName(QStringLiteral("rechercher_pb"));
        rechercher_pb->setGeometry(QRect(980, 110, 93, 28));
        lineedit_ch = new QLineEdit(tab_2);
        lineedit_ch->setObjectName(QStringLiteral("lineedit_ch"));
        lineedit_ch->setGeometry(QRect(900, 70, 113, 22));
        pdf_bo = new QPushButton(tab_2);
        pdf_bo->setObjectName(QStringLiteral("pdf_bo"));
        pdf_bo->setGeometry(QRect(940, 350, 111, 41));
        pdf_bo->setStyleSheet(QStringLiteral(""));
        pushButton_archiverd = new QPushButton(tab_2);
        pushButton_archiverd->setObjectName(QStringLiteral("pushButton_archiverd"));
        pushButton_archiverd->setGeometry(QRect(790, 320, 93, 28));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(950, 280, 91, 61));
        groupBox_4->setStyleSheet(QStringLiteral("border-image: url(:/img/raw.jpg);"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(980, 70, 31, 21));
        groupBox_5->setStyleSheet(QStringLiteral("border-image: url(:/img/images (2).jpg);"));
        groupBox_6 = new QGroupBox(tab_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 320, 81, 81));
        groupBox_6->setStyleSheet(QLatin1String("\n"
"border-image: url(:/img/2516730.jpg);"));
        pb_s = new QPushButton(tab_2);
        pb_s->setObjectName(QStringLiteral("pb_s"));
        pb_s->setGeometry(QRect(980, 160, 93, 28));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 20, 431, 351));
        groupBox_3->setStyleSheet(QLatin1String("font: 81 11pt \"Rockwell Extra Bold\";\n"
"background-image: url(:/img/images (1).jpg);"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 160, 121, 16));
        label_6->setStyleSheet(QStringLiteral("font: 12pt \"Palatino Linotype\";"));
        le_id_supp = new QLineEdit(groupBox_3);
        le_id_supp->setObjectName(QStringLiteral("le_id_supp"));
        le_id_supp->setGeometry(QRect(260, 150, 113, 22));
        pb_supprimer = new QPushButton(groupBox_3);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(90, 310, 211, 28));
        pb_supprimer->setStyleSheet(QLatin1String("font: 81 10pt \"Rockwell Extra Bold\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(0, 0, 0);"));
        tabWidget->addTab(tab_3, QString());
        Modifierunclient = new QWidget();
        Modifierunclient->setObjectName(QStringLiteral("Modifierunclient"));
        groupBox_2 = new QGroupBox(Modifierunclient);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 30, 1071, 351));
        groupBox_2->setStyleSheet(QLatin1String("background-image: url(:/img/images (1).jpg);\n"
"font: 81 11pt \"Rockwell Extra Bold\";"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 70, 111, 20));
        label_7->setStyleSheet(QStringLiteral("font: 12pt \"Palatino Linotype\";"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 130, 56, 16));
        label_8->setStyleSheet(QStringLiteral("font: 12pt \"Palatino Linotype\";"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 190, 101, 16));
        label_9->setStyleSheet(QStringLiteral("font: 12pt \"Palatino Linotype\";"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(580, 70, 131, 16));
        label_10->setStyleSheet(QStringLiteral("font: 12pt \"Palatino Linotype\";"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(570, 230, 151, 16));
        label_11->setStyleSheet(QStringLiteral("font: 12pt \"Palatino Linotype\";"));
        le_id_2 = new QLineEdit(groupBox_2);
        le_id_2->setObjectName(QStringLiteral("le_id_2"));
        le_id_2->setGeometry(QRect(280, 70, 113, 22));
        le_nom_2 = new QLineEdit(groupBox_2);
        le_nom_2->setObjectName(QStringLiteral("le_nom_2"));
        le_nom_2->setGeometry(QRect(280, 130, 113, 22));
        le_prenom_2 = new QLineEdit(groupBox_2);
        le_prenom_2->setObjectName(QStringLiteral("le_prenom_2"));
        le_prenom_2->setGeometry(QRect(280, 190, 113, 22));
        le_adressemail_2 = new QLineEdit(groupBox_2);
        le_adressemail_2->setObjectName(QStringLiteral("le_adressemail_2"));
        le_adressemail_2->setGeometry(QRect(910, 70, 113, 22));
        le_dateeffectuation_2 = new QLineEdit(groupBox_2);
        le_dateeffectuation_2->setObjectName(QStringLiteral("le_dateeffectuation_2"));
        le_dateeffectuation_2->setGeometry(QRect(910, 230, 113, 22));
        pb_modifier = new QPushButton(groupBox_2);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(450, 310, 131, 28));
        pb_modifier->setStyleSheet(QLatin1String("font: 81 10pt \"Rockwell Extra Bold\";\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        tabWidget->addTab(Modifierunclient, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        archiveView = new QTableView(tab_5);
        archiveView->setObjectName(QStringLiteral("archiveView"));
        archiveView->setGeometry(QRect(240, 100, 401, 261));
        pushButton_desarchiver_do = new QPushButton(tab_5);
        pushButton_desarchiver_do->setObjectName(QStringLiteral("pushButton_desarchiver_do"));
        pushButton_desarchiver_do->setGeometry(QRect(702, 70, 151, 28));
        tabWidget->addTab(tab_5, QString());
        gestionclient->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(gestionclient);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1259, 26));
        gestionclient->setMenuBar(menuBar);
        mainToolBar = new QToolBar(gestionclient);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        gestionclient->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(gestionclient);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        gestionclient->setStatusBar(statusBar);

        retranslateUi(gestionclient);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(gestionclient);
    } // setupUi

    void retranslateUi(QMainWindow *gestionclient)
    {
        gestionclient->setWindowTitle(QApplication::translate("gestionclient", "Gestion des Clients", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("gestionclient", "Ajout", Q_NULLPTR));
        label->setText(QApplication::translate("gestionclient", "Identifiant:", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestionclient", "Nom:", Q_NULLPTR));
        label_3->setText(QApplication::translate("gestionclient", "Pr\303\251nom:", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("gestionclient", "Ajouter", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestionclient", "Adressemail:", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestionclient", "Dateeffectation:", Q_NULLPTR));
        label_12->setText(QApplication::translate("gestionclient", "Tri croissant", Q_NULLPTR));
        label_13->setText(QApplication::translate("gestionclient", "sexe :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestionclient", "Ajouter un client", Q_NULLPTR));
        tri_nom->setText(QApplication::translate("gestionclient", "Tri nom", Q_NULLPTR));
        tri_id->setText(QApplication::translate("gestionclient", "Tri ID", Q_NULLPTR));
        tri_prenom->setText(QApplication::translate("gestionclient", "Tri prenom", Q_NULLPTR));
        rechercher_pb->setText(QApplication::translate("gestionclient", "Rechercher", Q_NULLPTR));
        pdf_bo->setText(QApplication::translate("gestionclient", "  PDF", Q_NULLPTR));
        pushButton_archiverd->setText(QApplication::translate("gestionclient", "Archiver", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        groupBox_5->setTitle(QString());
        groupBox_6->setTitle(QString());
        pb_s->setText(QApplication::translate("gestionclient", "stat", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestionclient", "Afficher un client", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("gestionclient", "Supprimer", Q_NULLPTR));
        label_6->setText(QApplication::translate("gestionclient", "Identifiant:", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("gestionclient", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("gestionclient", "Supprimer un client", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("gestionclient", "Modifier", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestionclient", "Identifiant:", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestionclient", "Nom:", Q_NULLPTR));
        label_9->setText(QApplication::translate("gestionclient", "Pr\303\251nom:", Q_NULLPTR));
        label_10->setText(QApplication::translate("gestionclient", "Adressemail:", Q_NULLPTR));
        label_11->setText(QApplication::translate("gestionclient", "Dateeffectation:", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("gestionclient", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Modifierunclient), QApplication::translate("gestionclient", "Modifier un client", Q_NULLPTR));
        pushButton_desarchiver_do->setText(QApplication::translate("gestionclient", "Desarchiver", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("gestionclient", "Archivage", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestionclient: public Ui_gestionclient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONCLIENT_H
