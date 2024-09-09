#include <QCoreApplication>
#include<QtWidgets>

int main(int argc, char *argv[])
{
    // QCoreApplication a(argc, argv);
    // Set up code that uses the Qt event loop here.
    // Call a.quit() or a.exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.
    // If you do not need a running Qt event loop, remove the call
    // to a.exec() or use the Non-Qt Plain C++ Application template.
    // return a.exec();

    qDebug() << QT_VERSION_STR;
    QApplication app(argc, argv);
    QPushButton* widget = new QPushButton("Click Here");
    widget->setIcon(QIcon(":/qt-logo-documentation.svg"));
    widget->setFont(QFont("Times", 18, QFont::Bold));
    QLabel* label = new QLabel("<h1>Hello World!</h1>");
    widget -> setParent(label);
    // widget -> setEnabled(false); // Used to set the icon disabled
    label -> setFixedSize(QSize(500,300));
    QObject::connect(widget, SIGNAL(clicked()), &app, SLOT(quit()));
    label-> show();
    return app.exec();
}
