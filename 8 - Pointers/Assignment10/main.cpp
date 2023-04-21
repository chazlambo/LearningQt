/*
    What
    Working with pointers

    Why
    Qt / C++ uses a LOT of pointers
*/

#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "calc.h"

Calc* getCalc() {
    Calc *c = new Calc(); // Creating this on the heap
    return c;
}

int dogYears(int age, Calc *calc) {
    return calc->dogYears(age);
}

int catYears(int age, Calc *calc) {
    return calc->catYears(age);
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Calc *p = getCalc();

    int age;
    qInfo() << "Enter your age in years:";
    std::cin >> age;
    qInfo() << "Dog Years:" << dogYears(age, p);
    qInfo() << "Cat Years:" << catYears(age, p);

    delete p;

    return a.exec();
}
