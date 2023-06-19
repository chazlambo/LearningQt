
/*
    What
    QVariant

    Why
    Variant and unknown types - basic part of the meta system
*/

#include <QCoreApplication>
#include <QDebug>
#include <QVariant>

void test(QVariant value) { // Making a copy, not a QObject
    qInfo() << value;

    int i = 0;
    bool ok = false;

    i = value.toInt(&ok);

    if(ok) {
        qInfo() << "INT" << i;
    }
    else {
        qInfo() << "Not an Int!";
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVariant value = 1;
    QVariant value2 = "Hello World";

    test(value);
    test(value2);

    return a.exec();
}
