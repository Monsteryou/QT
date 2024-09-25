#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QWidget>
#include <QLabel>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow();
    ~MainWindow();

private :
    QPushButton *monbouton1 ;
    QPushButton *monbouton2 ;
    QPushButton *monbouton3 ;
    QLabel *monAffichage;

    int compteur;

private slots:
    void clicBouton();
    void decrementer();
    void remmettrezero();


};
#endif // MAINWINDOW_H
