#include <iostream>

// function overloading
int add(int x, int y);
double add(double x, double y);

template<typename T>
T max(T x, T y);

// throws purposeful error if these parameter types are passed in
void add(double x, int y) = delete;

// default arguments are passed in during forward declaration (NOT definition)
int defaultArgs(int a = 0);

int main() {
    std::cout << add(3, 2) << std::endl;
    std::cout << add(3.1, 2.0) << std::endl;

    // number of parameters and type of parameters can be used to differentiate
    // return type cannot be used to differentiate

    std::cout << defaultArgs() << std::endl;
    std::cout << defaultArgs(55) << std::endl;

    std::cout << max<int>(55, 22) << std::endl;
    std::cout << max(55.2, 22.3) << std::endl;// compiler can auto detect

    return 0;
}

int add(int x, int y) {
    return x + y;
}

double add(double x, double y) {
    return x + y;
}

int defaultArgs(int a) {
    return a;
}

// function templates
// There can be two typenames, and types passed in can be the same or different
// or we could just use the auto keyword
template<typename T>
T max(T x, T y) {
    return (x < y) ? y : x;
}
