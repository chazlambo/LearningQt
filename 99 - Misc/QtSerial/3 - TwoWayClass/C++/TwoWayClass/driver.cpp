#include "driver.h"

#include <QDebug>
#include <QList>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QByteArray>


Driver::Driver()
{
    // Get a list of available ports
    avail_ports = QSerialPortInfo::availablePorts();

    qInfo() << "Searching available ports";
    for (int i=0; i < avail_ports.length(); i++) {
        if(avail_ports[i].portName() == desiredPort){
            portIndex = i;
            qInfo() << "Desired port found:" << desiredPort;
        }
    }

    // Connect read slot
    connect(&port, &QSerialPort::readyRead, this, &Driver::read_serial_port);

    // Set port settings
    port.setPort(avail_ports[portIndex]); // Initialize port
    port.setBaudRate(QSerialPort::Baud9600);
    port.setDataBits(QSerialPort::Data8);
    port.setParity(QSerialPort::NoParity);
    port.setStopBits(QSerialPort::OneStop);

    enabled = false;
}

Driver::~Driver()
{
    port.close();
    enabled = false;
}


bool Driver::enable()
{
    if(isInError) {
        return false;
    }

    // Open Port
    if(port.open(QIODevice::ReadWrite)){
        qInfo() << "Port opened";
        enabled = true;
        return true;
    }
    return false;
}

bool Driver::disable(){
    enabled = false;
    qInfo() << "Port closed";
    port.close();
    return(!port.isOpen());
}

void Driver::startSend()
{
    qInfo() << "Sending Start Command";
    char message [50];
    sprintf(message, "<START>");
    qint64 bytesWritten = port.write(message);

    if (bytesWritten == -1) {
        qInfo () << "Failed to send command";
    }
    else {
        qInfo() << "Sent: " << message;
    }

}

void Driver::stopSend()
{
    qInfo() << "Sending Stop Commands";
    char message [50];
    sprintf(message, "<STOP>");
    qint64 bytesWritten = port.write(message);

    if (bytesWritten == -1) {
        qInfo () << "Failed to send command";
    }
    else {
        qInfo() << "Sent: " << message;
    }
}

void Driver::read_serial_port()
{
    while(port.canReadLine()) {
            QByteArray responseData = port.readLine().trimmed();
            QString response = QString::fromUtf8(responseData);
            qInfo() << response;
        }
}
