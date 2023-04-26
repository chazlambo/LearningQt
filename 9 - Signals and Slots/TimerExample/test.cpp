#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    count = 1;

    connect(&m_timer, &QTimer::timeout, this, &Test::timeout);
    m_timer.setInterval(1000);  // does this once every 1000 ms (1 sec)
    m_timer.start();
    // m_timer.stop();
}

void Test::timeout()
{
    qInfo() << "Test: " << count;
    count++;
    if(count > 5) {
        m_timer.stop();
        qInfo() << "Done!";
    }
}
