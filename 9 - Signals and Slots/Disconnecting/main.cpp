#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <iostream>

#include "radio.h"
#include "station.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Radio boombox;
    Station* channels[3];
    bool bOn = false;

    // Create some stations
    channels[0] = new Station(&boombox, 94, "Rock and Roll"); // new means allocated on heap set parent to radio to delete when radio is deleted
    channels[1] = new Station(&boombox, 87, "Hip Hop");
    channels[2] = new Station(&boombox, 104, "Boring News");

    // Need to now connect the radio quit to the application quit
    boombox.connect(&boombox, &Radio::quit, &a, &QCoreApplication::quit, Qt::QueuedConnection); // Can't use auto connection due to threading, add Queued connection

//    // Iterate through each station and connect it
//    for(int i = 0; i < 3; i++) {
//        Station* channel = channels[i];
//        boombox.connect(channel, &Station::send, &boombox, &Radio::listen);
//    }

    // Main loop
    do
    {
        qInfo() << "Enter on, off, test, or quit:";
        QTextStream qtin(stdin);    // Automatically converts cin to QString
        QString line = qtin.readLine().trimmed().toUpper(); // reads line, trims whitespace, converts to uppercase

        if ((line == "ON") && (bOn == false)) {
            qInfo() << "Turning the radio on.";

            // Iterate through each station and connect it
            for(int i = 0; i < 3; i++) {
                Station* channel = channels[i];
                boombox.connect(channel, &Station::send, &boombox, &Radio::listen);
            }
            qInfo() << "Radio is on";
            bOn = true;
        }
        else if ((line == "ON") && (bOn == true)) {
            qInfo() << "Radio is already on dipshit";
        }

        if (line == "OFF") {
            qInfo() << "Turning the radio off.";

            // Iterate through each station and disconnect it
            // Don't need to do this if you're just closing the application,
            for(int i = 0; i < 3; i++) {
                Station* channel = channels[i];
                boombox.disconnect(channel, &Station::send, &boombox, &Radio::listen);
            }
            qInfo() << "Radio is off";
            bOn = false;
        }

        if (line == "TEST") {
            qInfo() << "Testing";

            // Iterate through each station and broadcast a message
            for(int i = 0; i < 3; i++) {
                Station* channel = channels[i];
                channel->broadcast("Broadcasting live!");
            }
            qInfo() << "Test complete";
        }

        if (line == "QUIT") {
            qInfo() << "Quitting";
            emit boombox.quit();    // Will quit the entire application
            break;
        }



    } while(true);

    return a.exec();
}
