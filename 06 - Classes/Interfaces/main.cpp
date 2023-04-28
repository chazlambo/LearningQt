#include <QCoreApplication>
#include <QDebug>
#include "appliance.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Appliance machine;

    qInfo() << "Cook:" << machine.cook();
    qInfo() << "Freeze:" << machine.freeze();
    qInfo() << "Grill:" << machine.grill();

    return a.exec();
}
