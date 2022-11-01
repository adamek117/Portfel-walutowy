#include "dodaj.h"
#include "ui_dodaj.h"
#include "przelicz.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include "mainwindow.h"
dodaj::dodaj(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dodaj)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QDoubleValidator(this));
}

dodaj::~dodaj()
{
    delete ui;
}

void dodaj::on_przycisk_dodaj_clicked()
{
   emit sendData(ui->lineEdit->text(),ui->comboBox->currentText());
   this->close();
}
