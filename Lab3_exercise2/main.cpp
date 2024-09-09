#include <QCoreApplication>
#include <QDoubleSpinBox>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    qDebug() << QT_VERSION_STR;
    QApplication app(argc, argv);
    QDoubleSpinBox* widget = new QDoubleSpinBox();
    widget->setRange(0.0, 44.0);
    widget->setSingleStep(0.05);
    widget->setFont(QFont("Times", 16, QFont::Bold));
    widget->setMinimumSize(250, 40);
    widget->setWindowTitle("QDoubleSpinBox");
    widget->show();
    return app.exec();
}

