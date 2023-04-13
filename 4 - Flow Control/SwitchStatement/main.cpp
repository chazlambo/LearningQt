#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() << "Please enter your age:";
    cin >> age;

    switch(age) {
    case 0: // If age == 0
        qFatal("You did not enter a valid age");
        break;

    case 16:
        qInfo() << "You can drive";
        break;

    case 18:
        qInfo() << "You can vote";
        // break;
        // Can now fall through to the lines below!

    case 21:
        qInfo() << "You can drink!";
        break;

    case 67:
        qInfo() << "You can retire!";
        break;

    default: // else
        qInfo() << "The default here";
        break;
    }

    qInfo() << "Finished";

    return a.exec();
}
