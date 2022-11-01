/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QPushButton *przycisk_dodaj;
    QPushButton *przycisk_dodaj_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(421, 500);
        MainWindow->setMinimumSize(QSize(421, 500));
        MainWindow->setMaximumSize(QSize(421, 500));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 30, 145, 37));
        label_2->setMinimumSize(QSize(145, 37));
        label_2->setMaximumSize(QSize(145, 37));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto")});
        font.setPointSize(22);
        label_2->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 100, 401, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(102, 37));
        lineEdit->setMaximumSize(QSize(102, 37));
        lineEdit->setFont(font);
        lineEdit->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit->setFrame(false);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(60, 37));
        label->setMaximumSize(QSize(60, 37));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto")});
        font1.setPointSize(16);
        label->setFont(font1);

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(102, 37));
        lineEdit_2->setMaximumSize(QSize(102, 37));
        lineEdit_2->setFont(font);
        lineEdit_2->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_2->setFrame(false);
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_2->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(60, 37));
        label_3->setMaximumSize(QSize(60, 37));
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(102, 37));
        lineEdit_3->setMaximumSize(QSize(102, 37));
        lineEdit_3->setFont(font);
        lineEdit_3->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_3->setFrame(false);
        lineEdit_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_3->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(60, 37));
        label_4->setMaximumSize(QSize(60, 37));
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(102, 37));
        lineEdit_4->setMaximumSize(QSize(102, 37));
        lineEdit_4->setFont(font);
        lineEdit_4->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_4->setFrame(false);
        lineEdit_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_4->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(60, 37));
        label_5->setMaximumSize(QSize(60, 37));
        label_5->setFont(font1);

        horizontalLayout_4->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(102, 37));
        lineEdit_5->setMaximumSize(QSize(102, 37));
        lineEdit_5->setFont(font);
        lineEdit_5->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_5->setFrame(false);
        lineEdit_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_5->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(60, 37));
        label_6->setMaximumSize(QSize(60, 37));
        label_6->setFont(font1);

        horizontalLayout_5->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_5);

        przycisk_dodaj = new QPushButton(centralwidget);
        przycisk_dodaj->setObjectName(QString::fromUtf8("przycisk_dodaj"));
        przycisk_dodaj->setGeometry(QRect(90, 410, 51, 25));
        przycisk_dodaj->setMaximumSize(QSize(51, 25));
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
        przycisk_dodaj_2 = new QPushButton(centralwidget);
        przycisk_dodaj_2->setObjectName(QString::fromUtf8("przycisk_dodaj_2"));
        przycisk_dodaj_2->setGeometry(QRect(270, 410, 51, 25));
        przycisk_dodaj_2->setMaximumSize(QSize(51, 25));
        przycisk_dodaj_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #2a9df4;\n"
"color: white;\n"
"border: 1px solid #2a9df4;\n"
"border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: #187bcd;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Portfel Walutowy", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Stan Konta", nullptr));
        lineEdit->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "PLN", nullptr));
        lineEdit_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "EUR", nullptr));
        lineEdit_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "USD", nullptr));
        lineEdit_4->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "CHF", nullptr));
        lineEdit_5->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "GBP", nullptr));
        przycisk_dodaj->setText(QCoreApplication::translate("MainWindow", "Dodaj", nullptr));
        przycisk_dodaj_2->setText(QCoreApplication::translate("MainWindow", "Kantor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
