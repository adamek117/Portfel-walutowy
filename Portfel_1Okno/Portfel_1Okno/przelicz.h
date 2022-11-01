#ifndef PRZELICZ_H
#define PRZELICZ_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
namespace Ui {
class Przelicz;
}

class Przelicz : public QWidget
{
    Q_OBJECT

public:
    explicit Przelicz(QWidget *parent = nullptr);
    ~Przelicz();


private slots:
    void on_przycisk_wymien_clicked();
    QString wymien(QString,QString,QString);
    void on_przycisk_dodaj_clicked();  

private:
    Ui::Przelicz *ui;
signals:
    void sendData2(QString amout, QString currency, QString amout2, QString currency2);
};

#endif // PRZELICZ_H
