#include <iostream>
#include <typeinfo>

// type aliasing
using thingymajig = bool;

int main() {

    thingymajig one = true;

    // auto keyword
    auto num = 3;
    auto otherNum = 3.0;
    auto bin = true;

    std::cout << typeid(num).name() << '\n';
    std::cout << typeid(otherNum).name() << '\n';
    std::cout << typeid(bin).name() << '\n';

    return 0;
}
