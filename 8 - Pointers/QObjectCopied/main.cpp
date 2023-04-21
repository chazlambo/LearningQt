/*
    What
    QObject can not be copied!

    Why
    Actually the memory address defines the object - Signals and slots
    It's common for a function to return a pointer!
*/

#include <QCoreApplication>
#include <QDebug>

void test(QObject object){ // Copy
    qInfo() << &object << Q_FUNC_INFO;
}

void testPtr(QObject *object) { // Pointer
    qInfo() << object << Q_FUNC_INFO;
}

//QObject getObject() {
//    QObject o;
//    return o;   // Return a copy
//}

QObject* getObject() {
    QObject *o = new QObject(); // Warning, creating in the heap
    return o;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QObject* p = getObject();
    testPtr(p);

    delete p;   // Simplest option to remove from heap

    return a.exec();
}
