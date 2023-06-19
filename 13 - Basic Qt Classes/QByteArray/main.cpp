#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString greeting = "Hello World!";
    QByteArray buffer(greeting.toUtf8());
    buffer.append("!");
    qInfo() << buffer;

    qInfo() << buffer.rightJustified(20,'.');
    qInfo() << buffer.at(buffer.length() - 1);  // Index last thing (-1 because zero based)

    QString modified(buffer);
    qInfo() << modified;

    // Basic encoding and decoding
    qInfo() << buffer.toBase64();
    qInfo() << buffer.toHex();


    return a.exec();
}
