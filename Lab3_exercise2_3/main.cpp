#include <QCoreApplication>
#include <QtWidgets>
#include <QTextEdit>
#include <QColor>
#include <QFont>
#include <QTextCursor>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTextCharFormat>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Create a main widget and layout
    QWidget* window = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout(window);

    //New Text edit
    QTextEdit* myWidget = new QTextEdit();
    myWidget->setWindowTitle("QTextEdit Example");
    myWidget->setTextColor(QColor("cyan"));
    QFont f("DejaVu Sans", 16);
    myWidget->setFont(f);

    // Ensure that the text color is set to cyan for new text
    QObject::connect(myWidget, &QTextEdit::textChanged, [myWidget]() {
        // Use the QTextCursor to apply cyan color to new text
        QTextCursor cursor = myWidget->textCursor();
        if (!cursor.hasSelection()) {  // Only change format when there's no selection
            QTextCharFormat format;
            format.setForeground(QColor("cyan"));
            cursor.mergeCharFormat(format);
            myWidget->setTextCursor(cursor);
        }
    });

    // Assume that the user has selected some text manually, now we change its color
    QTextCursor cursor = myWidget->textCursor();

    if (cursor.hasSelection()) {
        // Create a QTextCharFormat to modify the text's color
        QTextCharFormat format;
        format.setForeground(QColor("red"));  // Set color to red

        // Apply the format to the selected text
        cursor.mergeCharFormat(format);
    }
    // Create a button to change the selected text color
    QPushButton* changeColorButton = new QPushButton("Change Text Color");

    // changeColorButton->setFlat(true);

    // Add the QTextEdit and button to the layout
    layout->addWidget(myWidget);
    layout->addWidget(changeColorButton);

    // Connect the button click to a lambda function that changes the color of selected text
    QObject::connect(changeColorButton, &QPushButton::clicked, myWidget, [myWidget]() {
        QTextCursor cursor = myWidget->textCursor();

        if (cursor.hasSelection()) {
            QTextCharFormat format;
            format.setForeground(QColor("darkGreen"));  // Change selected text color to blue
            cursor.mergeCharFormat(format);
        }
    });


    // Show the main window
    window->setLayout(layout);
    window->show();

    // myWidget->show();
    return a.exec();
}
