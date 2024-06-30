#include <array>
#include <iostream>
#include <vector>

// passing array of variable size
template<typename T, std::size_t N>// not int, or we can use auto
void passByRef(const std::array<T, N> &arr) {
    static_assert(N != 0);// fail if this is a zero-length std::array

    std::cout << arr[0] << '\n';
}

void printElementZero(int arr[1000])// doesn't make a copy
{
    std::cout << arr[0] << '\n';
}

int main() {
    // array lengths must be defined with a constexpr
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // arrays can have bound checking
    std::cout << arr[10] << '\n';// undefined behavior
    // std::cout << std::get<10>(arr) << '\n'; this is will cause out of bounds error

    passByRef(arr);

    // use {{ }} when initializing structs or classes if no explicit typing with each array element

    // c style arrays
    int nums[5] = {3, 3, 3, 3, 3};
    std::cout << sizeof(nums) / sizeof(nums[0]) << '\n';
    // c style arrays can initialize, but does not support assignment

    printElementZero(nums);// can be passed in even without matching size

    // 2d arrays
    int square[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (auto &i: square) {
        for (auto &j: i) {
            std::cout << j << " ";
        }
        std::cout << '\n';
    }

    // multidimensional std::array (double braces on the outside)
    std::array<std::array<std::array<int, 2>, 2>,2> cube = {{
            {{
                    {{1, 2}},
                    {{3, 4}}
            }},
            {{
                    {{5, 6}},
                    {{7, 8}}
            }}
    }};

    return 0;
}
