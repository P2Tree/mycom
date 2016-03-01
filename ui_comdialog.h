/********************************************************************************
** Form generated from reading UI file 'comdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMDIALOG_H
#define UI_COMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_comDialog
{
public:

    void setupUi(QDialog *comDialog)
    {
        if (comDialog->objectName().isEmpty())
            comDialog->setObjectName(QStringLiteral("comDialog"));
        comDialog->resize(400, 300);

        retranslateUi(comDialog);

        QMetaObject::connectSlotsByName(comDialog);
    } // setupUi

    void retranslateUi(QDialog *comDialog)
    {
        comDialog->setWindowTitle(QApplication::translate("comDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class comDialog: public Ui_comDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMDIALOG_H
