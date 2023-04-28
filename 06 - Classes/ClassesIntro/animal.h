#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include <QDebug>

class Animal : public QObject
{
    Q_OBJECT    // private
public:
    explicit Animal(QObject *parent = nullptr);
    void speak(QString message);

signals:

};

#endif // ANIMAL_H
