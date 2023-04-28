/*
    What
    qobject_cast

    Why
    Casting is hard, we want to make it simple

    Remember:
    THe implicit cast is C++ doing it for us
    The explicit cast is us telling c++ what to do
    The static_cast operator performs a nopolymorphic cast
    The dynamic_cast operator ensures inheritence is good
    The reinterpret_cast operator types to convert it to a different type
    The qobject_cast works with QObjects and takes away a lot of the complexity
*/

#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"
#include "dog.h"

void testDrive(Car* obj) {
    obj->drive();
    obj->stop();
}

void race(RaceCar* obj) {
    obj->gofast();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Derived class to the base class
    RaceCar* mycar = new RaceCar(&a);
    Car* car = qobject_cast<Car*>(mycar);
    car->drive();

    // Base class to the derived class
    RaceCar* fastcar = qobject_cast<RaceCar*>(car);
    fastcar->gofast();

    // Will not work with non-QObjects
    // Dog* fido = qobject_cast<Dog*>(fastcar);


    return a.exec();
}
