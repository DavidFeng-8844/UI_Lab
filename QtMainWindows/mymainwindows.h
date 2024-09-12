#ifndef MYMAINWINDOWS_H
#define MYMAINWINDOWS_H

#include <QMainWindow>

class MyMainWindows : public QMainWindow
{
    Q_OBJECT
public:
    explicit MyMainWindows(QWidget *parent = nullptr);

signals:

    // QWidget interface
public:
    QSize sizeHint() const;
};

#endif // MYMAINWINDOWS_H
