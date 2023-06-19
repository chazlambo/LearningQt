/*
    What
    QObject

    Why
    Base class for everything Qt (non-template)
    We have talked abotu this a LOT

    How
    See below
    Review Signals, Slots, MOC, macros
*/

#include <QCoreApplication>
#include <QDebug>
#include "dog.h"
#include "cat.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Dog dog;
    dog.setObjectName("Brady");

    Cat cat;
    cat.setObjectName("Finn");

    // dog.chase(); // Zero for sender, nothing was emitted

    QObject::connect(&dog, &Dog::bark, &cat, &Cat::spooked);
    QObject::connect(&cat, &Cat::run, &dog, &Dog::chase);

    // Everything is wired up but how do we fire off the initial signal?

    emit dog.bark();    // Emit is a special word used for QObject but it doesn't need to be in QObject

    return a.exec();
}
