#include "aboutdialog.h"
#include "ui_aboutdialog.h"

aboutDialog::aboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutDialog)
{
    ui->setupUi(this);
    setWindowTitle("关于");
}

aboutDialog::~aboutDialog()
{
    delete ui;
}

void aboutDialog::on_aboutBtn_clicked()
{
    this->close();
}
