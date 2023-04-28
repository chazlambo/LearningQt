/*
    What
    Static functions in classes

    Why
    We want to put a function in a class, but we don't want to create a class
    WHAT MADNESS IS THIS???
*/

#include <QCoreApplication>
#include <QDebug>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Can call without an instance
    // Note that there's no constructor!
    Test::doOtherStuff();

    Test t;
    t.doStuff();
    t.doOtherStuff();

    return a.exec();
}
