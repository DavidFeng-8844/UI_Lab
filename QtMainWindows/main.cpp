#include <QApplication>
#include "mymainwindows.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyMainWindows w;
    w.setWindowTitle("My title");
    w.show();
    return a.exec();
}
