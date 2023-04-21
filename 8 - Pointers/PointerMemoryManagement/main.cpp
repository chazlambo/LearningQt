/*
    What
    Pointer memory management

    Why
    Pointers are fast but we have to manage them
*/

#include <QCoreApplication>
#include <QDebug>

void display(QString *value) {
    qInfo() << "The pointer" << value;
    qInfo() << "The address" << &value;
    qInfo() << "The data" << *value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Charlie"; // Stack - C++ manages this
    QString *description = new QString("Hello pointer"); // Heap - We manage this (new keyword)

    // qInfo() << description; Shows the address

    display(description);

    delete description; // We made it, we have to delete it

    //display(description); // crashes

    return a.exec();
}
