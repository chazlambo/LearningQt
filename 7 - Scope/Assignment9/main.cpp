#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int addTen(int age) {
    return age + 10;
}

void dogYears(int value) {
    int age = value * 7;
    qInfo() << "Age in dog years:" << age;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;

    qInfo() << "What is your age in years?:";
    cin >> age;
    age = addTen(age);
    qInfo() << "Add Ten:" << age;
    dogYears(age);


    return a.exec();
}
