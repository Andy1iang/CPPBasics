#include <iostream>
#include <string>

// program defined type
// to use in multi-file project, only define the struct in .h file
struct Book {
    std::string title{};
    std::string author{};
};

// struct templates
template<typename T>
struct Pair {
    T first{};
    T second{};
};

// enums
// these are unscoped - can cause naming collisions
enum Fries {
    regular,
    waffle,
    curly,
};

std::string getFriesName(Fries type) {
    switch (type) {
        case regular:
            return "regular";
        case waffle:
            return "waffle";
        case curly:
            return "curly";
        default:
            return "something else";
    }
}

// overloading cout to print enums directly
std::ostream &operator<<(std::ostream &out, Fries type) {
    out << getFriesName(type);
    return out;
}

// scoped enums
enum class Artists {
    monet,
    manet,
    picasso,
};

int main() {
    Book book1{"Ubik", "PKD"};
    std::cout << book1.title << '\n';

    Fries fav = curly;

    std::cout << "My favority type of fries: " << fav << '\n';

    Artists cube = Artists::picasso;

    Pair<int> ints = {2, 3};
    Pair<double> doubles = {2.2, 3.3};

    return 0;
}
