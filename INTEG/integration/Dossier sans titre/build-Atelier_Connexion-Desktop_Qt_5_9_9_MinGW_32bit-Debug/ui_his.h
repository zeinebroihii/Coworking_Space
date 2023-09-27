/********************************************************************************
** Form generated from reading UI file 'his.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIS_H
#define UI_HIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_his
{
public:
    QLabel *label;
    QTextBrowser *history;

    void setupUi(QDialog *his)
    {
        if (his->objectName().isEmpty())
            his->setObjectName(QStringLiteral("his"));
        his->resize(837, 442);
        label = new QLabel(his);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 10, 401, 41));
        history = new QTextBrowser(his);
        history->setObjectName(QStringLiteral("history"));
        history->setGeometry(QRect(45, 81, 721, 271));
        history->setStyleSheet(QStringLiteral("background:white"));

        retranslateUi(his);

        QMetaObject::connectSlotsByName(his);
    } // setupUi

    void retranslateUi(QDialog *his)
    {
        his->setWindowTitle(QApplication::translate("his", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("his", "<html><head/><body><p><span style=\" font-size:14pt;\">Historique</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class his: public Ui_his {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIS_H
