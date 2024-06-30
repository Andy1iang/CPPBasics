#include <cassert>
#include <iostream>

int main() {
    // displaying errors
    std::cerr << "Oopsies" << '\n';

    // error checking
    double x;
    std::cout << "Enter an integer" << '\n';
    std::cin >> x;

    assert((static_cast<int>(x) == x) && "Not an Integer");

    return 0;
}
