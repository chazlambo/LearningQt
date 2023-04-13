#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() << "Please enter your age:";
    cin >> age;

    if (age >= 1 && age <= 120) {
        // True
        int dog_years = age * 7;
        qInfo() << "Your age in dog years:" << dog_years;
    }
    else {
        // False
        qWarning() << "Warning: Not a valid age!";
    }

    return a.exec();
}
