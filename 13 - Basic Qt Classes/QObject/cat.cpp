#include "cat.h"

Cat::Cat(QObject *parent)
    : QObject{parent}
{

}

void Cat::spooked()
{
    qInfo() << "SPOOKED YA, RUNNING FOR MY LIFE";
    emit run();
}
