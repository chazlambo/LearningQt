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

    if(age > 17) {
        qInfo() << "You are over 17 years old";
    }
    else if(age < 12) {
        qInfo() << "You aren't even a teen yet!";
    }
    else {
        qInfo() << "You are not over 17 years old";
    }

    return a.exec();
}
