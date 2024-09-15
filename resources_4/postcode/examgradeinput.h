#ifndef EXAMGRADEINPUT_H
#define EXAMGRADEINPUT_H
#include <QtWidgets>
#include <QString>
#include <QByteArray>

class ExamGradeInput: public QSpinBox
{
Q_OBJECT
public:
    ExamGradeInput();
    int getGrade();
private slots:
    void ifFailed(int grade);
};

#endif // EXAMGRADEINPUT_H
