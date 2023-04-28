#include <QCoreApplication>
#include <QDebug>

void test() {
    qInfo() << "Hello from test";
}

void test2() {
    qInfo() << "Hello from test2";
    test();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test2();

    return a.exec();
}

// Won't work down here, needs to be above main
// C++ reads from top down
//void test() {
//    qInfo() << "Hello from test";
//}
