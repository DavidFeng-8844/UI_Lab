// Composite widget example
// (NDE, 2016-07-18)

#pragma once

#include <QGroupBox>

class QLCDNumber;
class QSlider;

class Controller: public QGroupBox
{
  Q_OBJECT
  public:
    Controller(QString title = "", QWidget* parent = 0);
  signals:
      void valueChanged(int);
  private:
    void createWidgets();
    void arrangeWidgets();
    void makeConnections();
    QLCDNumber* number;
    QSlider* slider;
  public slots:
    void setValue(int);

};
