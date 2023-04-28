#include <QCoreApplication>
#include <QDebug>

#include "source.h"
#include "destination.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Source oSource;
    Destination oDestination;

    QObject::connect(&oSource, &Source::mySignal, &oDestination, &Destination::mySlot);

    // Event driven programming
    oSource.test();

    // Can use slot just as a function
    oDestination.mySlot("HI!")

    return a.exec();
}
