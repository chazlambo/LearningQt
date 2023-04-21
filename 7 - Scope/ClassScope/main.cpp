#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Charlie";
    qInfo() << "My name is at: " << &name << " = " << name;

    Animal dragon(&a, "Finley");
    Animal lamb(&a, "Franley");
    Animal frog(&a, "Franklin");
    Animal person(&a, name);

    person.sayHello("Hola");
    qInfo() << person.name;

    lamb.name = "My Lamb";
    frog.name = "My Frog";

    qInfo() << lamb.name;
    qInfo() << frog.name;

    return a.exec();
}
