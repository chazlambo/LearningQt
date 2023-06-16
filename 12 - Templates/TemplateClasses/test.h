#ifndef TEST_H
#define TEST_H

// #include <QObject>
//template<class T> // Template classes not supported by QObject
// Fix by making the class a normal C++ class and not a QObject

template<class T>
class Test
{
public:
    T add(T value1, T value2){return value1 + value2;}
};

#endif // TEST_H
