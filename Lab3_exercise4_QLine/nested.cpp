#include <QtWidgets>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  QWidget* window = new QWidget();
  window->setWindowTitle("Nested Layout Test");

  // Create widgets
  QLabel* label = new QLabel("&Name:");
  QLineEdit* nameField = new QLineEdit();
  label->setBuddy(nameField);

  QPushButton* searchButton = new QPushButton("&Search");
  QPushButton* closeButton = new QPushButton("Close");
  QCheckBox* caseCheck = new QCheckBox("Match &case");
  QCheckBox* backwardCheck = new QCheckBox("Search&backward");

  // Arrange widgets
  // Left Layout
  QHBoxLayout* topLeftLayout = new QHBoxLayout();
  topLeftLayout->addWidget(label);
  topLeftLayout->addWidget(nameField);
  QVBoxLayout* leftLayout = new QVBoxLayout();
  leftLayout->addLayout(topLeftLayout);
  leftLayout->addWidget(caseCheck);
  leftLayout->addWidget(backwardCheck);
  leftLayout->addStretch(1);

  //Right Layout
  QVBoxLayout* rightLayout = new QVBoxLayout();
  rightLayout->addWidget(searchButton);
  rightLayout->addWidget(closeButton);
  rightLayout->addStretch(10);

  QHBoxLayout* mainLayout = new QHBoxLayout();
  mainLayout->addLayout(leftLayout);
  mainLayout->addLayout(rightLayout);
  window->setLayout(mainLayout);

  // Avoid vertical resizing
  window->setFixedHeight(window->sizeHint().height());
  // Activate UI
  window->show();

  return app.exec();
}
