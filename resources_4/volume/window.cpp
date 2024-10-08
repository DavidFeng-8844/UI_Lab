// Volume control simulation in Qt
// (NDE, 2015-06-17)

#include <QtWidgets>
#include "window.hpp"

VolumeControl::VolumeControl()
{
  createWidgets();
  arrangeWidgets();
  setWindowTitle("Volume Control");
  makeConnections();
}

void VolumeControl::createWidgets()
{
  number = new QLCDNumber(3);
  number->display(50);

  slider = new QSlider(Qt::Horizontal);
  slider->setRange(0, 128);
  slider->setTickPosition(QSlider::TicksBelow);
  slider->setTickInterval(10);
  slider->setValue(50);
}

void VolumeControl::arrangeWidgets()
{
  QGridLayout* layout = new QGridLayout();
  layout->addWidget(number, 0, 0);
  layout->addWidget(slider, 1, 0);
  layout->setRowMinimumHeight(0, 75);
  setLayout(layout);
}

// Implement makeConnections method here
void VolumeControl::makeConnections() {
    connect(slider, SIGNAL(valueChanged(int)),
            number, SLOT(display(int)));
    connect(slider, SIGNAL(valueChanged(int)), this,
            SLOT(numberColour(int)));
}

void VolumeControl::numberColour(int value)
{
    if (value > 75)
        number->setStyleSheet("color: red");
    else
        number->setStyleSheet("color: black");
}
