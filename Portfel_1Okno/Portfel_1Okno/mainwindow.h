#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dodaj.h"
#include "przelicz.h"


extern double values[5];
extern QString dane[5];
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_przycisk_dodaj_clicked();
    void receiveData(QString data, QString waluta);
    void receiveData2(QString amount, QString currency, QString amount2, QString currency2);
    QString przelicz(double x, double y);
    QString odejmij(double x, double y);
    void on_przycisk_dodaj_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
