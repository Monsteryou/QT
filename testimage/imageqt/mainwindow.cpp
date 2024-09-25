#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn1_clicked()
{
    QPixmap pixmap("C:/Users/CIEL23_admin/Pictures/Nouveau dossier/télécharger.jfif");
    if (!pixmap.isNull()) {
        ui->affimage->setPixmap(pixmap);
        ui->affimage->setScaledContents(true);
    }
}

void MainWindow::on_btn2_clicked()
{

    QPixmap pixmap("C:/Users/CIEL23_admin/Pictures/Nouveau dossier/OIP.jfif");
    if (!pixmap.isNull()) {
        ui->affimage->setPixmap(pixmap);
        ui->affimage->setScaledContents(true);
    }
}

void MainWindow::on_btn3_clicked()
{
    close();
}

void MainWindow::on_affimage_linkActivated(const QString &link)
{
        QPixmap pixmap(link);

    if (!pixmap.isNull()) {
        ui->affimage->setPixmap(pixmap);
        ui->affimage->setScaledContents(true);
        qDebug() << "Image chargée depuis le lien:" << link;
    } else {
        qDebug() << "Impossible de charger l'image depuis le lien:" << link;
    }
}
