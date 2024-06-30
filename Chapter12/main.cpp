#include <iostream>
#include <string>

void passByAddress(const std::string *ptr);
void failedNull(std::string *ptr);
void nullify(std::string *&ptr);

int main() {
    int x = 3;
    int &y = x;// l-value reference of x
    int z = 5;
    y = z;// changes x to 5, does not impact z at all
    std::cout << x << '\n';
    std::cout << &x << '\n';       // address operator '&'
    std::cout << *(&x) << "\n\n\n";// dereference operator '&'

    // pointers ;)
    double a = 3.81;
    double b = 0.68;
    double *ptr = &a;// pointer to a (the '*' is just syntax, not deference operator)

    std::cout << &a << '\n';
    std::cout << &ptr << '\n';

    // changing what the pointer is referencing to
    ptr = &b;
    std::cout << *ptr << '\n';

    // changing the value of what the pointer is referencing to
    *ptr = 5.0;
    std::cout << b << '\n';

    // pointers can also point to null
    ptr = nullptr;// dereferencing this will cause weird behavior

    // const pointers just can't change the value of its reference, but can be relocated
    const int c = 3;
    const int *ptr2 = &c;
    ptr2 = &x;

    // but we can set it up the other way as well

    int *const d = &x;
    *d = 18;// can change value but can't relocate

    // combination
    const int *const e = &c;

    std::string l = "Manfred";
    passByAddress(&l);// giving the address of string l

    std::string *strPtr = &l;
    failedNull(strPtr);
    std::cout << (strPtr == nullptr) << '\n';

    nullify(strPtr);
    std::cout << (strPtr == nullptr) << '\n';

    return 0;
}

void passByAddress(const std::string *ptr) {
    std::cout << *ptr << '\n';
}

void failedNull(std::string *ptr)// pointer is copied
{
    ptr = nullptr;
}

void nullify(std::string *&ptr)// passing in the pointer by reference
{
    ptr = nullptr;
}
