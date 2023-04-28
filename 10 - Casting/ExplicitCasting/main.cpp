/*
    What
    Explicit casting

    Why
    We tell C++ what to do
*/

#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double value = 5.75;
    qInfo() << "Double:" << value;

    int age = value; // Implicit conversion should not be trusted
    qInfo() << "Int:" << age;

    age = (int)value;   // Does the same thing but we trust it because we told it what to do
    qInfo() << "Int:" << age;   // Explicit conversion can be trusted

    return a.exec();
}
