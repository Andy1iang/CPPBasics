#include "chapter2Extra.h"
#include "calculator.h"
#include <iostream>

int addOne(int x);
int changeOne(int &x);

int main() {
    int x = 1;

    addOne(x);
    std::cout << x << std::endl;

    changeOne(x);
    std::cout << x << std::endl;

    // coming from the other file
    extra();

    calculator();

    return 0;
}

void voidFunc() {
    // this is a void function that returns nothing
    // there can be no return statement in this function
    // cannot be printed in std::cout because it returns nothing
}

// doesn't change the value of x
int addOne(int x) {
    x = x + 1;
    return x;
}

// parameter passed by reference, changes the value of x
int changeOne(int &x) {
    x = x + 1;
    return x;
}
