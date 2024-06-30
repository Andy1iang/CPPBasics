#include <cmath>
#include <iostream>

int main() {
    // switch-cases
    int x;
    std::cout << "Input a number: ";
    std::cin >> x;

    switch (x) {
        case 1:
            std::cout << "One\n";
            break;
        case 2:
            std::cout << "Two\n";
            break;
        case 3:
            std::cout << "Three\n";
            break;
        default:
            std::cout << "Unknown\n";
            break;
    }

    // goto statements (not recommended)
    double y;
tryAgain:
    std::cout << "Enter a non-negative number: ";
    std::cin >> x;

    if (x < 0.0)
        goto tryAgain;// goto can also jump to other labels under it and skip next few lines

    std::cout << "The square root of " << x << " is " << std::sqrt(x) << '\n';

    // while loops
    int count = 0;
    while (count < 2) {
        std::cout << "Hola Muchachos\n";
        count++;
    }

    // do-while loops (will execute at least once)
    int selection;
    do {
        std::cout << "Please make a selection: \n";
        std::cout << "1) Continue\n";
        std::cout << "2) Stop\n";
        std::cin >> selection;
    } while (selection == 1);

    // for-loops
    for (int i = 1; i <= 2; i++)// uses !=, infinite loop
    {
        std::cout << i << '\n';
    }

    // for-loops can have multiple counters
    for (int a = 0, b = 1; a < 10; a++, b--) {
        ;// doing nada
    }

    // break: breaks the loop
    // continue: jump to bottom of loop

    return 0;
}
