#include <iostream>

bool conditionals();
void typeConversions();

int main()
{
    int num = 55;
    long long bigNum = 300000000000;
    bool valid = true;
    double deci = 3.14;

    std::cout << sizeof(num) << '\n';

    // integer division and modulo

    std::cout << 8 / 5 << '\n';
    std::cout << 8.0 / 5 << '\n';

    std::cout << 8 % 5 << '\n';

    // character type (just one letter)
    char letter = 'a';

    bool result = conditionals();

    if (result){
        std::cout << "You got it!\n";
    }
    else{
        std::cout << "Almost had it!\n";
    }

    typeConversions();

    return 0;
}

bool conditionals()
{
    int num = 808;
    int guess;
    std::cout << "Guess the number: Enter a Number ";
    std::cin >> guess;

    return guess == num;
}

void typeConversions()
{
    char letter = 'a';
    std::cout << "The letter '" << letter << "' has the value of: " << static_cast<int>(letter) << '\n';
}
