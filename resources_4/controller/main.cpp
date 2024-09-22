// Test program for Controller class
// (NDE, 2016-07-18)

#include <QtWidgets>
#include "controller.h"

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  // Create widgets

  Controller* left = new Controller("Left Channel");
  Controller* right = new Controller("Right Channel");

  // Connect left and right slider together
  QObject::connect(left, SIGNAL(valueChanged(int)), right, SLOT(setValue(int)));
  QObject::connect(right, SIGNAL(valueChanged(int)), left, SLOT(setValue(int)));

  // Arrange widgets horizontally

  QHBoxLayout* layout = new QHBoxLayout();
  layout->addWidget(left);
  layout->addWidget(right);

  // Create and display window

  QWidget* window = new QWidget();
  window->setWindowTitle("Stereo Volume Controller");
  window->setLayout(layout);

  window->show();

  return app.exec();
}
