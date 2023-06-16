/*
    What
    Templates and classes

    Why
    We can make classes templated
*/

#include <QCoreApplication>
#include <QDebug>

#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Can use the class as long as you give it a type
    Test<int> intCalc;
    qInfo() << intCalc.add(5,6);

    Test<double> doubleCalc;
    qInfo() << doubleCalc.add(1.0,5.9);

    Test<QString> stringCalc;
    qInfo() << stringCalc.add(QString("Hello "),QString("World"));

    return a.exec();
}
