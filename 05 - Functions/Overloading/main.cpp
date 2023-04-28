#include <QCoreApplication>
#include <QDebug>

void test() {
    qInfo() << "This is a test";
}

void test(QString name) {
    qInfo() << "Name:" << name;
}

void test(int age) {
    qInfo() << "Age:" << age;
}

void test(bool isActive) {
    qInfo() << "Testing for active";
    if(isActive) {
        qInfo() << "Yes it is active;";
    }
    else {
        qInfo() << "No this is not active";
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test();
    test(23);
    test("Charlie Lambert");    // Wait this doesn't get printed? Goes to test active???
                                // Input parameter is actually a character array, not a QString DANGEROUS!
    // test(57.09)              // Call to 'test' is ambiguous, need to cast to int
    test(QString("Charlie Lambert"));
    test(false);

    return a.exec();
}
