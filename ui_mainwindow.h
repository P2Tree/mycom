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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
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
    QHBoxLayout *portNameLayout;
    QLabel *portNameLabel;
    QComboBox *portNameComboBox;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *baudRateLayout;
    QLabel *baudRateLabel;
    QComboBox *baudRateComboBox;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *dataBitsLayout;
    QLabel *dataBitsLabel;
    QComboBox *dataBitsComboBox;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *parityLayout;
    QLabel *parityLabel;
    QComboBox *parityComboBox;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *stopBitsLayout;
    QLabel *stopBitsLabel;
    QComboBox *stopBitsComboBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(505, 362);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 20, 311, 221));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(19, 259, 311, 41));
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
        horizontalLayoutWidget_2->setGeometry(QRect(340, 20, 161, 41));
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
        horizontalLayoutWidget_3->setGeometry(QRect(340, 70, 160, 31));
        portNameLayout = new QHBoxLayout(horizontalLayoutWidget_3);
        portNameLayout->setSpacing(6);
        portNameLayout->setContentsMargins(11, 11, 11, 11);
        portNameLayout->setObjectName(QStringLiteral("portNameLayout"));
        portNameLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        portNameLayout->setContentsMargins(0, 0, 0, 0);
        portNameLabel = new QLabel(horizontalLayoutWidget_3);
        portNameLabel->setObjectName(QStringLiteral("portNameLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Arabic"));
        font.setPointSize(11);
        portNameLabel->setFont(font);

        portNameLayout->addWidget(portNameLabel);

        portNameComboBox = new QComboBox(horizontalLayoutWidget_3);
        portNameComboBox->setObjectName(QStringLiteral("portNameComboBox"));

        portNameLayout->addWidget(portNameComboBox);

        portNameLayout->setStretch(1, 30);
        horizontalLayoutWidget_4 = new QWidget(centralWidget);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(340, 100, 160, 31));
        baudRateLayout = new QHBoxLayout(horizontalLayoutWidget_4);
        baudRateLayout->setSpacing(6);
        baudRateLayout->setContentsMargins(11, 11, 11, 11);
        baudRateLayout->setObjectName(QStringLiteral("baudRateLayout"));
        baudRateLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        baudRateLayout->setContentsMargins(0, 0, 0, 0);
        baudRateLabel = new QLabel(horizontalLayoutWidget_4);
        baudRateLabel->setObjectName(QStringLiteral("baudRateLabel"));
        baudRateLabel->setFont(font);

        baudRateLayout->addWidget(baudRateLabel);

        baudRateComboBox = new QComboBox(horizontalLayoutWidget_4);
        baudRateComboBox->setObjectName(QStringLiteral("baudRateComboBox"));

        baudRateLayout->addWidget(baudRateComboBox);

        baudRateLayout->setStretch(1, 30);
        horizontalLayoutWidget_5 = new QWidget(centralWidget);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(340, 130, 160, 31));
        dataBitsLayout = new QHBoxLayout(horizontalLayoutWidget_5);
        dataBitsLayout->setSpacing(6);
        dataBitsLayout->setContentsMargins(11, 11, 11, 11);
        dataBitsLayout->setObjectName(QStringLiteral("dataBitsLayout"));
        dataBitsLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        dataBitsLayout->setContentsMargins(0, 0, 0, 0);
        dataBitsLabel = new QLabel(horizontalLayoutWidget_5);
        dataBitsLabel->setObjectName(QStringLiteral("dataBitsLabel"));
        dataBitsLabel->setFont(font);

        dataBitsLayout->addWidget(dataBitsLabel);

        dataBitsComboBox = new QComboBox(horizontalLayoutWidget_5);
        dataBitsComboBox->setObjectName(QStringLiteral("dataBitsComboBox"));

        dataBitsLayout->addWidget(dataBitsComboBox);

        dataBitsLayout->setStretch(1, 30);
        horizontalLayoutWidget_6 = new QWidget(centralWidget);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(340, 160, 160, 31));
        parityLayout = new QHBoxLayout(horizontalLayoutWidget_6);
        parityLayout->setSpacing(6);
        parityLayout->setContentsMargins(11, 11, 11, 11);
        parityLayout->setObjectName(QStringLiteral("parityLayout"));
        parityLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        parityLayout->setContentsMargins(0, 0, 0, 0);
        parityLabel = new QLabel(horizontalLayoutWidget_6);
        parityLabel->setObjectName(QStringLiteral("parityLabel"));
        parityLabel->setFont(font);

        parityLayout->addWidget(parityLabel);

        parityComboBox = new QComboBox(horizontalLayoutWidget_6);
        parityComboBox->setObjectName(QStringLiteral("parityComboBox"));

        parityLayout->addWidget(parityComboBox);

        parityLayout->setStretch(1, 30);
        horizontalLayoutWidget_7 = new QWidget(centralWidget);
        horizontalLayoutWidget_7->setObjectName(QStringLiteral("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(340, 190, 160, 31));
        stopBitsLayout = new QHBoxLayout(horizontalLayoutWidget_7);
        stopBitsLayout->setSpacing(6);
        stopBitsLayout->setContentsMargins(11, 11, 11, 11);
        stopBitsLayout->setObjectName(QStringLiteral("stopBitsLayout"));
        stopBitsLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        stopBitsLayout->setContentsMargins(0, 0, 0, 0);
        stopBitsLabel = new QLabel(horizontalLayoutWidget_7);
        stopBitsLabel->setObjectName(QStringLiteral("stopBitsLabel"));
        stopBitsLabel->setFont(font);

        stopBitsLayout->addWidget(stopBitsLabel);

        stopBitsComboBox = new QComboBox(horizontalLayoutWidget_7);
        stopBitsComboBox->setObjectName(QStringLiteral("stopBitsComboBox"));

        stopBitsLayout->addWidget(stopBitsComboBox);

        stopBitsLayout->setStretch(1, 30);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 505, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        sendMsgBtn->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", 0));
        openMyComBtn->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        closeMyComBtn->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", 0));
        portNameLabel->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\357\274\232", 0));
        portNameComboBox->clear();
        portNameComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "COM1", 0)
         << QApplication::translate("MainWindow", "COM2", 0)
         << QApplication::translate("MainWindow", "COM3", 0)
         << QApplication::translate("MainWindow", "COM4", 0)
         << QApplication::translate("MainWindow", "COM5", 0)
         << QApplication::translate("MainWindow", "COM6", 0)
         << QApplication::translate("MainWindow", "COM7", 0)
         << QApplication::translate("MainWindow", "COM8", 0)
         << QApplication::translate("MainWindow", "COM9", 0)
        );
        baudRateLabel->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", 0));
        baudRateComboBox->clear();
        baudRateComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "9600", 0)
         << QApplication::translate("MainWindow", "115200", 0)
        );
        dataBitsLabel->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", 0));
        dataBitsComboBox->clear();
        dataBitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", 0)
         << QApplication::translate("MainWindow", "7", 0)
        );
        parityLabel->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", 0));
        parityComboBox->clear();
        parityComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\227\240\346\240\241\351\252\214", 0)
         << QApplication::translate("MainWindow", "\345\245\207\346\240\241\351\252\214", 0)
         << QApplication::translate("MainWindow", "\345\201\266\346\240\241\351\252\214", 0)
        );
        stopBitsLabel->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", 0));
        stopBitsComboBox->clear();
        stopBitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "1.5", 0)
         << QApplication::translate("MainWindow", "2", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
