#include <QtWidgets>
#include <QPushButton>
#include <QTextEdit>
#include <QLabel>


int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QWidget* window = new QWidget();
    window->setWindowTitle("QHBoxLayout Test");

    // Create three push buttons
    QPushButton* button1 = new QPushButton("Search");
    // QPushButton* button2 = new QPushButton();
    // QPushButton* button3 = new QPushButton();
    QLabel* label1 = new QLabel("Name");
    QTextEdit* text1 = new QTextEdit();

    // Add three widgets to the layout
    QHBoxLayout* layout = new QHBoxLayout();
    layout->addStretch(1);
    layout->addWidget(label1);
    layout->addWidget(text1);
    layout->addStretch(1);
    layout->addWidget(button1);
    layout->addStretch(1);
    window->setLayout(layout);
    window->show();
    return app.exec();
}
