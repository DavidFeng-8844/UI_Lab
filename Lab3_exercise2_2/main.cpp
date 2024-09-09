#include <QCoreApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    qDebug() << QT_VERSION_STR;
    QApplication a(argc, argv);
    QLineEdit* myLine = new QLineEdit();
    myLine->setMinimumSize(200, 40);
    myLine->setAlignment(Qt::AlignLeft);
    // myLine->setEnabled(false);
    // myLine->setInputMask("DDD!A!A");
    QIntValidator* validator = new QIntValidator(1, 99);
    myLine->setValidator(validator);
    myLine->show();
    return a.exec();
}
