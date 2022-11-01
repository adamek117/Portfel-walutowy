/********************************************************************************
** Form generated from reading UI file 'dodaj.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DODAJ_H
#define UI_DODAJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dodaj
{
public:
    QPushButton *przycisk_dodaj;
    QComboBox *comboBox;
    QLineEdit *lineEdit;

    void setupUi(QWidget *dodaj)
    {
        if (dodaj->objectName().isEmpty())
            dodaj->setObjectName(QString::fromUtf8("dodaj"));
        dodaj->resize(428, 300);
        przycisk_dodaj = new QPushButton(dodaj);
        przycisk_dodaj->setObjectName(QString::fromUtf8("przycisk_dodaj"));
        przycisk_dodaj->setGeometry(QRect(180, 160, 51, 25));
        przycisk_dodaj->setMinimumSize(QSize(51, 25));
        przycisk_dodaj->setMaximumSize(QSize(51, 25));
        przycisk_dodaj->setCursor(QCursor(Qt::PointingHandCursor));
        przycisk_dodaj->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #2a9df4;\n"
"color: white;\n"
"border: 1px solid #2a9df4;\n"
"border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: #187bcd;\n"
"}"));
        comboBox = new QComboBox(dodaj);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(220, 90, 201, 31));
        comboBox->setMinimumSize(QSize(201, 31));
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: 	#D3D3D3;\n"
""));
        comboBox->setFrame(false);
        lineEdit = new QLineEdit(dodaj);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 80, 201, 51));
        lineEdit->setMinimumSize(QSize(201, 51));
        lineEdit->setMaximumSize(QSize(201, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("border: 0.5px solid #D3D3D3;\n"
"border-radius: 10px 10px 10px 0;"));
        lineEdit->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEdit->setFrame(false);
        lineEdit->setClearButtonEnabled(true);

        retranslateUi(dodaj);

        QMetaObject::connectSlotsByName(dodaj);
    } // setupUi

    void retranslateUi(QWidget *dodaj)
    {
        dodaj->setWindowTitle(QCoreApplication::translate("dodaj", "Form", nullptr));
        przycisk_dodaj->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("dodaj", "WYBIERZ WALUT\304\230", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("dodaj", "PLN", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("dodaj", "EUR", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("dodaj", "USD", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("dodaj", "CHF", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("dodaj", "GBP", nullptr));

        lineEdit->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class dodaj: public Ui_dodaj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DODAJ_H
