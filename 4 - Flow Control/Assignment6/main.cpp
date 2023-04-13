#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max = 5;
    int maxAsk = 50;
    QString task = "Please take out the trash.";

    for (int i = 1; i < maxAsk; i++) {
        qInfo() << "Wife:" << task;
        qWarning() << "Wife: I have asked" << i << "times.";

        if( i >= max) {
            qInfo() << "Husband: Ok ok ok, I'm going...";
            break;
        }
    }

    return a.exec();
}
