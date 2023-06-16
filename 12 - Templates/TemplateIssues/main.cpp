/*
    What
    Template Issues

    Why
    Lets look at how templates can fail
*/

#include <QCoreApplication>
#include <QDebug>

template<class T, class F>
T add(T valueT, F valueF) {
    return valueT+valueF;    // Not doing any casting or checking data types but it compiles
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << add<double, int>(1.9,5);
    qInfo() << add<int,double>(5,1.9);  // Implicit casting truncates decimal
    qInfo() << add(55,true);    // Psychotic but it builds
    qInfo() << add(true,55);    //It's not zero so the bool is true!
    // qInfo() << add(55, "Charlie"); // Finally it won't build
    qInfo() << add("Charlie",55);   //  It fucking builds, wtf

    // Templates can be extremely powerful but can be crazy as well.
    // Always declare data types and make sure you understand what you're doing

    return a.exec();
}
