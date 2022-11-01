#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dodaj.h"
#include "przelicz.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <QUrl>
#include <string>
#include "http.h"


QNetworkRequest request;
double values[5] = {0};
QString dane[5]={};
QFile zapis("D:/zapis.txt");
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
   // QString dane[5];

    ui->setupUi(this);
    zapis.open(QFile::ReadOnly | QFile::Text);
    QTextStream in(&zapis);

    for(int i=0; i<5; i++)
    {
        dane[i] = in.readLine();
    }

    ui->lineEdit->setText(dane[0]);
    ui->lineEdit_2->setText(dane[1]);
    ui->lineEdit_3->setText(dane[2]);
    ui->lineEdit_4->setText(dane[3]);
    ui->lineEdit_5->setText(dane[4]);
    zapis.close();
   // QStringList liczby=dane[0].split(" ");
    //LastData[0]=QString(liczby[0]).toDouble();
}

MainWindow::~MainWindow()
{
    //QFile zapis("D:/zapis.txt");
    zapis.open(QFile::WriteOnly | QFile::Text);
    QTextStream out(&zapis);
    double array[5] = {};
    QString array2[5];
    array[0] = ui->lineEdit->text().toDouble();
    array[1] = ui->lineEdit_2->text().toDouble();
    array[2] = ui->lineEdit_3->text().toDouble();
    array[3] = ui->lineEdit_4->text().toDouble();
    array[4] = ui->lineEdit_5->text().toDouble();
    array2[0] = QString::number(array[0]);
    array2[1] = QString::number(array[1]);
    array2[2] = QString::number(array[2]);
    array2[3] = QString::number(array[3]);
    array2[4] = QString::number(array[4]);


    out<<array2[0]<<"\n";
    out<<array2[1]<<"\n";
    out<<array2[2]<<"\n";
    out<<array2[3]<<"\n";
    out<<array2[4]<<"\n";

    zapis.flush();
    zapis.close();

    delete ui;
}


void MainWindow::on_przycisk_dodaj_clicked()
{
    dodaj *d = new dodaj;
    connect(d,SIGNAL(sendData(QString,QString)),this,SLOT(receiveData(QString,QString)));
    d->show();
}


QString MainWindow::przelicz(double x, double y)
{
    y=x+y;
   QString z = QString::number(y);
    return z;


}
QString MainWindow::odejmij(double x, double y)
{
    if(x>y)
    {
        QMessageBox::warning(this,"Error","Brak środków na koncie");
        QString z = QString::number(y);
        return z;
    }
    else
    {
        y = y - x;
        QString z = QString::number(y);
        return z;
    }
}

void MainWindow::receiveData(QString data,QString waluta)
{

    double value = data.toDouble();
        if(value >=0)
        {
        if(waluta=="PLN")
        {
           values[0] = ui->lineEdit->text().toDouble();
           ui->lineEdit->setText(przelicz(value, values[0]));
        }
        else if(waluta =="EUR")
        {
          values[1] = ui->lineEdit_2->text().toDouble();
          ui->lineEdit_2->setText(przelicz(value, values[1]));
        }
        else if(waluta =="USD")
        {
          values[2] = ui->lineEdit_3->text().toDouble();
          ui->lineEdit_3->setText(przelicz(value, values[2]));
        }
        else if(waluta =="CHF")
        {
          values[3] = ui->lineEdit_4->text().toDouble();
          ui->lineEdit_4->setText(przelicz(value, values[3]));
         }
        else if(waluta =="GBP")
        {
         values[4] = ui->lineEdit_5->text().toDouble();
         ui->lineEdit_5->setText(przelicz(value, values[4]));
        }
        else
        {
            QMessageBox::warning(this,"Error", "Błąd");
        }
    }
    else
    {
       QMessageBox::warning(this,"Error", "Błąd");
    }


}

