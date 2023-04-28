#include <QCoreApplication>
#include "owner.h"
#include "dog.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Owner charlie;
    Dog brady;

    QObject::connect(&charlie, &Owner::treats, &brady, &Dog::treats); // Auto

    // Somewhere else in the code
    for(int i = 0; i < 10 ; i++) {
        QObject::connect(&charlie, &Owner::treats, &brady, &Dog::treats, Qt::UniqueConnection); // Unique
    }

    charlie.giveSnacks();

    return a.exec();
}
