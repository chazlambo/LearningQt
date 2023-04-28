#ifndef CONSUMER_H
#define CONSUMER_H

#include <QObject>
#include <QDebug>

class Consumer : public QObject
{
    Q_OBJECT
public:
    explicit Consumer(QObject *parent = nullptr);

signals:

public slots:
    void testing();

};

#endif // CONSUMER_H
