#ifndef DODAJ_H
#define DODAJ_H

#include <QWidget>

namespace Ui {
class dodaj;
}

class dodaj : public QWidget
{
    Q_OBJECT

public:
    explicit dodaj(QWidget *parent = nullptr);
    ~dodaj();

private slots:
    void on_przycisk_dodaj_clicked();

private:
    Ui::dodaj *ui;
signals:
    void  sendData(QString data,QString waluta);

};

#endif // DODAJ_H
