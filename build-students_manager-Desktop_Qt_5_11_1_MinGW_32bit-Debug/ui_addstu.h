/********************************************************************************
** Form generated from reading UI file 'addstu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTU_H
#define UI_ADDSTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addStu
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *inputName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *inputId;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QRadioButton *buttonMale;
    QRadioButton *buttonFemale;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *selectAge;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *selectDepartment;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QGridLayout *gridLayout;
    QCheckBox *checkBasketball;
    QCheckBox *checkVolleyball;
    QCheckBox *checkSoccer;
    QCheckBox *checkBadminton;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *buttonOk;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonCancel;
    QButtonGroup *insGroup;

    void setupUi(QDialog *addStu)
    {
        if (addStu->objectName().isEmpty())
            addStu->setObjectName(QStringLiteral("addStu"));
        addStu->resize(350, 480);
        verticalLayout = new QVBoxLayout(addStu);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(30, 15, 30, 15);
        label = new QLabel(addStu);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(15);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(40, -1, 100, -1);
        label_2 = new QLabel(addStu);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        inputName = new QLineEdit(addStu);
        inputName->setObjectName(QStringLiteral("inputName"));

        horizontalLayout->addWidget(inputName);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(40, -1, 100, -1);
        label_3 = new QLabel(addStu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        inputId = new QLineEdit(addStu);
        inputId->setObjectName(QStringLiteral("inputId"));

        horizontalLayout_2->addWidget(inputId);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(40, -1, -1, -1);
        label_4 = new QLabel(addStu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        buttonMale = new QRadioButton(addStu);
        buttonMale->setObjectName(QStringLiteral("buttonMale"));
        buttonMale->setChecked(true);

        horizontalLayout_3->addWidget(buttonMale);

        buttonFemale = new QRadioButton(addStu);
        buttonFemale->setObjectName(QStringLiteral("buttonFemale"));

        horizontalLayout_3->addWidget(buttonFemale);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 4);
        horizontalLayout_3->setStretch(2, 4);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(40, -1, 100, -1);
        label_5 = new QLabel(addStu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        horizontalLayout_4->addWidget(label_5);

        selectAge = new QComboBox(addStu);
        selectAge->setObjectName(QStringLiteral("selectAge"));

        horizontalLayout_4->addWidget(selectAge);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(40, -1, 100, -1);
        label_6 = new QLabel(addStu);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        horizontalLayout_5->addWidget(label_6);

        selectDepartment = new QComboBox(addStu);
        selectDepartment->setObjectName(QStringLiteral("selectDepartment"));

        horizontalLayout_5->addWidget(selectDepartment);

        horizontalLayout_5->setStretch(0, 2);
        horizontalLayout_5->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(40, -1, -1, -1);
        label_7 = new QLabel(addStu);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        horizontalLayout_6->addWidget(label_7);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        checkBasketball = new QCheckBox(addStu);
        insGroup = new QButtonGroup(addStu);
        insGroup->setObjectName(QStringLiteral("insGroup"));
        insGroup->setExclusive(false);
        insGroup->addButton(checkBasketball);
        checkBasketball->setObjectName(QStringLiteral("checkBasketball"));

        gridLayout->addWidget(checkBasketball, 0, 0, 1, 1);

        checkVolleyball = new QCheckBox(addStu);
        insGroup->addButton(checkVolleyball);
        checkVolleyball->setObjectName(QStringLiteral("checkVolleyball"));

        gridLayout->addWidget(checkVolleyball, 0, 1, 1, 1);

        checkSoccer = new QCheckBox(addStu);
        insGroup->addButton(checkSoccer);
        checkSoccer->setObjectName(QStringLiteral("checkSoccer"));

        gridLayout->addWidget(checkSoccer, 1, 0, 1, 1);

        checkBadminton = new QCheckBox(addStu);
        insGroup->addButton(checkBadminton);
        checkBadminton->setObjectName(QStringLiteral("checkBadminton"));

        gridLayout->addWidget(checkBadminton, 1, 1, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);

        horizontalLayout_6->setStretch(0, 2);
        horizontalLayout_6->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(20, -1, 20, -1);
        buttonOk = new QPushButton(addStu);
        buttonOk->setObjectName(QStringLiteral("buttonOk"));

        horizontalLayout_7->addWidget(buttonOk);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        buttonCancel = new QPushButton(addStu);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));

        horizontalLayout_7->addWidget(buttonCancel);

        horizontalLayout_7->setStretch(0, 2);
        horizontalLayout_7->setStretch(1, 2);
        horizontalLayout_7->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(addStu);

        QMetaObject::connectSlotsByName(addStu);
    } // setupUi

    void retranslateUi(QDialog *addStu)
    {
        addStu->setWindowTitle(QApplication::translate("addStu", "addStu", nullptr));
        label->setText(QApplication::translate("addStu", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        label_2->setText(QApplication::translate("addStu", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QApplication::translate("addStu", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_4->setText(QApplication::translate("addStu", "\346\200\247\345\210\253\357\274\232", nullptr));
        buttonMale->setText(QApplication::translate("addStu", "\347\224\267", nullptr));
        buttonFemale->setText(QApplication::translate("addStu", "\345\245\263", nullptr));
        label_5->setText(QApplication::translate("addStu", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_6->setText(QApplication::translate("addStu", "\351\231\242\347\263\273\357\274\232", nullptr));
        label_7->setText(QApplication::translate("addStu", "\345\205\264\350\266\243\357\274\232", nullptr));
        checkBasketball->setText(QApplication::translate("addStu", "\347\257\256\347\220\203", nullptr));
        checkVolleyball->setText(QApplication::translate("addStu", "\346\216\222\347\220\203", nullptr));
        checkSoccer->setText(QApplication::translate("addStu", "\350\266\263\347\220\203", nullptr));
        checkBadminton->setText(QApplication::translate("addStu", "\347\276\275\346\257\233\347\220\203", nullptr));
        buttonOk->setText(QApplication::translate("addStu", "\347\241\256\345\256\232", nullptr));
        buttonCancel->setText(QApplication::translate("addStu", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addStu: public Ui_addStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTU_H
