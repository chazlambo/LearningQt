/*
    What
    Static scope in classes

    Why
    We want all classes to use the same variable
*/

#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

int Animal::count = 0;
QString Animal::name = "";

void test() {
    // Construction
    Animal cat;
    Animal dog;
    Animal fish;

    qInfo() << cat.count;
    cat.name = "kittymeow";
    dog.name = "doggyboy";

    qInfo() << "Cat:" << cat.name;

    // Deconstruction here!
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Animal frog;
    qInfo() << frog.count;

    test();
    qInfo() << Animal::count;

    return a.exec();
}
