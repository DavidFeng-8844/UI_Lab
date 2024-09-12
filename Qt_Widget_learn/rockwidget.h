#ifndef ROCKWIDGET_H
#define ROCKWIDGET_H

#include <QWidget>
#include <QLabel>
class RockWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RockWidget(QWidget* parent = nullptr);
private slots:
    void button_clicked();
private:
    QSize sizeHint() const;
};

#endif // ROCKWIDGET_H
