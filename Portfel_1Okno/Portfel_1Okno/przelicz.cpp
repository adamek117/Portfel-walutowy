#include "przelicz.h"
#include "ui_przelicz.h"
#include "dodaj.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "http.h"

HttpRequest* obiekt = new HttpRequest;
Przelicz::Przelicz(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Przelicz)
{
    ui->setupUi(this);
    ui->przycisk_dodaj->setEnabled(false);
    ui->lineEdit->setValidator(new QDoubleValidator);
}

Przelicz::~Przelicz()
{
    delete ui;
}

void Przelicz::on_przycisk_wymien_clicked()
{

    QString value = ui->lineEdit->text();
    double wartosc;
    wartosc =value.toDouble();

    if(wartosc < 0)
    {
        QMessageBox::warning(this, "Error", "Ujemna wartość");
    }
    else
    {
        if(ui->comboBox->currentText()!="WYBIERZ WALUTĘ" && ui->comboBox_2->currentText()!="WYBIERZ WALUTĘ")
     {
      QString new_value =(wymien(ui->lineEdit->text(),ui->comboBox->currentText(), ui->comboBox_2->currentText()));
      ui->lineEdit_2->setText(new_value);
      ui->przycisk_dodaj->setEnabled(true);
      }
        else
        {
            QMessageBox::warning(this,"Error", "Błąd");
        }
    }

}

void Przelicz::on_przycisk_dodaj_clicked()
{
    emit sendData2(ui->lineEdit->text(), ui->comboBox->currentText(), ui->lineEdit_2->text(), ui->comboBox_2->currentText());
    ui->przycisk_dodaj->setEnabled(false);
}

QString Przelicz::wymien(QString b, QString c, QString d)
{
    if(c=="PLN")
    {
        if(d=="EUR")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 0.22;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="USD")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 0.26;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="CHF")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 0.24;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="GBP")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 0.19;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="PLN")
        {
             return b;
        }
    }
    else if(c=="EUR")
    {
        if(d=="PLN")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 4.55;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="USD")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 1.19;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="CHF")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 1.09;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="GBP")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 0.86;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="EUR")
        {
             return b;
        }
    }
    else if(c=="USD")
    {
        if(d=="PLN")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 3.84;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="EUR")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 0.84;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="CHF")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 0.92;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="GBP")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 0.72;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="USD")
        {
             return b;
        }
    }
    else if(c=="CHF")
    {
        if(d=="PLN")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 4.16;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="USD")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 1.08;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="GBP")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 0.79;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="EUR")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 0.91;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="CHF")
        {
             return b;
        }
    }
    else if(c=="GBP")
    {
        if(d=="PLN")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 5.30;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="USD")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 1.38;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="CHF")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 1.27;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="EUR")
        {
            double wartosc= b.toDouble();
            wartosc= wartosc * 1.16;
            QString wartosc1=QString::number(wartosc);
            return wartosc1;
        }
        if(d=="GBP")
        {
             return b;
        }
    }
}


