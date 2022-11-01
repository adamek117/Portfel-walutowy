/********************************************************************************
** Form generated from reading UI file 'przelicz.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRZELICZ_H
#define UI_PRZELICZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Przelicz
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QPushButton *przycisk_dodaj;
    QPushButton *przycisk_wymien;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_2;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Przelicz)
    {
        if (Przelicz->objectName().isEmpty())
            Przelicz->setObjectName(QString::fromUtf8("Przelicz"));
        Przelicz->resize(400, 418);
        layoutWidget = new QWidget(Przelicz);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 10, 266, 391));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(8);
        gridLayout_2->setVerticalSpacing(12);
        przycisk_dodaj = new QPushButton(layoutWidget);
        przycisk_dodaj->setObjectName(QString::fromUtf8("przycisk_dodaj"));
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

        gridLayout_2->addWidget(przycisk_dodaj, 2, 0, 1, 1);

        przycisk_wymien = new QPushButton(layoutWidget);
        przycisk_wymien->setObjectName(QString::fromUtf8("przycisk_wymien"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(przycisk_wymien->sizePolicy().hasHeightForWidth());
        przycisk_wymien->setSizePolicy(sizePolicy);
        przycisk_wymien->setMinimumSize(QSize(51, 25));
        przycisk_wymien->setMaximumSize(QSize(51, 21));
        przycisk_wymien->setCursor(QCursor(Qt::PointingHandCursor));
        przycisk_wymien->setLayoutDirection(Qt::LeftToRight);
        przycisk_wymien->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #2a9df4;\n"
"color: white;\n"
"border: 1px solid #2a9df4;\n"
"border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: #187bcd;\n"
"}"));

        gridLayout_2->addWidget(przycisk_wymien, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(true);
        lineEdit_2->setMinimumSize(QSize(201, 51));
        lineEdit_2->setMaximumSize(QSize(201, 51));
        lineEdit_2->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border: 0.5px solid #D3D3D3;\n"
"border-radius: 10px 10px 10px 0;"));
        lineEdit_2->setReadOnly(true);

        gridLayout_3->addWidget(lineEdit_2, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(201, 31));
        comboBox_2->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: 	#D3D3D3;\n"
""));
        comboBox_2->setFrame(false);

        gridLayout_3->addWidget(comboBox_2, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(201, 31));
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: 	#D3D3D3;\n"
""));
        comboBox->setFrame(false);

        gridLayout->addWidget(comboBox, 2, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(201, 51));
        lineEdit->setMaximumSize(QSize(201, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("border: 0.5px solid #D3D3D3;\n"
"border-radius: 10px 10px 10px 0;"));
        lineEdit->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEdit->setFrame(false);
        lineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Przelicz);

        QMetaObject::connectSlotsByName(Przelicz);
    } // setupUi

    void retranslateUi(QWidget *Przelicz)
    {
        Przelicz->setWindowTitle(QCoreApplication::translate("Przelicz", "Kantor", nullptr));
        przycisk_dodaj->setText(QCoreApplication::translate("Przelicz", "Dodaj", nullptr));
        przycisk_wymien->setText(QCoreApplication::translate("Przelicz", "Przelicz", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Przelicz", "WYBIERZ WALUT\304\230", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Przelicz", "PLN", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Przelicz", "EUR", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("Przelicz", "USD", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("Przelicz", "CHF", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("Przelicz", "GBP", nullptr));

        comboBox->setItemText(0, QCoreApplication::translate("Przelicz", "WYBIERZ WALUT\304\230", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Przelicz", "PLN", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Przelicz", "EUR", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Przelicz", "USD", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Przelicz", "CHF", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Przelicz", "GBP", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Przelicz: public Ui_Przelicz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRZELICZ_H
