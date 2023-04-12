#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // C++ standard out
    cout << "Standard out" << endl;

    // C++ standard er
    cerr << "Standard error" << endl;


    return a.exec();
}
