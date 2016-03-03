#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("串口调试助手");
    P_About = NULL;
    P_About = new aboutDialog();

    //菜单栏布置
    MenuBarInit();

    portName = "COM1";
    baudRateName = "BAUD9600";
    databitsName = "DATA_8";
    parityName = "NONE";
    stopbitsName = "STOP_1";

    ui->closeMyComBtn->setEnabled(false);   //开始时，”关闭串口“按钮不可用
    ui->sendMsgBtn->setEnabled(false);      //开始时，”发送数据“按钮不可用

    HEXSendSelect = new QCheckBox("以HEX格式发送", this);
    HEXSendSelect->setGeometry(350,250, 100,15);
    HEXSendSelect->setCheckable(TRUE);
    HEXDisplaySelect = new QCheckBox("以HEX格式显示", this);
    HEXDisplaySelect->setGeometry(350,270, 100,15);
    HEXDisplaySelect->setCheckable(TRUE);

    ui->comStatusLabel->setEnabled(false);

    connect(HEXSendSelect, SIGNAL(stateChanged(int)), this, SLOT(HEXSendSelected()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*成员函数实现代码*/

//菜单栏初始化
void MainWindow::MenuBarInit()
{
    fileMenu = new QMenu("文件");
    fileMenu->setStatusTip("文件菜单");
    helpMenu = new QMenu("帮助");
    helpMenu->setStatusTip("帮助菜单");
    comMenu = new QMenu("配置");
    comMenu->setStatusTip("串口配置菜单");
    portMenu = new QMenu("端口");     //配置菜单下的二级菜单
    portMenu->setStatusTip("串口端口选择");
    baudRateMenu = new QMenu("波特率");
    baudRateMenu->setStatusTip("串口波特率选择");
    databitsMenu = new QMenu("数据位");
    databitsMenu->setStatusTip("数据位选择");
    parityMenu = new QMenu("校验位");
    parityMenu->setStatusTip("数据校验位选择");
    stopbitsMenu = new QMenu("停止位");
    stopbitsMenu->setStatusTip("数据停止位选择");

    fileSaveAction = new QAction("保存", this);
    fileSaveAction->setShortcut(Qt::CTRL|Qt::Key_S);
    fileSaveAction->setStatusTip("保存当前接收数据");
    fileQuitAction = new QAction("退出", this);
    fileQuitAction->setShortcut(Qt::CTRL|Qt::Key_Q);
    fileQuitAction->setStatusTip("退出程序");

    helpAboutAction = new QAction("关于", this);
    helpAboutAction->setShortcut(Qt::CTRL|Qt::Key_A);
    helpAboutAction->setStatusTip("关于应用程序");

    comPort1Action = new QAction("COM1", this);
    comPort1Action->setStatusTip("选择COM1");
    comPort1Action->setCheckable(TRUE);
    comPort1Action->setChecked(TRUE);                       //默认COM1
    comPort2Action = new QAction("COM2", this);
    comPort2Action->setStatusTip("选择COM2");
    comPort2Action->setCheckable(TRUE);
    comPort9Action = new QAction("COM9", this);
    comPort9Action->setStatusTip("选择COM9");
    comPort9Action->setCheckable(TRUE);
    comBaudRate9600Action = new QAction("9600", this);
    comBaudRate9600Action->setStatusTip("选择波特率9600");
    comBaudRate9600Action->setCheckable(TRUE);
    comBaudRate9600Action->setChecked(TRUE);                //默认9600波特率
    comBaudRate115200Action = new QAction("115200", this);
    comBaudRate115200Action->setStatusTip("选择波特率115200");
    comBaudRate115200Action->setCheckable(TRUE);
    comDatabits7Action = new QAction("7位", this);
    comDatabits7Action->setStatusTip("选择7位数据位");
    comDatabits7Action->setCheckable(TRUE);
    comDatabits8Action = new QAction("8位", this);
    comDatabits8Action->setStatusTip("选择8位数据位");
    comDatabits8Action->setCheckable(TRUE);
    comDatabits8Action->setChecked(TRUE);                   //默认数据8位
    comParityNONEAction = new QAction("无校验", this);
    comParityNONEAction->setStatusTip("选择无校验模式");
    comParityNONEAction->setCheckable(TRUE);
    comParityNONEAction->setChecked(TRUE);                  //默认无校验
    comParityODDAction = new QAction("奇校验", this);
    comParityODDAction->setStatusTip("选择奇校验模式");
    comParityODDAction->setCheckable(TRUE);
    comParityEVENAction = new QAction("偶校验", this);
    comParityEVENAction->setStatusTip("选择偶校验模式");
    comParityEVENAction->setCheckable(TRUE);
    comStopbits1Action = new QAction("1位", this);
    comStopbits1Action->setStatusTip("选择1位停止位");
    comStopbits1Action->setCheckable(TRUE);
    comStopbits1Action->setChecked(TRUE);                   //默认1位停止位
    comStopbits2Action = new QAction("2位", this);
    comStopbits2Action->setStatusTip("选择2位停止位");
    comStopbits2Action->setCheckable(TRUE);

    comMenu->addMenu(portMenu);
    comMenu->addSeparator();
    portMenu->addAction(comPort1Action);
    portMenu->addAction(comPort2Action);
    portMenu->addAction(comPort9Action);
    comMenu->addMenu(baudRateMenu);
    baudRateMenu->addAction(comBaudRate9600Action);
    baudRateMenu->addAction(comBaudRate115200Action);
    comMenu->addMenu(databitsMenu);
    databitsMenu->addAction(comDatabits7Action);
    databitsMenu->addAction(comDatabits8Action);
    comMenu->addMenu(parityMenu);
    parityMenu->addAction(comParityNONEAction);
    parityMenu->addAction(comParityODDAction);
    parityMenu->addAction(comParityEVENAction);
    comMenu->addMenu(stopbitsMenu);
    stopbitsMenu->addAction(comStopbits1Action);
    stopbitsMenu->addAction(comStopbits2Action);

    fileMenu->addAction(fileSaveAction);
    fileMenu->addSeparator();
    fileMenu->addAction(fileQuitAction);
    helpMenu->addAction(helpAboutAction);

    menuBar = new QMenuBar(this);
    menuBar->addMenu(fileMenu);
    menuBar->addMenu(comMenu);
    menuBar->addMenu(helpMenu);
    menuBar->setGeometry(0,0,this->width(),25);

    connect(fileSaveAction, SIGNAL(triggered(bool)), this, SLOT(menu_fileSave()));
    connect(fileQuitAction, SIGNAL(triggered(bool)), this, SLOT(menu_fileQuit()));
    connect(helpAboutAction, SIGNAL(triggered(bool)), this, SLOT(menu_helpAbout()));

    connect(comPort1Action, SIGNAL(triggered(bool)), this, SLOT(menu_comPort1()));
    connect(comPort2Action, SIGNAL(triggered(bool)), this, SLOT(menu_comPort2()));
    connect(comPort9Action, SIGNAL(triggered(bool)), this, SLOT(menu_comPort9()));
    connect(comBaudRate9600Action, SIGNAL(triggered(bool)), this, SLOT(menu_comBaudRate9600()));
    connect(comBaudRate115200Action, SIGNAL(triggered(bool)), this, SLOT(menu_comBaudRate115200()));
    connect(comDatabits7Action, SIGNAL(triggered(bool)), this, SLOT(menu_comDatabits7()));
    connect(comDatabits8Action, SIGNAL(triggered(bool)), this, SLOT(menu_comDatabits8()));
    connect(comParityNONEAction, SIGNAL(triggered(bool)), this, SLOT(menu_comParityNONE()));
    connect(comParityODDAction, SIGNAL(triggered(bool)), this, SLOT(menu_comParityODD()));
    connect(comParityEVENAction, SIGNAL(triggered(bool)), this, SLOT(menu_comParityEVEN()));
    connect(comStopbits1Action, SIGNAL(triggered(bool)), this, SLOT(menu_comStopbits1()));
    connect(comStopbits2Action, SIGNAL(triggered(bool)), this, SLOT(menu_comStopbits2()));
}

/*槽函数实现代码*/

//读取串口数据
void MainWindow::readMyCom()
{
    QByteArray temp = myCom->readAll();     //读取串口缓冲区的所有数据给临时变量temp
    QString strDisplay;
    if(HEXDisplaySelectFlag)
    {
        QString str = temp.toHex().data();
        str = str.toUpper();
        for(int i=0; i<str.length(); i+=2)
        {
            QString st = str.mid(i,2);
            strDisplay += st;
            strDisplay += " ";
        }
    }
    else
    {
        strDisplay = QString(temp);
    }
    if(false == receivePauseFlag)
        ui->textBrowser->insertPlainText(strDisplay); //将串口数据显示在窗口的文本浏览器中,追加显示而不覆盖
}

//点击打开串口按钮
void MainWindow::on_openMyComBtn_clicked()  //打开串口按钮 按下 槽函数
{

    //portName = ui->portNameComboBox->currentText();     //获取串口名
    myCom = new Win_QextSerialPort(portName, QextSerialBase::EventDriven);      //定义串口对象，并传递参数，在构造函数中对其初始化
    bool openFlag = myCom -> open(QIODevice::ReadWrite);    //以可读写方式打开串口，必须先打开串口再对相关参数做设置
    if(FALSE == openFlag)
    {
        QMessageBox::warning(this, tr("Warning"), tr("串口不存在或已被占用!"), QMessageBox::Yes);
        return;
    }
    /*
    if(ui->baudRateComboBox->currentText() == tr("9600"))   //设置波特率
        myCom->setBaudRate(BAUD9600);
    else if(ui->baudRateComboBox->currentText() == tr("115200"))
        myCom->setBaudRate(BAUD115200);
*/
    if(baudRateName == "BAUD9600")
        myCom->setBaudRate(BAUD9600);
    else if(baudRateName == "BAUD115200")
        myCom->setBaudRate(BAUD115200);
/*
    if(ui->dataBitsComboBox->currentText() == tr("8"))      //设置数据位数
        myCom->setDataBits(DATA_8);
    else if(ui->dataBitsComboBox->currentText() == tr("7"))
        myCom->setDataBits(DATA_7);
*/
    if(databitsName == "DATA_8")
        myCom->setDataBits(DATA_8);
    else if(databitsName == "DATA_7")
        myCom->setDataBits(DATA_7);
/*
    if(ui->parityComboBox->currentText() == tr("无校验"))     //设置校验位
        myCom->setParity(PAR_NONE);
    else if(ui->parityComboBox->currentText() == tr("奇校验"))
        myCom->setParity(PAR_ODD);
    else if(ui->parityComboBox->currentText() == tr("偶校验"))
        myCom->setParity(PAR_EVEN);
*/
    if(parityName == "NONE")
        myCom->setParity(PAR_NONE);
    else if(parityName == "ODD")
        myCom->setParity(PAR_ODD);
    else if(parityName == "EVEN")
        myCom->setParity(PAR_EVEN);
/*
    if(ui->stopBitsComboBox->currentText() == tr("1"))      //设置停止位
        myCom->setStopBits(STOP_1);
    else if(ui->stopBitsComboBox->currentText() == tr("2"))
        myCom->setStopBits(STOP_2);
*/
    if(stopbitsName == "STOP_1")
        myCom->setStopBits(STOP_1);
    else if(stopbitsName == "STOP_2")
        myCom->setStopBits(STOP_2);

    myCom->setFlowControl(FLOW_OFF);    //设置数据流控，这里直接设置为无数据流控

    myCom->setTimeout(500);     //设置延时


    connect(myCom, SIGNAL(readyRead()), this, SLOT(readMyCom()));   //信号关联槽，当串口缓冲区有数据时，进行串口读操作

    ui->openMyComBtn->setEnabled(false);    //打开串口后，“打开串口“按钮不可用
    ui->closeMyComBtn->setEnabled(true);    //打开串口后，”关闭串口“按钮可用
    ui->sendMsgBtn->setEnabled(true);       //打开串口后，”发送数据“按钮可用

    //ui->baudRateComboBox->setEnabled(false);    //当开启串口后，不能再修改相关参数
    //ui->dataBitsComboBox->setEnabled(false);
    //ui->parityComboBox->setEnabled(false);
    //ui->stopBitsComboBox->setEnabled(false);
    //ui->portNameComboBox->setEnabled(false);

    HEXSendSelect->setEnabled(false);
    HEXDisplaySelect->setEnabled(false);
    comMenu->setEnabled(false);
    ui->pauseBtn->setEnabled(true);
    ui->comStatusLabel->setEnabled(true);
}

//点击关闭串口按钮
void MainWindow::on_closeMyComBtn_clicked() //关闭串口按钮 按下 槽函数
{
    myCom->close();     //关闭串口，该函数在win_qextserialport.cpp文件中定义

    ui->openMyComBtn->setEnabled(true);     //关闭串口后，”打开串口“按钮可用
    ui->closeMyComBtn->setEnabled(false);   //关闭串口后，”关闭串口“按钮不可用
    ui->sendMsgBtn->setEnabled(false);      //关闭串口后，”发送数据“按钮不可用

    //ui->baudRateComboBox->setEnabled(true); //当关闭串口后，可以修改相关参数
    //ui->dataBitsComboBox->setEnabled(true);
    //ui->parityComboBox->setEnabled(true);
    //ui->stopBitsComboBox->setEnabled(true);
    //ui->portNameComboBox->setEnabled(true);

    comMenu->setEnabled(true);

    HEXSendSelect->setEnabled(true);
    HEXDisplaySelect->setEnabled(true);
    ui->pauseBtn->setText("暂停");
    receivePauseFlag = false;
    ui->pauseBtn->setEnabled(false);
    ui->comStatusLabel->setEnabled(false);
}

//点击发送数据按钮
void MainWindow::on_sendMsgBtn_clicked()    //发送数据按钮 按下 槽函数
{
    if(!(myCom->isOpen()))
        return;
    QString sendData = ui->sendMsgLineEdit->text();
    if(sendData.isEmpty())
        return;
    QByteArray sendBuf = "";
    if(HEXSendSelectFlag)
    {
        sendBuf = QByteArray::fromHex(sendData.toLatin1().data());
        myCom->write(sendBuf);
    }
    else
    {
        myCom->write(sendData.toLatin1().data());   //以ASCII码形式将行编辑器中的数据写入串口
    }
}

//菜单栏保存文件
void MainWindow::menu_fileSave()
{
    QString curFile;
    QString fileName = QFileDialog::getSaveFileName(this, tr("另存为"), curFile, tr("TXT文档(*.txt);;所有文件(*.*)"));
    if(fileName.isEmpty())
    {
        return;
    }
    if(!(fileName.endsWith(".txt",Qt::CaseInsensitive)))
    {
        fileName += ".txt";
    }
    QFile file(fileName);
    if(!file.open(QFile::WriteOnly|QFile::Text))
    {
        QMessageBox::critical(this, tr("critical"), tr("无法写入数据！"), QMessageBox::Yes);
        return;
    }
    else
    {
        QTextStream out(&file);
        out<<ui->textBrowser->toPlainText();
        return;
    }
}

//菜单栏退出程序
void MainWindow::menu_fileQuit()
{
    this->close();
}

//菜单栏帮助关于
void MainWindow::menu_helpAbout()
{
    P_About->exec();
}

//菜单栏配置端口COM1
void MainWindow::menu_comPort1()
{
    portName = "COM1";
    comPort2Action->setChecked(FALSE);
    comPort9Action->setChecked(FALSE);

}
void MainWindow::menu_comPort2()
{
    portName = "COM2";
    comPort1Action->setChecked(FALSE);
    comPort9Action->setChecked(FALSE);
}
void MainWindow::menu_comPort9()
{
    portName = "COM9";
    comPort1Action->setChecked(FALSE);
    comPort2Action->setChecked(FALSE);
}

//菜单栏配置波特率
void MainWindow::menu_comBaudRate9600()
{
    baudRateName = "BAUD9600";
    comBaudRate115200Action->setChecked(FALSE);

}
void MainWindow::menu_comBaudRate115200()
{
    baudRateName = "BAUD115200";
    comBaudRate9600Action->setChecked(FALSE);
}

void MainWindow::menu_comDatabits7()
{
    databitsName = "DATA_7";
    comDatabits8Action->setChecked(FALSE);
}
void MainWindow::menu_comDatabits8()
{
    databitsName = "DATA_8";
    comDatabits7Action->setChecked(FALSE);
}

void MainWindow::menu_comParityNONE()
{
    parityName = "NONE";
    comParityODDAction->setChecked(FALSE);
    comParityEVENAction->setChecked(FALSE);
}
void MainWindow::menu_comParityODD()
{
    parityName = "ODD";
    comParityNONEAction->setChecked(FALSE);
    comParityEVENAction->setChecked(FALSE);
}
void MainWindow::menu_comParityEVEN()
{
    parityName = "EVEN";
    comParityNONEAction->setChecked(FALSE);
    comParityODDAction->setChecked(FALSE);
}

void MainWindow::menu_comStopbits1()
{
    stopbitsName = "STOP_1";
    comStopbits2Action->setChecked(FALSE);
}
void MainWindow::menu_comStopbits2()
{
    stopbitsName = "STOP_2";
    comStopbits1Action->setChecked(FALSE);
}

void MainWindow::HEXSendSelected()
{
    if(HEXSendSelect->isChecked())
        HEXSendSelectFlag = TRUE;
    else
        HEXSendSelectFlag = FALSE;

}
void MainWindow::HEXDisplaySelected()
{
    if(HEXDisplaySelect->isChecked())
        HEXDisplaySelectFlag = TRUE;
    else
        HEXDisplaySelectFlag = FALSE;
}
void MainWindow::on_pauseBtn_clicked()
{
   if(receivePauseFlag == false)
   {
       receivePauseFlag = true;
       ui->pauseBtn->setText("继续");
   }
   else {
       receivePauseFlag = false;
       ui->pauseBtn->setText("暂停");
   }
}

void MainWindow::on_clearBtn_clicked()
{
    ui->textBrowser->clear();
}
