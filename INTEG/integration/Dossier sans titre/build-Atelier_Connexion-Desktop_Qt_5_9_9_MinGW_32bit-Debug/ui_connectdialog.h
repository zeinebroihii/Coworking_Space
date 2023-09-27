/********************************************************************************
** Form generated from reading UI file 'connectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTDIALOG_H
#define UI_CONNECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLineEdit *hostin;
    QSpinBox *spinBox;
    QPushButton *acceptbu;
    QPushButton *cancelbu;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        hostin = new QLineEdit(Dialog);
        hostin->setObjectName(QStringLiteral("hostin"));
        hostin->setGeometry(QRect(70, 40, 113, 22));
        spinBox = new QSpinBox(Dialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(100, 120, 141, 22));
        acceptbu = new QPushButton(Dialog);
        acceptbu->setObjectName(QStringLiteral("acceptbu"));
        acceptbu->setGeometry(QRect(100, 180, 93, 28));
        cancelbu = new QPushButton(Dialog);
        cancelbu->setObjectName(QStringLiteral("cancelbu"));
        cancelbu->setGeometry(QRect(230, 180, 93, 28));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        acceptbu->setText(QApplication::translate("Dialog", "Accept", Q_NULLPTR));
        cancelbu->setText(QApplication::translate("Dialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTDIALOG_H
