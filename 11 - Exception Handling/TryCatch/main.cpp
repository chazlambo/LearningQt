/*
    What
    Catching Exceptions

    Why
    We want to deal with bad things when they happen

    How
    Use Try / Catch
*/

#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

bool doDiv(int max) {


    try {
        // Throw - ???
        int value;
        qInfo() << "Enter a number: ";
        cin >> value;

        if(value == 0) throw QString("Can not divide by zero");
        if(value > 5) throw 99;
        if(value == 1) throw std::runtime_error("Should be greater than 1");

        int result = max / value;
        qInfo() << "Result = " << result;

    }

    catch (QString e) {
        qWarning() << "We caught a QString" << e;
        return false;

    }

    catch (int e) {
        qWarning() << "We caught an int" << e;
        return false;

    }

    catch (std::exception const& e) {
        qWarning() << "We caught a STD exception:" << e.what(); // Use what to print out characters
        return false;
    }

    catch (...) {
        // Catch all - bad bad bad does not always catch all
        qWarning() << "We know something went wrong but we don't know what.";
        return false;

    }

    // Finally - here


    return true;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max = 44;

    do {
        // Loop
    } while (doDiv(max));

    qInfo() << "Finished";

    return a.exec();
}
