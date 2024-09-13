#ifndef WINDOW_H
#define WINDOW_H
#include <QWidget>
class QPushButton;

QT_BEGIN_NAMESPACE
namespace Ui {
class MyWindow;
}
QT_END_NAMESPACE

class MyWindow : public QWidget
{
    Q_OBJECT

public:
    MyWindow();

private:
    Ui::MyWindow *ui;
    void createWidgets();
    void arrangeWidgets();

    // Pointers to widgets are created here
    // QPushButton* aButton;
};
#endif // WINDOW_H
