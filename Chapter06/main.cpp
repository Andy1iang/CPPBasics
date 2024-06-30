#include <cmath>
#include <iostream>

int main() {
    int a = -7, b = 3;

    // wrong remainder with negative numbers
    std::cout << a % b << '\n';

    // use this formula for correct remainder
    std::cout << ((a % b) + b) % b << '\n';

    // exponentiation
    std::cout << std::pow(a, b) << '\n';

    // there's a difference between x++ and ++x
    int x = 0;
    std::cout << x++ << '\n';

    x = 0;
    std::cout << ++x << '\n';

    // decimals can cause problems
    std::cout << (0.3 == 0.1 + 0.2) << '\n';

    // in this case, set a absEpsilon (error tolerance value)

    // Short circuit evaluation ;)
    // && won't analyze second statement if first is false, vice versa or ||

    // ^ is the XOR operator (only one true), but this is the same as != for 2 bools

    return 0;
}
