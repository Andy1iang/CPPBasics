#ifndef ARRAY_H
#define ARRAY_H

#include <cassert>

template<typename T>
class Array {
private:
    int m_length{};
    T *m_data{};// any type "T"

public:
    Array(int length) {
        assert(length > 0);
        m_data = new T[length]{};
        m_length = length;
    }

    // templated operator[] function defined below
    T &operator[](int index);// now returns a T&

    int getLength() const { return m_length; }
};

// member functions defined outside the class need their own template declaration
template<typename T>
T &Array<T>::operator[](int index)// now returns a T&
{
    assert(index >= 0 && index < m_length);
    return m_data[index];
}

#endif