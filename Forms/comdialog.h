#ifndef COMDIALOG_H
#define COMDIALOG_H

#include <QDialog>

namespace Ui {
class comDialog;
}

class comDialog : public QDialog
{
    Q_OBJECT

public:
    explicit comDialog(QWidget *parent = 0);
    ~comDialog();

private:
    Ui::comDialog *ui;
};

#endif // COMDIALOG_H
