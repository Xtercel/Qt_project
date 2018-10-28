#ifndef ADDSTU_H
#define ADDSTU_H

#include <QDialog>
#include <QButtonGroup>
#include <QString>
namespace Ui {
class addStu;
}

class addStu : public QDialog
{
    Q_OBJECT

public:
    explicit addStu(QWidget *parent = 0);
    ~addStu();

private slots:
    void on_buttonOk_clicked();

private:
    Ui::addStu *ui;
    QButtonGroup *buttonGroup;
    void clear();
    void save(QString );
};

#endif // ADDSTU_H
