#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>

#include "driver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Driver arduino;
    bool runLoop = true;

    while(runLoop) {
        qInfo() << "Enter enable, disable, start, or stop:";
        QTextStream qtin(stdin);    // Automatically converts cin to QString
        QString line = qtin.readLine().trimmed().toUpper(); // reads line, trims whitespace, converts to uppercase
        if (line == "ENABLE") {
            arduino.enable();
        }
        else if (line == "DISABLE") {
            arduino.disable();
        }
        else if (line == "START") {
            arduino.startSend();
        }
        else if (line == "STOP") {
            arduino.stopSend();
        }
        else {
            qInfo() << "Please enter a valid response.";
        }

    }

    return a.exec();
}
