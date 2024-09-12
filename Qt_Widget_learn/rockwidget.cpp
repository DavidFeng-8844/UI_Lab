#include "rockwidget.h"
#include <QMessageBox>
#include <QPalette>
#include <QLabel>
#include <QPushButton>

RockWidget::RockWidget(QWidget *parent)
    : QWidget{parent} {
    QLabel* label = new QLabel(this);
    label->setText("First Line\nSecond Line");
    label->move(50, 50);

    //Add a styled widget and move it around
    QPalette label1Palette;
    label1Palette.setColor(QPalette::Window, Qt::yellow);
    label1Palette.setColor(QPalette::WindowText, Qt::blue);

    QFont label1Font("times", 20, QFont::Bold);

    QLabel* label1 = new QLabel(this);
    label1->setAutoFillBackground(true);
    label1->setText("My colored label");
    label1->setFont(label1Font);
    label1->move(150, 50);
    label1->setPalette(label1Palette);


    QPushButton* myButton = new QPushButton(this);
    QFont buttonFont("Times", 30, QFont::Bold);
    myButton->setText("Clicked me");
    myButton->setFont(buttonFont);
    myButton->move(100, 250);
    connect(myButton, SIGNAL(clicked()), this, SLOT(button_clicked()));
}

void RockWidget::button_clicked()
{
    QMessageBox::information(this, "Message", "You clicked this button");
}
QSize RockWidget::sizeHint() const
{
    return QSize(500, 500);
}
