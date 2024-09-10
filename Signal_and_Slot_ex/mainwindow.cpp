#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // String notation
    // connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(changeText()));

    // Use lambda function to do the connection job
    connect(ui->pushButton, &QPushButton::clicked, [=]() {
        ui->label->setText("text from lambda");
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeText()
{
    ui->label->setText("some other text");
}

// Use connection by qt
void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("button 2 clicked");
}

