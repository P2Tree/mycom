#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <win_qextserialport.h>
#include "Forms/aboutdialog.h"
#include <QAction>
#include <QActionEvent>
#include <QMenu>
#include <QCheckBox>
#include <QPushButton>
#include <QtGui>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    Win_QextSerialPort *myCom;
    aboutDialog *P_About;   //关于窗口声明

    //关于Menu的数据成员
    QAction *fileSaveAction;
    QAction *fileQuitAction;
    QAction *helpAboutAction;

    QMenu *fileMenu;
    QMenu *helpMenu;
    QMenu *comMenu;

    QMenu *portMenu;                    //配置菜单下的端口选择菜单
    QAction *comPort1Action;            //端口COM1
    QAction *comPort2Action;            //端口COM2
    QAction *comPort9Action;            //端口COM9
    QMenu *baudRateMenu;                //配置菜单下的波特率选择菜单
    QAction *comBaudRate9600Action;     //波特率9600
    QAction *comBaudRate115200Action;   //波特率115200
    QMenu *databitsMenu;                //配置菜单下的数据位选择菜单 
    QAction *comDatabits7Action;           //数据位7位
    QAction *comDatabits8Action;           //数据位8位
    QMenu *parityMenu;                  //配置菜单下的校验位选择菜单
    QAction *comParityNONEAction;       //校验位无校验
    QAction *comParityODDAction;        //校验位奇校验
    QAction *comParityEVENAction;       //校验位偶校验
    QMenu *stopbitsMenu;                //配置菜单下的停止位选择菜单
    QAction *comStopbits1Action;        //1位停止位
    QAction *comStopbits2Action;        //2位停止位

    QString portName;
    QString baudRateName;
    QString databitsName;
    QString parityName;
    QString stopbitsName;

    QMenuBar *menuBar;

    //关于显示的数据成员
    QCheckBox *HEXSendSelect;
    QCheckBox *HEXDisplaySelect;
    bool HEXSendSelectFlag = FALSE;
    bool HEXDisplaySelectFlag = FALSE;
    bool receivePauseFlag = FALSE;

    //成员函数
    void MenuBarInit();

private slots:
    void readMyCom();

    void on_openMyComBtn_clicked();
    void on_closeMyComBtn_clicked();
    void on_sendMsgBtn_clicked();

    void menu_fileSave();
    void menu_fileQuit();
    void menu_helpAbout();

    void menu_comPort1();
    void menu_comPort2();
    void menu_comPort9();
    void menu_comBaudRate9600();
    void menu_comBaudRate115200();
    void menu_comDatabits7();
    void menu_comDatabits8();
    void menu_comParityNONE();
    void menu_comParityODD();
    void menu_comParityEVEN();
    void menu_comStopbits1();
    void menu_comStopbits2();
    void HEXSendSelected();
    void HEXDisplaySelected();
    void on_pauseBtn_clicked();

    void on_clearBtn_clicked();
};

#endif // MAINWINDOW_H
