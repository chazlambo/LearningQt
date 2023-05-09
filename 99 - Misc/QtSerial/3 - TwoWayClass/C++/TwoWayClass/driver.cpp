#include "driver.h"

#include <QDebug>
#include <QList>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QByteArray>
#include <cstdio>


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

    // Connect error handler
    connect(&port, &QSerialPort::errorOccurred, this, &Driver::serial_port_error_handler);

    // Set port settings
    port.setPort(avail_ports[portIndex]); // Initialize port
    port.setBaudRate(QSerialPort::Baud9600);
    port.setDataBits(QSerialPort::Data8);
    port.setFlowControl(QSerialPort::NoFlowControl);
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
    qInfo() << "ERROR: Port failed to open";
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
    QString message = "<START>";
    const QByteArray messageData= message.toUtf8();
    qint64 bytesWritten = port.write(messageData);

    if (bytesWritten == -1) {
        qInfo () << "Failed to send command";
    }
    else {
        qDebug() << "Sent" << bytesWritten << "bytes:" << message;
    }

}

void Driver::stopSend()
{
    qDebug() << "Sending Stop Commands";
    QString message = "<STOP>";
    const QByteArray messageData= message.toUtf8();
    qint64 bytesWritten = port.write(messageData);

    if (bytesWritten == -1) {
        qInfo () << "Failed to send command";
    }
    else {
        qDebug() << "Sent" << bytesWritten << "bytes:" << message;
    }
}

void Driver::read_serial_port()
{
    while(port.canReadLine()) {
            QByteArray responseData = port.readLine().trimmed();
            QString response = QString::fromUtf8(responseData);
            qInfo() << "Serial received: " << response;
    }
}

void Driver::serial_port_error_handler()
{
    QSerialPort::SerialPortError error = port.error();

    if (error == QSerialPort::NoError) {
            return; // No error, no need to do anything
    }
    if (error == QSerialPort::DeviceNotFoundError) {
            qWarning() << "Serial Port Error: Device Not Found Error!";
    }
    if (error == QSerialPort::PermissionError) {
            qWarning() << "Serial Port Error: Permission Error!";
    }
    if (error == QSerialPort::OpenError) {
            qWarning() << "Serial Port Error: Open Error!";
    }
    if (error == QSerialPort::NotOpenError) {
            qWarning() << "Serial Port Error: Not Open Error!";
    }
    if (error == QSerialPort::WriteError) {
            qWarning() << "Serial Port Error: Write Error!";
    }
    if (error == QSerialPort::ReadError) {
            qWarning() << "Serial Port Error: Read Error!";
    }
    if (error == QSerialPort::ResourceError) {
            qWarning() << "Serial Port Error: Resource Error!";
    }
    if (error == QSerialPort::UnsupportedOperationError) {
            qWarning() << "Serial Port Error: Unsupported Operation Error!";
    }
    if (error == QSerialPort::TimeoutError) {
            qWarning() << "Serial Port Error: Timeout Error!";
    }
    if (error == QSerialPort::UnknownError) {
            qWarning() << "Serial Port Error: Unknown Error!";
    }
}


