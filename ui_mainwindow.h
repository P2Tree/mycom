/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *save;
    QAction *quit;
    QAction *about;
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *sendLayout;
    QLineEdit *sendMsgLineEdit;
    QPushButton *sendMsgBtn;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *opencloseLayout;
    QPushButton *openMyComBtn;
    QPushButton *closeMyComBtn;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *pauseclearLayout;
    QPushButton *pauseBtn;
    QPushButton *clearBtn;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(519, 366);
        save = new QAction(MainWindow);
        save->setObjectName(QStringLiteral("save"));
        quit = new QAction(MainWindow);
        quit->setObjectName(QStringLiteral("quit"));
        about = new QAction(MainWindow);
        about->setObjectName(QStringLiteral("about"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 40, 311, 221));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(19, 279, 311, 41));
        sendLayout = new QHBoxLayout(horizontalLayoutWidget);
        sendLayout->setSpacing(6);
        sendLayout->setContentsMargins(11, 11, 11, 11);
        sendLayout->setObjectName(QStringLiteral("sendLayout"));
        sendLayout->setContentsMargins(0, 0, 0, 0);
        sendMsgLineEdit = new QLineEdit(horizontalLayoutWidget);
        sendMsgLineEdit->setObjectName(QStringLiteral("sendMsgLineEdit"));

        sendLayout->addWidget(sendMsgLineEdit);

        sendMsgBtn = new QPushButton(horizontalLayoutWidget);
        sendMsgBtn->setObjectName(QStringLiteral("sendMsgBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sendMsgBtn->sizePolicy().hasHeightForWidth());
        sendMsgBtn->setSizePolicy(sizePolicy);
        sendMsgBtn->setMinimumSize(QSize(0, 0));

        sendLayout->addWidget(sendMsgBtn);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(340, 40, 161, 41));
        opencloseLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        opencloseLayout->setSpacing(6);
        opencloseLayout->setContentsMargins(11, 11, 11, 11);
        opencloseLayout->setObjectName(QStringLiteral("opencloseLayout"));
        opencloseLayout->setContentsMargins(0, 0, 0, 0);
        openMyComBtn = new QPushButton(horizontalLayoutWidget_2);
        openMyComBtn->setObjectName(QStringLiteral("openMyComBtn"));

        opencloseLayout->addWidget(openMyComBtn);

        closeMyComBtn = new QPushButton(horizontalLayoutWidget_2);
        closeMyComBtn->setObjectName(QStringLiteral("closeMyComBtn"));

        opencloseLayout->addWidget(closeMyComBtn);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(340, 80, 160, 41));
        pauseclearLayout = new QHBoxLayout(horizontalLayoutWidget_3);
        pauseclearLayout->setSpacing(6);
        pauseclearLayout->setContentsMargins(11, 11, 11, 11);
        pauseclearLayout->setObjectName(QStringLiteral("pauseclearLayout"));
        pauseclearLayout->setContentsMargins(0, 0, 0, 0);
        pauseBtn = new QPushButton(horizontalLayoutWidget_3);
        pauseBtn->setObjectName(QStringLiteral("pauseBtn"));

        pauseclearLayout->addWidget(pauseBtn);

        clearBtn = new QPushButton(horizontalLayoutWidget_3);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));

        pauseclearLayout->addWidget(clearBtn);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 519, 23));
        menuBar->setDefaultUp(true);
        menuBar->setNativeMenuBar(true);
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0));
        quit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
        about->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0));
        sendMsgBtn->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", 0));
        openMyComBtn->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        closeMyComBtn->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", 0));
        pauseBtn->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234", 0));
        clearBtn->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
