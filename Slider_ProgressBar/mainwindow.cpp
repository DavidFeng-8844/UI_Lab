#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // connect slider to progressbar
    // connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar,
    //         SLOT(setValue(int)));
    // Signal to this to show the value to respond function
    // connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), this,
    //         SLOT(respond(int)));

    // Use functor notation
    // connect(ui->horizontalSlider, &QSlider::valueChanged, ui->progressBar,
    //         &QProgressBar::setValue);
    // connect(ui->horizontalSlider, &QSlider::valueChanged, this,
    //         &MainWindow::respond);

    // Use lambda function
    connect(ui->horizontalSlider, &QSlider::valueChanged, [=](){
        respond(ui->horizontalSlider->value());
        ui->progressBar->setValue(ui->horizontalSlider->value());
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::respond(int value)
{
    qDebug() << "value: " << value;
}
