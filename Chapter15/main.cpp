#include <iostream>

class Calc {
private:
    int m_value{};

public:
    // constructor
    explicit Calc(int num) {
        m_value = num;
        std::cout << "Calc ( " << num << " ) constructed\n";
    }

    // destructor (executes when object is destroyed)
    ~Calc() {
        std::cout << "Destructing Calc ( " << m_value << " )\n";
    }

    // returning address of the object explicitly
    Calc &add(int value) {
        m_value += value;
        return *this;
    }
    Calc &sub(int value) {
        m_value -= value;
        return *this;
    }
    Calc &mult(int value) {
        m_value *= value;
        return *this;
    }

    int getValue() const { return m_value; }
};

template<typename T>
class Pair {
private:
    T m_first{};
    T m_second{};
    static inline int pairCount = 0;

public:
    Pair(const T first, const T second)
        : m_first{first}, m_second{second} {
        pairCount += 1;
    }

    int getCount() { return pairCount; }

    bool isEqual() { return m_first == m_second; }
};

int main() {
    Calc calc{31};
    calc.add(5).sub(3).mult(2);// method chaining (allowed by *this)

    std::cout << calc.getValue() << '\n';

    Pair<double> nums = {1, 2};
    std::cout << nums.isEqual() << '\n';

    std::cout << nums.getCount() << '\n';
    Pair<double> nums2 = {1, 2};// if we made int Pairs, the count would be different for those
    std::cout << nums.getCount() << '\n';

    return 0;
}
