//
// Created by twak on 07/10/2019.
//

#include "responsive_layout.h"
#include "responsive_label.h"
#include <iostream>

//using namespace std;

// you should probably make extensive changes to this function
void ResponsiveLayout::setGeometry(const QRect &r /* our layout should always fit inside r */ ) {

    QLayout::setGeometry(r);

    // for all the Widgets added in ResponsiveWindow.cpp
    for (int i = 0; i < list_.size(); i++) {

        QLayoutItem *o = list_.at(i);

        try {
            // cast the widget to one of our responsive labels
            ResponsiveLabel *label = static_cast<ResponsiveLabel *>(o->widget());

            if (label == NULL) // null: cast failed on pointer
                std::cout << "warning, unknown widget class in layout" << std::endl;
            else if (label -> text() == kNavTabs ) // headers go at the top
                label -> setGeometry(0+r.x()+0.01*r.width(),0+r.y(),r.width()-0.02*r.width(), r.height()*0.1);

            // Home, Menu, shopping basket and sign in on second row
            else if (label -> text() == kHomeLink)
                label -> setGeometry(r.x() + 0.01*r.width(), r.height()*0.102+r.y(), r.width() * 0.245, r.height()*0.1);
            else if (label -> text() == KMenu)
                label -> setGeometry(r.x() + 0.26*r.width(), r.height()*0.102+r.y(), r.width() * 0.245, r.height()*0.1);
            else if (label -> text() == kShoppingBasket)
                label -> setGeometry(r.x() + 0.51*r.width(), r.height()*0.102+r.y(), r.width() * 0.245, r.height()*0.1);
            else if (label -> text() == kSignIn)
                label -> setGeometry(r.x() + 0.76*r.width(), r.height()*0.102+r.y(), r.width() * 0.23, r.height()*0.1);

            // Search Text and Button in second row
            else if (label->text() == kSearchText) {
                // Put search text to the left of the search button
                label -> setGeometry(r.x() + 0.01*r.width(), r.height()*0.205+r.y(), r.width() * 0.775, r.height()*0.1);
            }
            else if (label -> text() == kSearchButton)
                label -> setGeometry((r.width() + r.x()) - r.width() * 0.21, r.height()*0.205+r.y(), r.width() * 0.20, r.height()*0.1);

            // kSResultImage and KSResultText fill the middle part
            else if (label -> text() == kSResultImage) {
                // Put search result image to the left of the search result text
                label -> setGeometry(r.x() + 0.01*r.width(), r.height()*0.31+r.y(), r.width() * 0.673, r.height()*0.49);
            }
            else if (label -> text() == KSResultText)
                label -> setGeometry(r.x() + 0.687*r.width(), r.height()*0.31+r.y(), r.width() * 0.3, r.height()*0.49);

            // Search Option, previous and next on the next row together, option in the middle
            else if (label -> text() == kSearchBackward)
                label -> setGeometry(r.x() + 0.01*r.width(), r.height()*0.8+r.y(), r.width() * 0.245, r.height()*0.1);
            else if (label -> text() == kSearchOptions)
                label -> setGeometry(r.x() + 0.26*r.width(), r.height()*0.8+r.y(), r.width() * 0.480, r.height()*0.1);
            else if (label -> text() == kSearchForward)
                label -> setGeometry(r.x() + 0.745*r.width(), r.height()*0.8+r.y(), r.width() * 0.245, r.height()*0.1);
            // KAdvert at the bottom 10%
            else if (label -> text() == kAdvert)
                label -> setGeometry(r.x() + 0.01*r.width(), r.height()*0.9+r.y(), r.width()-0.02*r.width(), r.height()*0.1);
            else // otherwise: disappear label by moving out of bounds
                label -> setGeometry (-1,-1,0,0);

        }
        catch (std::bad_cast) {
            // bad_case: cast failed on reference...
            std::cout << "warning, unknown widget class in layout" << std::endl;
        }
    }
}

// following methods provide a trivial list-based implementation of the QLayout class
int ResponsiveLayout::count() const {
    return list_.size();
}

QLayoutItem *ResponsiveLayout::itemAt(int idx) const {
    return list_.value(idx);
}

QLayoutItem *ResponsiveLayout::takeAt(int idx) {
    return idx >= 0 && idx < list_.size() ? list_.takeAt(idx) : 0;
}

void ResponsiveLayout::addItem(QLayoutItem *item) {
    list_.append(item);
}

QSize ResponsiveLayout::sizeHint() const {
    return minimumSize();
}

QSize ResponsiveLayout::minimumSize() const {
    return QSize(320,320);
}

ResponsiveLayout::~ResponsiveLayout() {
    // QLayoutItem *item;
    // while ((item = takeAt(0)))
    //     delete item;
    // Additionally, clear the QList to avoid any leftover pointers
    // qDeleteAll(list_); // Deletes all items that haven't been taken
    // list_.clear(); // Clears the list to avoid dangling pointers
    QLayoutItem *item;
    while ((item = takeAt(0))) {
        if (item->widget()) {
            item->widget()->setParent(nullptr); // Remove widget from its parent
        }
        delete item; // Delete the layout item
    }
    list_.clear(); // Clear the list to avoid dangling pointers
}

void ResponsiveLayout::clear()
{
    QLayoutItem *item;
    while ((item = takeAt(0))) {
        if (item->widget()) {
            item->widget()->setParent(nullptr); // Remove widget from its parent
        }
        delete item; // Delete the layout item
    }
    list_.clear(); // Clear the list to avoid dangling pointers
}


void ResponsiveLayout::addWidget(QWidget *widget) {
    QLayoutItem *item = new QWidgetItem(widget);  // Wrap widget in a QLayoutItem
    addItem(item);  // Call your custom addItem() to store the item
}
