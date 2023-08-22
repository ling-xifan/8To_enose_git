/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_23;
    QPushButton *pushButton_OK;
    QLabel *label_22;
    QLabel *label_2;
    QLineEdit *lineEdit_step2;
    QLabel *label_3;
    QLineEdit *lineEdit_step3;
    QLineEdit *lineEdit_step1;
    QLabel *label_17;
    QLabel *label_4;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(302, 223);
        label_23 = new QLabel(Dialog);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(50, 120, 71, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(11);
        label_23->setFont(font);
        pushButton_OK = new QPushButton(Dialog);
        pushButton_OK->setObjectName(QString::fromUtf8("pushButton_OK"));
        pushButton_OK->setGeometry(QRect(110, 170, 75, 23));
        label_22 = new QLabel(Dialog);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(50, 80, 71, 21));
        label_22->setFont(font);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 40, 31, 21));
        label_2->setFont(font);
        lineEdit_step2 = new QLineEdit(Dialog);
        lineEdit_step2->setObjectName(QString::fromUtf8("lineEdit_step2"));
        lineEdit_step2->setGeometry(QRect(160, 80, 71, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(14);
        lineEdit_step2->setFont(font1);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 80, 31, 21));
        label_3->setFont(font);
        lineEdit_step3 = new QLineEdit(Dialog);
        lineEdit_step3->setObjectName(QString::fromUtf8("lineEdit_step3"));
        lineEdit_step3->setGeometry(QRect(160, 120, 71, 20));
        lineEdit_step3->setFont(font1);
        lineEdit_step1 = new QLineEdit(Dialog);
        lineEdit_step1->setObjectName(QString::fromUtf8("lineEdit_step1"));
        lineEdit_step1->setGeometry(QRect(160, 40, 71, 21));
        lineEdit_step1->setFont(font1);
        label_17 = new QLabel(Dialog);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(50, 40, 71, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        label_17->setFont(font2);
        label_17->setLayoutDirection(Qt::LeftToRight);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 120, 31, 21));
        label_4->setFont(font);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_23->setText(QCoreApplication::translate("Dialog", "\346\201\242\345\244\215\351\230\266\346\256\265", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        label_22->setText(QCoreApplication::translate("Dialog", "\346\260\224\344\275\223\345\223\215\345\272\224", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "min", nullptr));
        lineEdit_step2->setText(QCoreApplication::translate("Dialog", "2", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "min", nullptr));
        lineEdit_step3->setText(QCoreApplication::translate("Dialog", "2", nullptr));
        lineEdit_step1->setText(QCoreApplication::translate("Dialog", "2", nullptr));
        label_17->setText(QCoreApplication::translate("Dialog", "\345\237\272\347\272\277\347\250\263\345\256\232", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "min", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
