#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    qInfo() << "Please enter an age:";
    cin >> age;
    qInfo() << "You entered: " << age;

    return a.exec();
}
