/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_aboutDialog
{
public:
    QPushButton *aboutBtn;
    QLabel *aboutLabel;
    QLabel *label;

    void setupUi(QDialog *aboutDialog)
    {
        if (aboutDialog->objectName().isEmpty())
            aboutDialog->setObjectName(QStringLiteral("aboutDialog"));
        aboutDialog->resize(400, 300);
        aboutBtn = new QPushButton(aboutDialog);
        aboutBtn->setObjectName(QStringLiteral("aboutBtn"));
        aboutBtn->setGeometry(QRect(160, 220, 75, 23));
        aboutLabel = new QLabel(aboutDialog);
        aboutLabel->setObjectName(QStringLiteral("aboutLabel"));
        aboutLabel->setGeometry(QRect(220, 60, 161, 131));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Arabic"));
        font.setPointSize(14);
        aboutLabel->setFont(font);
        label = new QLabel(aboutDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 60, 161, 131));
        label->setAutoFillBackground(false);
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/image/background.jpg")));
        label->setScaledContents(true);

        retranslateUi(aboutDialog);

        QMetaObject::connectSlotsByName(aboutDialog);
    } // setupUi

    void retranslateUi(QDialog *aboutDialog)
    {
        aboutDialog->setWindowTitle(QApplication::translate("aboutDialog", "Dialog", 0));
        aboutBtn->setText(QApplication::translate("aboutDialog", "\347\241\256\350\256\244", 0));
        aboutLabel->setText(QApplication::translate("aboutDialog", "\344\270\262\345\217\243\350\260\203\350\257\225\345\212\251\346\211\213\n"
"V1.0\n"
"PWE\n"
"dickyanliuming@163.com\n"
"2016-3", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class aboutDialog: public Ui_aboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
