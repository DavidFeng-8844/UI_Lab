#include <QCoreApplication>
#include <QtWidgets>
#include <QTextEdit>
#include <QColor>
#include <QFont>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextEdit* myWidget = new QTextEdit();
    myWidget->setWindowTitle("QTextEdit Example");
    myWidget->setTextColor("red");
    QFont f("DejaVu Sans");
    myWidget->setFont(f);
    myWidget->show();
    return a.exec();
}
