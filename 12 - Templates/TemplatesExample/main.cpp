/*
    What
    Template example

    Why
    Templates are independent of any particular type. A template is a blueprint or
    formula for creating a template class or a function
*/

#include <QCoreApplication>
#include <QDebug>

template<typename T>
void print(T value) {
    qInfo() << value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    print<int>(1);
    print<double>(126.8);
    print<QString>(QString("Hello"));

    return a.exec();
}
