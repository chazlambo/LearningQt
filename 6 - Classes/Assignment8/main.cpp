#include <QCoreApplication>
#include "cat.h"

void do_fail(Cat cat) {
    cat.meow();
}

void do_ptr(Cat *cat) {
    cat->meow();
}

void do_ref(Cat &cat) {
    cat.meow();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cat kitty;
    //do_fail(kitty);

    do_ptr(&kitty);

    do_ref(kitty);

    return a.exec();
}
