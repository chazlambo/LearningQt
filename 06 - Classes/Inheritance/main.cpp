#include <QCoreApplication>
#include "canine.h"
#include "feline.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Canine dog;

    // Inheritance chain at work
    dog.bark();
    qInfo() << dog.hasBackBone();
    qInfo() << dog.isAlive();
    dog.setObjectName("Doggy");

    Feline cat;
    cat.meow();
    qInfo() << cat.hasBackBone();
    qInfo() << cat.isAlive();
    cat.setObjectName("Kitty");

    return a.exec();
}
