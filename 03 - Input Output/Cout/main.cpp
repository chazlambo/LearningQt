#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // C++ way
    cout << "Hello" << endl;

    // Qt way
    qInfo() << "Hello";
    return a.exec();
}
