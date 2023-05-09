#ifndef DRIVER_H
#define DRIVER_H

#include <QObject>
#include <QSerialPort>

class Driver : public QObject
{
    Q_OBJECT

private:
    QList<QSerialPortInfo> avail_ports;
    QSerialPort port;
    int portIndex;
    QString desiredPort = "ttyACM0";
    bool enabled;
    bool isInError = false;

public:
    explicit Driver();
    ~Driver() override;

    // Generic Functions
    bool enable();
    bool disable();

    // Data Functions
    void startSend();
    void stopSend();

private slots:
    void read_serial_port();
    void serial_port_error_handler();


signals:

};

#endif // DRIVER_H
