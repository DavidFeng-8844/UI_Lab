//
// Created by twak on 14/10/2019.
//

#ifndef RESPONSIVEWINDOW_H
#define RESPONSIVEWINDOW_H

#include <QWidget>
#include "responsive_layout.h"

//using namespace std;

class ResponsiveWindow: public QWidget {

public:
    ResponsiveWindow();
    void resizeEvent(QResizeEvent *event);
    void switchToCompactLayout();
    void switchToHorizontalLayout();
    void switchToVerticalLayout();
    void clearCurrentLayout();


protected:
    void createWidgets();

private:
    ResponsiveLayout * compactLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
};


#endif //RESPONSIVEWINDOW_H
