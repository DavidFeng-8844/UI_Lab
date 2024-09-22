// Implementation file for Find dialog
// (NDE, 2014-10-27)

#include <QtWidgets>
#include "finddialog.h"


FindDialog::FindDialog(QWidget* parent): QDialog(parent)
{
  createWidgets();
  arrangeWidgets();
  makeConnections();

  setWindowTitle("Find");
  setFixedHeight(sizeHint().height());
}


void FindDialog::createWidgets()
{
    lineEdit = new QLineEdit();
    label = new QLabel("Find &what");
    label->setBuddy(lineEdit);
    caseBox = new QCheckBox("Match &case");
    backwardBox = new QCheckBox("Search &backward");
    findButton = new QPushButton("&find");
    findButton->setDefault(true);
    findButton->setEnabled(false);
    closeButton = new QPushButton("Close");
}


void FindDialog::arrangeWidgets()
{
    QHBoxLayout* topLeft = new QHBoxLayout();
    topLeft->addWidget(label);
    topLeft->addWidget(lineEdit);
    QVBoxLayout* left = new QVBoxLayout();
    left->addLayout(topLeft);
    left->addWidget(caseBox);
    left->addWidget(backwardBox);
    QVBoxLayout* right = new QVBoxLayout();
    right->addWidget(findButton);
    right->addWidget(closeButton);
    right->addStretch(10);
    QHBoxLayout* layout = new QHBoxLayout();
    layout->addLayout(left);
    layout->addLayout(right);
    setLayout(layout);
}


void FindDialog::makeConnections()
{
    connect(lineEdit, SIGNAL(textChanged(const QString&)), this, SLOT(enableFindButton(const QString&)));
    connect(findButton, SIGNAL(clicked()), this, SLOT(findClicked()));
    connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));
}


void FindDialog::findClicked()
{
    QString text = lineEdit->text();
    Qt::CaseSensitivity cs;
    if (caseBox->isChecked()) {
        cs = Qt::CaseSensitive;
    }
    else {
        cs = Qt::CaseInsensitive;
    }
    if (backwardBox->isChecked()) {
        emit findPrevious(text, cs);
    }
    else {
        emit findNext(text, cs);
    }
}


void FindDialog::enableFindButton(const QString& text)
{
    findButton->setEnabled(not text.isEmpty());
}
