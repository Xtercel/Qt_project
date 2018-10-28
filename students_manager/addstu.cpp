#include "addstu.h"
#include "ui_addstu.h"
#include <QDebug>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QTextStream>

addStu::addStu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addStu)
{
    ui->setupUi(this);
    buttonGroup = new QButtonGroup(this);
    buttonGroup->addButton(this->ui->buttonFemale);
    buttonGroup->addButton(this->ui->buttonMale);
}

addStu::~addStu()
{
    delete ui;
}

void addStu::on_buttonOk_clicked()
{
    QString name = this->ui->inputName->text();
    QString id = this->ui->inputId->text();
    QString sex = buttonGroup->checkedButton()->text();
    QString age = this->ui->selectAge->currentText();
    QString department = this->ui->selectDepartment->currentText();
    QString interests = "";
    QList<QAbstractButton *> ins = this->ui->insGroup->buttons();
    for (auto btn : ins)
    {
        if (btn->isChecked())
            interests += btn->text()+" ";
    }
    if (name.isEmpty() || id.isEmpty())
    {
        QMessageBox::critical(this,"警告","信息不完整",QMessageBox::Ok);
    }
    QString all = name+"\n"+id+"\n"+sex+"\n"+age+"\n"+department+"\n"+interests;
    int ret = QMessageBox::question(this,"输入内容",all,QMessageBox::Ok | QMessageBox::Cancel);
    if (ret == QMessageBox::Ok)
    {
        clear();
        save(all);
    }
}

void addStu::clear()
{
    this->ui->inputName->setText("");
    this->ui->inputName->setFocus();
    this->ui->inputId->setText("");
    this->ui->selectAge->setCurrentIndex(0);
    this->ui->selectDepartment->setCurrentIndex(0);
    this->ui->buttonMale->setChecked(true);
    QList<QAbstractButton *> ins = this->ui->insGroup->buttons();
    for (auto btn : ins)
    {
        btn->setChecked(false);
    }
}

void addStu::save(QString all)
{
    all.replace('\n'," ");
    QFile file("student_message.sjg");
    if (!file.open(QIODevice::Append | QIODevice::Text))
        return;
    QTextStream out(&file);
    out<<all;
}


