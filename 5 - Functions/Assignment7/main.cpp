#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

double getSize() {
    double size = 0;
    qInfo() << "Enter measurement in feet:";
    cin >> size;
    return size;
}

double calc_paint(int w, int h) {
    double sqft = w * h;
    double paint = sqft / 325;  // Google says 325 feet per gallon
    return paint;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double height = 0;
    double paint = 0;

    qInfo() << "Enter ceiling height in feet:";
    height = getSize();
    if (height <= 0) qFatal("Invalid height entered.");

    do {
        qInfo() << "Add a wall by entering a number or 0 to stop:";
        int length = getSize();
        if (length < 0) qFatal("Invalid wall height entered");
        if (length == 0) break;
        paint += calc_paint(length, height);
    } while(true);


    qInfo() << "Total gallons needed:" << paint;

    return a.exec();
}
