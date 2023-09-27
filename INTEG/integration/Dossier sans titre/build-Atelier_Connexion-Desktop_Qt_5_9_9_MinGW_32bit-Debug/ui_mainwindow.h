/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *le_id;
    QLineEdit *le_nom;
    QLineEdit *le_prenom;
    QPushButton *pb_ajouter;
    QPushButton *pb_pdf;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *le_adressemail;
    QLineEdit *le_dateembau;
    QLabel *label_10;
    QLineEdit *le_sexe;
    QLabel *label_15;
    QWidget *tab;
    QTableView *tab_employe;
    QTableView *tab_tri;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pb_recherche_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_ch;
    QPushButton *pbstat;
    QWidget *tab_2;
    QLabel *label_6;
    QLineEdit *le_id_supp;
    QPushButton *pb_supp;
    QWidget *modifierunemploye;
    QGroupBox *groupBox_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pb_modif;
    QWidget *historique;
    QTextBrowser *textBrowser;
    QLabel *label_13;
    QPushButton *pb_his;
    QLabel *label_14;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(806, 392);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(40, 20, 761, 321));
        tabWidget->setStyleSheet(QLatin1String("font: 75 8pt \"MS Shell Dlg 2\";\n"
"background-image: url(:/img/backg (1).jpg);"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 741, 291));
        groupBox->setStyleSheet(QLatin1String("font: 12pt \"MV Boli\";\n"
"background-color: rgb(170, 170, 127);"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 111, 16));
        label->setStyleSheet(QStringLiteral("font: 12pt \"MV Boli\";"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 81, 16));
        label_2->setStyleSheet(QStringLiteral("font: 12pt \"MV Boli\";"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 110, 81, 31));
        label_3->setStyleSheet(QStringLiteral("font: 12pt \"MV Boli\";"));
        le_id = new QLineEdit(groupBox);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(160, 30, 113, 22));
        le_nom = new QLineEdit(groupBox);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(160, 70, 113, 22));
        le_prenom = new QLineEdit(groupBox);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(160, 110, 113, 22));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(300, 70, 93, 28));
        pb_pdf = new QPushButton(groupBox);
        pb_pdf->setObjectName(QStringLiteral("pb_pdf"));
        pb_pdf->setGeometry(QRect(300, 120, 93, 28));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 160, 121, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 200, 111, 16));
        le_adressemail = new QLineEdit(groupBox);
        le_adressemail->setObjectName(QStringLiteral("le_adressemail"));
        le_adressemail->setGeometry(QRect(160, 150, 113, 22));
        le_dateembau = new QLineEdit(groupBox);
        le_dateembau->setObjectName(QStringLiteral("le_dateembau"));
        le_dateembau->setGeometry(QRect(160, 190, 113, 22));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 230, 81, 20));
        le_sexe = new QLineEdit(groupBox);
        le_sexe->setObjectName(QStringLiteral("le_sexe"));
        le_sexe->setGeometry(QRect(160, 230, 113, 22));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(5, -10, 731, 291));
        tabWidget->addTab(tab_3, QString());
        label_15->raise();
        groupBox->raise();
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab_employe = new QTableView(tab);
        tab_employe->setObjectName(QStringLiteral("tab_employe"));
        tab_employe->setGeometry(QRect(20, 20, 311, 241));
        tab_tri = new QTableView(tab);
        tab_tri->setObjectName(QStringLiteral("tab_tri"));
        tab_tri->setGeometry(QRect(350, 21, 256, 241));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(620, 40, 93, 28));
        pushButton_4->setStyleSheet(QStringLiteral("font: 75 8pt \"MS Shell Dlg 2\";"));
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(620, 70, 93, 28));
        pb_recherche_2 = new QPushButton(tab);
        pb_recherche_2->setObjectName(QStringLiteral("pb_recherche_2"));
        pb_recherche_2->setGeometry(QRect(620, 220, 93, 28));
        pb_recherche_2->setStyleSheet(QStringLiteral("font: 75 8pt \"Times New Roman\";"));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(620, 10, 93, 28));
        pushButton_3->setStyleSheet(QStringLiteral("font: 75 8pt \"MS Shell Dlg 2\";"));
        lineEdit_ch = new QLineEdit(tab);
        lineEdit_ch->setObjectName(QStringLiteral("lineEdit_ch"));
        lineEdit_ch->setGeometry(QRect(620, 190, 101, 22));
        pbstat = new QPushButton(tab);
        pbstat->setObjectName(QStringLiteral("pbstat"));
        pbstat->setGeometry(QRect(620, 130, 93, 28));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 60, 121, 16));
        label_6->setStyleSheet(QLatin1String("font: 63 italic 8pt \"Sitka Banner Semibold\";\n"
"font: 11pt \"MS Shell Dlg 2\";"));
        le_id_supp = new QLineEdit(tab_2);
        le_id_supp->setObjectName(QStringLiteral("le_id_supp"));
        le_id_supp->setGeometry(QRect(240, 60, 113, 22));
        pb_supp = new QPushButton(tab_2);
        pb_supp->setObjectName(QStringLiteral("pb_supp"));
        pb_supp->setGeometry(QRect(460, 50, 93, 28));
        tabWidget->addTab(tab_2, QString());
        modifierunemploye = new QWidget();
        modifierunemploye->setObjectName(QStringLiteral("modifierunemploye"));
        groupBox_2 = new QGroupBox(modifierunemploye);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 10, 701, 331));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 45, 71, 21));
        label_7->setStyleSheet(QLatin1String("font: 75 8pt \"Myanmar Text\";\n"
"font: 11pt \"MS Shell Dlg 2\";\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"font: italic 10pt \"Monotype Corsiva\";"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 100, 56, 16));
        label_8->setStyleSheet(QLatin1String("font: 75 8pt \"Myanmar Text\";\n"
"font: italic 10pt \"Monotype Corsiva\";\n"
"font: 9pt \"MS Shell Dlg 2\";"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 160, 56, 16));
        label_9->setStyleSheet(QLatin1String("font: 75 8pt \"Myanmar Text\";\n"
"font: 11pt \"MS Shell Dlg 2\";\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"font: italic 10pt \"Monotype Corsiva\";"));
        lineEdit1 = new QLineEdit(groupBox_2);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));
        lineEdit1->setGeometry(QRect(170, 40, 113, 22));
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 100, 113, 22));
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(170, 160, 113, 22));
        pb_modif = new QPushButton(groupBox_2);
        pb_modif->setObjectName(QStringLiteral("pb_modif"));
        pb_modif->setGeometry(QRect(410, 70, 93, 28));
        tabWidget->addTab(modifierunemploye, QString());
        historique = new QWidget();
        historique->setObjectName(QStringLiteral("historique"));
        textBrowser = new QTextBrowser(historique);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 40, 291, 221));
        label_13 = new QLabel(historique);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(260, 0, 271, 31));
        pb_his = new QPushButton(historique);
        pb_his->setObjectName(QStringLiteral("pb_his"));
        pb_his->setGeometry(QRect(460, 50, 93, 28));
        label_14 = new QLabel(historique);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(-10, -10, 741, 311));
        tabWidget->addTab(historique, QString());
        label_14->raise();
        textBrowser->raise();
        label_13->raise();
        pb_his->raise();
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 806, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "ajout", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "identifiant", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        pb_pdf->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "adressemail", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "dateembau", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "sexe", Q_NULLPTR));
        label_15->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "ajouter un employe", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "tri nom", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "tri prenom", Q_NULLPTR));
        pb_recherche_2->setText(QApplication::translate("MainWindow", "rechercher", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "tri", Q_NULLPTR));
        pbstat->setText(QApplication::translate("MainWindow", "stat", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "afficher un employe", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "identifiant", Q_NULLPTR));
        pb_supp->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "supprimer un employe", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "modification", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "identifiant", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        pb_modif->setText(QApplication::translate("MainWindow", "valider", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(modifierunemploye), QApplication::translate("MainWindow", "modifier un employe", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Historique</span></p></body></html>", Q_NULLPTR));
        pb_his->setText(QApplication::translate("MainWindow", "valider", Q_NULLPTR));
        label_14->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(historique), QApplication::translate("MainWindow", "historique des employes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
