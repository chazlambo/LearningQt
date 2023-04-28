#include <QCoreApplication>
#include <QDebug>
#include "agecalc.h"

void print(AgeCalc &calc) {
    qInfo() << calc.name() << "Human Years:" << calc.humanYears();
    qInfo() << calc.name() << "Dog Years:" << calc.dogYears();
    qInfo() << calc.name() << "Cat Years:" << calc.catYears();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AgeCalc bryan;
    AgeCalc charlie;

    bryan.setName("Bryan");
    charlie.setName("Charlie");

    bryan.setAge(46);
    charlie.setAge(23);

    print(bryan);
    print(charlie);

    return a.exec();
}
