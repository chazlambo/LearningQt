#include <QByteArray>
#include <QCoreApplication>
#include <QDebug>
#include <QList>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <fstream>
#include <iostream>

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  QList<QSerialPortInfo> avail_ports;
  int portIndex;

  // Get a list of available ports
  avail_ports = QSerialPortInfo::availablePorts();

  // Find the index for the desired port
  qInfo() << "Available ports:";
  for (int i = 0; i < avail_ports.length(); i++) {
    qInfo() << avail_ports[i].portName();
    if (avail_ports[i].portName() == "ttyS0") {
      qInfo() << "ttyS0 has been found!";
      portIndex = i;
    }
  }

  // Set port settings
  QSerialPort port;
  port.setPort(avail_ports[portIndex]); // Initialize port
  port.setBaudRate(QSerialPort::Baud9600);
  port.setDataBits(QSerialPort::Data8);
  port.setParity(QSerialPort::NoParity);
  port.setStopBits(QSerialPort::OneStop);

  // Open port
  if (port.open(QIODevice::ReadWrite)) {
    qInfo() << "Port Opened";
  }
  // Send start signal
  QString message = "hi";

  // Convert the message to a QByteArray and send it to the serial port
  QByteArray byteArray = message.toLocal8Bit();
  qint64 bytesWritten = port.write(byteArray);

  // Wait for full message to be sent
  // Note: 500 is arrbitrarily picked timeout time
  if (port.waitForBytesWritten(500)) {
    qInfo() << "Sent!";
  } else {
    qInfo() << "Timed out";
  }

  // Check to make sure bytes were actually written
  if (bytesWritten == -1) {
    qInfo() << "Failed to write message to serial port";
    return -1;
  } else {
    qInfo() << "Wrote" << bytesWritten << "bytes to serial port.";
    qInfo() << "Check for LED!";
  }

  port.write("fuck");
  port.close();

  return a.exec();
}
