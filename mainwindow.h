#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <win_qextserialport.h>
#include "Forms/aboutdialog.h"
#include "Forms/comdialog.h"
#include <QAction>
#include <QMenu>

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
    comDialog *P_Com;       //串口配置窗口声明
    aboutDialog *P_About;   //关于窗口声明

    QAction *fileSaveAction;
    QAction *fileQuitAction;
    QAction *helpAboutAction;
    QMenu *fileMenu;
    QMenu *helpMenu;
    QMenuBar *menuBar;

private slots:
    void readMyCom();

    void on_openMyComBtn_clicked();
    void on_closeMyComBtn_clicked();
    void on_sendMsgBtn_clicked();

    void fileSave();
    void fileQuit();
    void helpAbout();
};

#endif // MAINWINDOW_H
