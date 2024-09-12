#include "mymainwindows.h"
#include <QApplication>
#include <QPushButton>
#include <QStatusBar>
#include <QAction>
#include <QMenu>
#include <QMenuBar>

MyMainWindows::MyMainWindows(QWidget *parent)
    : QMainWindow{parent}
{
    //Add central widget
    QPushButton* myPushButton = new QPushButton("my dude", this);
    setCentralWidget(myPushButton);

    // Initialize Status Bar
    QStatusBar* myStatusBar = statusBar();
    myStatusBar->showMessage("Status Bar Initialized");
    // statusBar()->showMessage("Status Bar Initialized");
    connect(myPushButton, &QPushButton::clicked, [=](){
        // statusBar()->showMessage(tr("clicked"), 2000);
        myStatusBar->showMessage(tr("my dude clicked the button"), 1000);
        // setStatusBar(myStatusBar);
    });

    //Declare Quit Action
    // QAction* quitAction;
    QAction* quitAction;
    quitAction = new QAction("quit");

    connect(quitAction, &QAction::triggered, [=](){
        QApplication::quit();
    });

    //Add menus

    QMenu * fileMenu = menuBar()->addMenu("File");
    fileMenu->addAction(quitAction);
    menuBar()->addMenu("Edit");
    menuBar()->addMenu("Window");
    menuBar()->addMenu("Settings");
    menuBar()->addMenu("Help");


}

QSize MyMainWindows::sizeHint() const
{
    return QSize(800, 500);
}
