#include <QCoreApplication>
#include <QDebug>

void test(QString name) {   // Can copy QString, it's not a QObject
    qInfo() << name;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Charlie Lambert";
    qInfo() << name;
    qInfo() << name.mid(1,3);
    qInfo() << name.insert(0, "Mr. ");
    qInfo() << name.split(" ");

    int index = name.indexOf(".");
    if (index > -1) {
        qInfo() << name.remove(0,index+2).trimmed();
    }

    QString title = "Engineer";
    QString full = name + ", " + title;
    qInfo() << full;

    qInfo() << full.toUtf8();

    test(full);

    return a.exec();
}
