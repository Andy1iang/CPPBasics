#include <iostream>

int main() {
    try {
        throw -1;
        std::cout << "this line will not be executed";
    } catch (double x) {
        std::cerr << "We caught an double exception with value " << x << '\n';
    } catch (int x) {
        std::cerr << "We caught an int exception with value " << x << '\n';
    } catch (...) {
        // catch-all
        std::cerr << "I don't know what to tell you man ...\n";
    }

    return 0;
}
