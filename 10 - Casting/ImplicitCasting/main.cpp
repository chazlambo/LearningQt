/*
    What
    Implicit conversion

    Why
    C++ will try to guess what we are doing
    Usually it does this poorly
*/

#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double value = 5.75;
    qInfo() << "Double:" << value;

    int age = value; // implicitly casting a double into an integer
    qInfo() << "Int:" << age;

    return a.exec();
}
