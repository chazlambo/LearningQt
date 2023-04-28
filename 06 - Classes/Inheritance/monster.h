#ifndef MONSTER_H
#define MONSTER_H

#include <QObject>
#include "feline.h"
#include "canine.h"
#include <QDebug>

class monster : public QObject,Feline,Canine
{
    Q_OBJECT
public:
    explicit monster(QObject *parent = nullptr);

signals:

};

#endif // MONSTER_H
