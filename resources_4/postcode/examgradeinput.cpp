#include "examgradeinput.h"

ExamGradeInput::ExamGradeInput() {
    this->setMinimum(0);
    this->setMaximum(100);
    connect(this, SIGNAL(valueChanged(int)), this, SLOT(ifFailed(int)));
}

int ExamGradeInput::getGrade()
{
    QString grade = text();
    bool ok;
    return grade.toInt(&ok, 10);
}

void ExamGradeInput::ifFailed(int grade)
{
    if (grade < 40) {
        setStyleSheet("background-color: red");
    }
}
