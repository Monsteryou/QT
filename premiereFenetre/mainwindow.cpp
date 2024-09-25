#include "mainwindow.h"

MainWindow::MainWindow(): QWidget()
{
    this->compteur = 0;
    setFixedSize(200, 150);

    monbouton1 = new QPushButton("bouton1", this);
    monbouton1->move(10, 10);
    monAffichage = new QLabel("0", this);
    monAffichage->move(10, 100);

    monbouton2 = new QPushButton("Décrémenter", this);
    monbouton2->move(10, 40);

    monbouton3 = new
    QPushButton("remmettrezero", this);
    monbouton3->move(10, 70);

       connect(monbouton1, SIGNAL(clicked()), this, SLOT(clicBouton()));
       connect(monbouton2, SIGNAL(clicked()), this, SLOT(decrementer()));
       connect(monbouton3,SIGNAL(clicked()), this, SLOT(remmettrezero()));

}

MainWindow::~MainWindow()
{

}

void MainWindow::clicBouton()
{
    this->compteur++;
    this->monAffichage->setText(QString::number(this->compteur));
    this->monAffichage->adjustSize();
}

void MainWindow::decrementer()
{
    this->compteur--;
    this->monAffichage->setText(QString::number(this->compteur));
    this->monAffichage->adjustSize();
}

void MainWindow::remmettrezero()
{
    this->compteur = 0;
    this->monAffichage->setText(QString::number(this->compteur));
    this->monAffichage->adjustSize();
}
