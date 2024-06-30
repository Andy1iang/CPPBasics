#include "calculator.h"
#include <iostream>

void calculator()
{
    double a,b;
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "Enter another number: ";
    std::cin >> b;

    std::cout << "Your entered: " << a << " and " << b << "\n";

    std::cout << a << " + " << b << " = " << a+b << "\n";
    std::cout << a << " - " << b << " = " << a-b << "\n";
    std::cout << a << " * " << b << " = " << a*b << "\n";
}
