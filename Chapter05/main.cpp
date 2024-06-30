#include <iostream>
#include <string>


int main() {
    // constants
    const int HEX_SIDES = 6;

    // C-style strings have a null-terminator in the end

    // String Type
    std::string name = "Andy";

    // std::cin breaks at whitespaces, use std::getline() instead
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Nice to meet you " << name << '\n';

    // "..." defaults to C-string

    // std::string_view prevents copying std:string, which makes the program more efficient
    // this should also be used in function parameters
    std::string_view book = name;

    // printing out the contents of 'book'
    std::cout << book << '\n';

    // 'book' is now viewing "Ubik"
    book = "Ubik";

    std::cout << book << '\n';
    std::cout << name << '\n';

    // conditional operator
    // c?x:y
    // if c then x, otherwise y
    std::cout << (((2 + 2) == 5) ? "True" : "False");

    return 0;
}
