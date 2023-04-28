/*
    What
    Static cast

    Why
    The static_cast operator performs a nonpolymorphic cast.
    For example, it can be used to cast a base class pointer into a derived class pointer.
*/

#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"

void testDrive(Car* obj) {
    obj->drive();
    obj->stop();
}

void race (RaceCar* obj) {
    obj->drive();
    obj->stop();
    obj->gofast();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Car* car = new Car(&a);
    qInfo() << car;
    // race(car); // Implicit won't work
    // race((RaceCar)car); // Explicit won't work
    // race((RaceCar*)car); // Would work but we have no way of seeing if it converted correctly

    RaceCar* racer = static_cast<RaceCar*>(car); // Static Cast
    qInfo() << racer;   // Note same spot in memory, still stored as a car but we can use as a racecar!
    if (racer) race(racer);

//    Feline* catcar = static_cast<Feline*>(car);
//    qInfo() << catcar;
//    if(catcar) race(catcar)

    return a.exec();
}
