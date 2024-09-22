// Composite widget example
// (NDE, 2016-07-18)

#include <QtWidgets>
#include "controller.h"

Controller::Controller(QString title, QWidget* parent):
  QGroupBox(title, parent)
{
  createWidgets();
  arrangeWidgets();
  makeConnections();
}

void Controller::createWidgets()
{
    number = new QLCDNumber(3);
    number->display(50);
    slider = new QSlider(Qt::Horizontal);
    slider->setRange(0, 100);
    slider->setTickPosition(QSlider::TicksBelow);
    slider->setTickInterval(10);
    slider->setValue(50);
}

void Controller::arrangeWidgets()
{
    QGridLayout* layout = new QGridLayout();
    layout->addWidget(number, 0, 0);
    layout->addWidget(slider, 1, 0);
    layout->setRowMinimumHeight(0, 75);
    setLayout(layout);
}

void Controller::makeConnections()
{
    connect(slider, SIGNAL(valueChanged(int)), number, SLOT(display(int)));
    connect(slider, SIGNAL(valueChanged(int)), this, SIGNAL(valueChanged(int)));
}

void Controller::setValue(int value)
{
    slider->setValue(value);
}