void MainWindow::on_przycisk_dodaj_2_clicked()
{
    Przelicz *p = new Przelicz;
    connect(p,SIGNAL(sendData2(QString,QString,QString, QString)),this,SLOT(receiveData2(QString,QString,QString,QString)));
    p->show();
}

void MainWindow::receiveData2(QString amout, QString currency, QString amout2, QString currency2)
{
    double value = amout.toDouble();
    double value2 = amout2.toDouble();
    if(currency == "WYBIERZ WALUTĘ" || currency2 =="WYBIERZ WALUTĘ")
    {
        QMessageBox::warning(this, "Error", "Wybierz walutę");
    }
    else
    {
        if(currency == "PLN")
        {
            values[0] = ui->lineEdit->text().toDouble();
            if(values[0] >= value)
            {

                if(currency2 == "EUR")
                {   ui->lineEdit->setText(odejmij(value, values[0]));
                    values[1] = ui->lineEdit_2->text().toDouble();
                    ui->lineEdit_2->setText(przelicz(value2, values[1]));
                }
                else if(currency2 == "USD")
                {   ui->lineEdit->setText(odejmij(value, values[0]));
                    values[2] = ui->lineEdit_3->text().toDouble();
                    ui->lineEdit_3->setText(przelicz(value2, values[2]));
                }
                if(currency2 == "CHF")
                {   ui->lineEdit->setText(odejmij(value, values[0]));
                    values[3] = ui->lineEdit_4->text().toDouble();
                    ui->lineEdit_4->setText(przelicz(value2, values[3]));
                }
                if(currency2 == "GBP")
                {   ui->lineEdit->setText(odejmij(value, values[0]));
                    values[4] = ui->lineEdit_5->text().toDouble();
                    ui->lineEdit_5->setText(przelicz(value2, values[4]));
                }
                else if(currency2 == "PLN")
                {
                    QMessageBox::warning(this, "Error", "Nie pomnożysz pieniążków :)");
                }

            }
            else
            {
                QMessageBox::warning(this, "Error", "Brak środków na koncie");
            }
        }
        if(currency == "EUR")
        {
            values[1] = ui->lineEdit_2->text().toDouble();
            if(values[1] >= value)
            {


                if(currency2 == "PLN")
                {   ui->lineEdit_2->setText(odejmij(value, values[1]));
                    values[0] = ui->lineEdit->text().toDouble();
                    ui->lineEdit->setText(przelicz(value2, values[0]));
                }
                else if(currency2 == "USD")
                {   ui->lineEdit_2->setText(odejmij(value, values[1]));
                    values[2] = ui->lineEdit_3->text().toDouble();
                    ui->lineEdit_3->setText(przelicz(value2, values[2]));
                }
                if(currency2 == "CHF")
                {   ui->lineEdit_2->setText(odejmij(value, values[1]));
                    values[3] = ui->lineEdit_4->text().toDouble();
                    ui->lineEdit_4->setText(przelicz(value2, values[3]));
                }
                if(currency2 == "GBP")
                {   ui->lineEdit_2->setText(odejmij(value, values[1]));
                    values[4] = ui->lineEdit_5->text().toDouble();
                    ui->lineEdit_5->setText(przelicz(value2, values[4]));
                }
                else if(currency2 == "EUR")
                {
                    QMessageBox::warning(this, "Error", "Nie pomnożysz pieniążków :)");
                }

            }
            else
            {
                QMessageBox::warning(this, "Error", "Brak środków na koncie");
            }
        }
        if(currency == "USD")
        {
            values[2] = ui->lineEdit_3->text().toDouble();
            if(values[2] >= value)
            {

                if(currency2 == "EUR")
                {   ui->lineEdit_3->setText(odejmij(value, values[2]));
                    values[1] = ui->lineEdit_2->text().toDouble();
                    ui->lineEdit_2->setText(przelicz(value2, values[1]));
                }
                else if(currency2 == "PLN")
                {   ui->lineEdit_3->setText(odejmij(value, values[2]));
                    values[0] = ui->lineEdit->text().toDouble();
                    ui->lineEdit->setText(przelicz(value2, values[0]));
                }
                if(currency2 == "CHF")
                {
                    ui->lineEdit_3->setText(odejmij(value, values[2]));
                    values[3] = ui->lineEdit_4->text().toDouble();
                    ui->lineEdit_4->setText(przelicz(value2, values[3]));
                }
                if(currency2 == "GBP")
                {
                    ui->lineEdit_3->setText(odejmij(value, values[2]));
                    values[4] = ui->lineEdit_5->text().toDouble();
                    ui->lineEdit_5->setText(przelicz(value2, values[4]));
                }
                else if(currency2 == "USD")
                {
                    QMessageBox::warning(this, "Error", "Nie pomnożysz pieniążków :)");
                }

            }
            else
            {
                QMessageBox::warning(this, "Error", "Brak środków na koncie");
            }
        }
        if(currency == "CHF")
        {
            values[3] = ui->lineEdit_4->text().toDouble();
            if(values[3] >= value)
            {


                if(currency2 == "EUR")
                {   ui->lineEdit_4->setText(odejmij(value, values[3]));
                    values[1] = ui->lineEdit_2->text().toDouble();
                    ui->lineEdit_2->setText(przelicz(value2, values[1]));
                }
                else if(currency2 == "USD")
                {   ui->lineEdit_4->setText(odejmij(value, values[3]));
                    values[2] = ui->lineEdit_3->text().toDouble();
                    ui->lineEdit_3->setText(przelicz(value2, values[2]));
                }
                if(currency2 == "PLN")
                {   ui->lineEdit_4->setText(odejmij(value, values[3]));
                    values[0] = ui->lineEdit->text().toDouble();
                    ui->lineEdit->setText(przelicz(value2, values[0]));
                }
                if(currency2 == "GBP")
                {   ui->lineEdit_4->setText(odejmij(value, values[3]));
                    values[4] = ui->lineEdit_5->text().toDouble();
                    ui->lineEdit_5->setText(przelicz(value2, values[4]));
                }
                else if(currency2 == "CHF")
                {
                    QMessageBox::warning(this, "Error", "Nie pomnożysz pieniążków :)");
                }

            }
            else
            {
                QMessageBox::warning(this, "Error", "Brak środków na koncie");
            }
        }
        if(currency == "GBP")
        {
            values[4] = ui->lineEdit_5->text().toDouble();
            if(values[4] >= value)
            {


                if(currency2 == "EUR")
                {   ui->lineEdit_5->setText(odejmij(value, values[4]));
                    values[1] = ui->lineEdit_2->text().toDouble();
                    ui->lineEdit_2->setText(przelicz(value2, values[1]));
                }
                else if(currency2 == "USD")
                {   ui->lineEdit_5->setText(odejmij(value, values[4]));
                    values[2] = ui->lineEdit_3->text().toDouble();
                    ui->lineEdit_3->setText(przelicz(value2, values[2]));
                }
                if(currency2 == "CHF")
                {   ui->lineEdit_5->setText(odejmij(value, values[4]));
                    values[3] = ui->lineEdit_4->text().toDouble();
                    ui->lineEdit_4->setText(przelicz(value2, values[3]));
                }
                if(currency2 == "PLN")
                {    ui->lineEdit_5->setText(odejmij(value, values[4]));
                    values[0] = ui->lineEdit->text().toDouble();
                    ui->lineEdit->setText(przelicz(value2, values[0]));
                }
                else if(currency2 == "GBP")
                {
                    QMessageBox::warning(this, "Error", "Nie pomnożysz pieniążków :)");
                }

            }
            else
            {
                QMessageBox::warning(this, "Error", "Brak środków na koncie");
            }
        }
    }
}




