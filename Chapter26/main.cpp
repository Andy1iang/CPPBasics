#include "Array.h"
#include <iostream>

int main() {
    Array<double> test(100);
    test[50] = 1.618;
    std::cout << test[50] << '\n';

    return 0;
}
