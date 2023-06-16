/*
    What
    Templates QObject

    Why
    QObjects can NOT be copied
    Use pointers instead
    Note Qt template classes are not QObjects (QList for example)
    We cover those in detail in the intermediate and advanced course
*/

#include <QCoreApplication>
#include <QDebug>

template<class T>
void display(T value) {
    qInfo() << value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    display<int>(4);
    display<double>(3.14);
    display<QString>(QString("Hello World"));

    QObject obj;
    //display<QObject>(obj);    // Cannot copy the object

    // Need to pass a pointer or an address to it
    display<QObject*>(&obj);

    return a.exec();
}
