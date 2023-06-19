#include "dog.h"

Dog::Dog(QObject *parent)
    : QObject{parent}
{

}

void Dog::chase()
{
    if(! sender()) return;  // Only run function when there's a sener (it can be called without)
    qInfo() << "Chasing" << sender();
}
