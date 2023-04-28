/*
    What
    Pointers vs copies

    Why
    Pointers are fast, and we get the actual object
*/

#include <QCoreApplication>
#include <QDebug>

void test(QString value) {  // Stack - CREATES COPY
    qInfo() << &value << "Size:" << value.length();
}   // Destroys copy

void testPtr(QString *value) {  // Stack - Pointing
    qInfo() << "Pointer to:" << value << "Size:" << value->length();
    qInfo() << "Address of:" << &value << "Size:" << value->length();
}   // Destroys pointer, not the object we're pointing to

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Charlie";   // Stack
    qInfo() << &name << "Size:" << name.length();

    test(name);
    testPtr(&name);

    return a.exec();
}
