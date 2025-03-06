#include "rust_bindings.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <QDebug>

void getCoordinates() {
    const char* coords = get_gps_coordinates();
    QString coordinates = QString(coords);
    qDebug() << "GPS Location: " << coordinates;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    getCoordinates(); // Fetch GPS coordinates on startup
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Info", "Button Clicked!");
}
