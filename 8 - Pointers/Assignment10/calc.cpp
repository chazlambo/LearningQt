#include "calc.h"

Calc::Calc(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "Constructed";
}

Calc::~Calc()
{
    qInfo() << this << "Deconstructed";
}

int Calc::dogYears(int age)
{
    return age*7;
}

int Calc::catYears(int age)
{
    return age*9;
}
