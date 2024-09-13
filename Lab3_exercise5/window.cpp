#include <QtWidgets> // include all widgets, including push-buttons
#include "window.h"
#include <QStringList>

    MyWindow::MyWindow()
{
    // createWidgets();
    // arrangeWidgets();
    setWindowTitle("Currency Converter");
    setMinimumSize(320, 200);

    //Overall Layout
    QVBoxLayout* myLayout = new QVBoxLayout();

    //current and converted Layout
    QHBoxLayout* currentLayout = new QHBoxLayout();
    QHBoxLayout* convertedLayout = new QHBoxLayout();

    QDoubleSpinBox* currentAmount = new QDoubleSpinBox();
    currentAmount->setValue(44);
    QDoubleSpinBox* convertedAmount = new QDoubleSpinBox();
    convertedAmount->setValue(18);
    QStringList myList = {"Pound", "Yuan", "Euro"};

    QComboBox* currentCurrency = new QComboBox();
    QComboBox* convertedCurrency = new QComboBox();

    //Insert things to the combo box
    currentCurrency->insertItems(3, myList);
    convertedCurrency->insertItems(2, myList);
    QLabel* myLabel = new QLabel("converts to");

    currentLayout->addWidget(currentAmount);
    currentLayout->addWidget(currentCurrency);
    convertedLayout->addWidget(convertedAmount);
    convertedLayout->addWidget(convertedCurrency);

    myLayout->addLayout(currentLayout);
    myLayout->addWidget(myLabel);
    myLayout->addLayout(convertedLayout);

    this->setLayout(myLayout);




}

void MyWindow::createWidgets()
{
    // Create widgets using new

    // aButton = new QPushButton("push me, i dare you");
    // currentCurrency->insertItems("Yuan");
}

void MyWindow::arrangeWidgets()
{
    // Create layout for widgets here
    QHBoxLayout* layout = new QHBoxLayout();
    setLayout(layout);
}
