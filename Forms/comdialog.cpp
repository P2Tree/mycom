#include "comdialog.h"
#include "ui_comdialog.h"

comDialog::comDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::comDialog)
{
    ui->setupUi(this);
}

comDialog::~comDialog()
{
    delete ui;
}
