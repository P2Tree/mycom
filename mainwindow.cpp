#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->closeMyComBtn->setEnabled(false);   //开始时，”关闭串口“按钮不可用
    ui->sendMsgBtn->setEnabled(false);      //开始时，”发送数据“按钮不可用
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::readMyCom()
{
    QByteArray temp = myCom->readAll();     //读取串口缓冲区的所有数据给临时变量temp

    ui->textBrowser->insertPlainText(temp); //将串口数据显示在窗口的文本浏览器中,追加显示而不覆盖
}

void MainWindow::on_openMyComBtn_clicked()  //打开串口按钮 按下 槽函数
{
    QString portName = ui->portNameComboBox->currentText();     //获取串口名

    myCom = new Win_QextSerialPort(portName, QextSerialBase::EventDriven);      //定义串口对象，并传递参数，在构造函数中对其初始化
    myCom -> open(QIODevice::ReadWrite);    //以可读写方式打开串口，必须先打开串口再对相关参数做设置

    if(ui->baudRateComboBox->currentText() == tr("9600"))   //设置波特率
        myCom->setBaudRate(BAUD9600);
    else if(ui->baudRateComboBox->currentText() == tr("115200"))
        myCom->setBaudRate(BAUD115200);

    if(ui->dataBitsComboBox->currentText() == tr("8"))      //设置数据位数
        myCom->setDataBits(DATA_8);
    else if(ui->dataBitsComboBox->currentText() == tr("7"))
        myCom->setDataBits(DATA_7);

    if(ui->parityComboBox->currentText() == tr("无校验"))     //设置校验位
        myCom->setParity(PAR_NONE);
    else if(ui->parityComboBox->currentText() == tr("奇校验"))
        myCom->setParity(PAR_ODD);
    else if(ui->parityComboBox->currentText() == tr("偶校验"))
        myCom->setParity(PAR_EVEN);

    if(ui->stopBitsComboBox->currentText() == tr("1"))      //设置停止位
        myCom->setStopBits(STOP_1);
    else if(ui->stopBitsComboBox->currentText() == tr("2"))
        myCom->setStopBits(STOP_2);

    myCom->setFlowControl(FLOW_OFF);    //设置数据流控，这里直接设置为无数据流控

    myCom->setTimeout(500);     //设置延时


    connect(myCom, SIGNAL(readyRead()), this, SLOT(readMyCom()));   //信号关联槽，当串口缓冲区有数据时，进行串口读操作

    ui->openMyComBtn->setEnabled(false);    //打开串口后，“打开串口“按钮不可用
    ui->closeMyComBtn->setEnabled(true);    //打开串口后，”关闭串口“按钮可用
    ui->sendMsgBtn->setEnabled(true);       //打开串口后，”发送数据“按钮可用

    ui->baudRateComboBox->setEnabled(false);    //当开启串口后，不能再修改相关参数
    ui->dataBitsComboBox->setEnabled(false);
    ui->parityComboBox->setEnabled(false);
    ui->stopBitsComboBox->setEnabled(false);
    ui->portNameComboBox->setEnabled(false);

}

void MainWindow::on_closeMyComBtn_clicked() //关闭串口按钮 按下 槽函数
{
    myCom->close();     //关闭串口，该函数在win_qextserialport.cpp文件中定义

    ui->openMyComBtn->setEnabled(true);     //关闭串口后，”打开串口“按钮可用
    ui->closeMyComBtn->setEnabled(false);   //关闭串口后，”关闭串口“按钮不可用
    ui->sendMsgBtn->setEnabled(false);      //关闭串口后，”发送数据“按钮不可用

    ui->baudRateComboBox->setEnabled(true); //当关闭串口后，可以修改相关参数
    ui->dataBitsComboBox->setEnabled(true);
    ui->parityComboBox->setEnabled(true);
    ui->stopBitsComboBox->setEnabled(true);
    ui->portNameComboBox->setEnabled(true);
}

void MainWindow::on_sendMsgBtn_clicked()    //发送数据按钮 按下 槽函数
{
    myCom->write(ui->sendMsgLineEdit->text().toLatin1());   //以ASCII码形式将行编辑器中的数据写入串口
}
