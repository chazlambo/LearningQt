#include "animal.h"

Animal::Animal(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "Animal Constructed";
}

Animal::~Animal()
{
    qInfo() << this << "Animal Deconstructed";
}
