#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <QObject>
#include <QDebug>
#include "freezer.h"
#include "microwave.h"
#include "toaster.h"

class Appliance : public QObject, public Freezer, public Toaster, public Microwave
{
    Q_OBJECT
public:
    explicit Appliance(QObject *parent = nullptr);

    // Right click header -> Refactor -> add virtual functions -> insert definitions
    // Microwave interface
    bool cook();

    // Toaster interface
    bool grill();

    // Freezer interface
    bool freeze();

signals:


};

#endif // APPLIANCE_H
