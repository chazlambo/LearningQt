#include <QCoreApplication> // Note arrows, based off operating system path
#include "animal.h"         // Note quotes, based off current directory structure

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Animal cat;
    Animal dog;
    Animal fish;

    // Built in function to keep track of QObjects
    cat.setObjectName("kitty");
    dog.setObjectName("doggy");
    fish.setObjectName("fishy");

    // Class function written by user
    cat.speak("meow");
    dog.speak("woof");
    fish.speak("...");

    return a.exec();
}
