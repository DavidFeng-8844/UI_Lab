#include <QtWidgets>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  QWidget* window = new QWidget();
  window->setWindowTitle("QFormLayout Test");

  // Create widgets

  QLineEdit* nameField = new QLineEdit();
  QLineEdit* emailField = new QLineEdit();
  QSpinBox* ageField = new QSpinBox();
  ageField->setRange(1, 100);

  // Arrange widgets

  QFormLayout* form = new QFormLayout();
  form->addRow("Full &Name:", nameField);
  form->addRow("&Email:", emailField);
  form->addRow("&Age:", ageField);
  form->setLabelAlignment(Qt::AlignLeft);
  form->setRowWrapPolicy(QFormLayout::WrapAllRows);


  window->setLayout(form);

  // Activate UI

  window->show();

  return app.exec();
}
