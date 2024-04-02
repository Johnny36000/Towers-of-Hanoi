/********************************************************************************
** Form generated from reading UI file 'towersofhanoi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOWERSOFHANOI_H
#define UI_TOWERSOFHANOI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TowersofHanoi
{
public:
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *TowersofHanoi)
    {
        if (TowersofHanoi->objectName().isEmpty())
            TowersofHanoi->setObjectName(QString::fromUtf8("TowersofHanoi"));
        TowersofHanoi->resize(800, 600);
        graphicsView = new QGraphicsView(TowersofHanoi);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(5, 21, 791, 311));
        pushButton = new QPushButton(TowersofHanoi);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(610, 440, 181, 41));
        pushButton_2 = new QPushButton(TowersofHanoi);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 440, 131, 41));
        lineEdit = new QLineEdit(TowersofHanoi);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 440, 141, 41));
        lineEdit_2 = new QLineEdit(TowersofHanoi);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 340, 113, 22));
        QFont font;
        font.setPointSize(12);
        lineEdit_2->setFont(font);
        lineEdit_3 = new QLineEdit(TowersofHanoi);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(370, 340, 113, 22));
        lineEdit_3->setFont(font);
        lineEdit_4 = new QLineEdit(TowersofHanoi);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(570, 340, 113, 22));
        lineEdit_4->setFont(font);

        retranslateUi(TowersofHanoi);

        QMetaObject::connectSlotsByName(TowersofHanoi);
    } // setupUi

    void retranslateUi(QDialog *TowersofHanoi)
    {
        TowersofHanoi->setWindowTitle(QCoreApplication::translate("TowersofHanoi", "TowersofHanoi", nullptr));
        pushButton->setText(QCoreApplication::translate("TowersofHanoi", "Next", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TowersofHanoi", "Reset", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("TowersofHanoi", "   source", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("TowersofHanoi", "  Auxillary", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("TowersofHanoi", " Destination", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TowersofHanoi: public Ui_TowersofHanoi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOWERSOFHANOI_H
