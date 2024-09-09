#include <QCoreApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    qDebug() << QT_VERSION_STR;
    QApplication a(argc, argv);
    QLineEdit* myLine = new QLineEdit();
    myLine->setMinimumSize(200, 40);
    myLine->setAlignment(Qt::AlignCenter);
    // myLine->setEnabled(false);
    myLine->show();
    return a.exec();
}
