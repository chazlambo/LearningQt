#include <QCoreApplication>
#include <iostream>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int start = 80;
    int max = 100;

    // While loop   - Evaluate first
    int i = start;
    // i = 1000;
    while(i < max) {
        qInfo() << "While = " << i;
        i++;
    }

    qInfo("----------------------");

    // Do loop  - Evaluate last
    i = start;
    // i = 1000;
    do {
        qInfo() << "While = " << i;
        i++;
    } while(i < max);

    return a.exec();
}
