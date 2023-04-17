#include <QCoreApplication>
#include "laptop.h"

void test(Laptop &machine){ // Pass by reference
    machine.test();
}

void makeLaptops() {
    // Create objects on the stack
    Laptop mine(nullptr, "My Laptop");
    Laptop yours(nullptr, "Your Laptop");

    // Set public variables in object
    mine.weight = 3;
    yours.weight = 5;

    // Run test function
    test(mine);
    test(yours);

    // Will be deleted from the stack because it's in a scope
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    makeLaptops();

    return a.exec();
}
