/*
    What
    Automatic Memory Management

    Why
    We want C++ to do it for us
    More advanced and we cover this in other courses
*/

#include <QCoreApplication>
#include <QDebug>
#include "test.h"

void wow() {
    // Automatic memory management
    std::unique_ptr<Test> t(new Test());    // Created this in memory
    t->doStuff();

    // Don't have a delete command
    // Pointer automatically deleted for us!
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Starting";
    wow();
    qInfo() << "Finished";

    return a.exec();
}
