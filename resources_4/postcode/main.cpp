// Test program for PostcodeLineEdit class
// (NDE, 2015-10-01)

#include "postcode.h"
#include "examgradeinput.h"

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  // Create widgets

  QFont font("DejaVu Sans", 18);

  // PostcodeLineEdit* postcode = new PostcodeLineEdit();
  // postcode->setFont(font);

  ExamGradeInput* examgrade = new ExamGradeInput();

  QLabel* label = new QLabel("&Postcode:");
  label->setFont(font);
  label->setBuddy(examgrade);

  // Arrange widgets horizontally

  QHBoxLayout* layout = new QHBoxLayout();
  layout->addWidget(label);
  layout->addWidget(examgrade);

  // Create and display window

  QWidget* window = new QWidget();
  window->setWindowTitle("ExamGrade Test");
  window->setLayout(layout);

  window->show();

  return app.exec();
}
