#include "consumer.h"
#include "producer.h"

Consumer::Consumer(QObject *parent)
    : QObject{parent}
{

}

void Consumer::testing()
{
    Producer* prod = qobject_cast<Producer*>(QObject::sender());
    if(!prod) return;
    qInfo() << "Sender:" << prod << prod->objectName();
}
