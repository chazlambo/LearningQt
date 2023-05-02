#include <QCoreApplication>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Find the first available serial port
    QString portName;
    foreach (const QSerialPortInfo &portInfo, QSerialPortInfo::availablePorts()) {
        portName = portInfo.portName();
        break;
    }

    // Open the serial port and configure it for reading
    QSerialPort serialPort(portName);
    serialPort.setBaudRate(QSerialPort::Baud9600);
    serialPort.setDataBits(QSerialPort::Data8);
    serialPort.setParity(QSerialPort::NoParity);
    serialPort.setStopBits(QSerialPort::OneStop);
    serialPort.setFlowControl(QSerialPort::NoFlowControl);
    if (!serialPort.open(QIODevice::ReadOnly)) {
        qDebug() << "Failed to open serial port" << portName;
        return 1;
    }

    while(true) {
        // Read a line of text from the serial port and print it to the console
        while (serialPort.isOpen()) {  // Loop as long as the serial port is open
            if (serialPort.waitForReadyRead(1000)) {  // Wait up to 1 second for data to be available
                QByteArray data = serialPort.readLine();  // Read a line of text from the serial port
                qDebug() << "Received line:" << data;  // Print the received line to the console
            }
        }
    }

    return 0;
}
