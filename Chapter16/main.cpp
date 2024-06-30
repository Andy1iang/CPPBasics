#include <iostream>
#include <vector>

int main() {
    // vectors
    std::vector<int> coolNumbers = {7, 21, 88};
    std::vector<double> nums(10);// length 5

    std::cout << coolNumbers[1] << '\n';
    std::cout << nums.size() << '\n';

    // vectors are usually passed by reference to avoid making copies

    // for-loops
    std::vector<double> scores = {33.3, 50.0, 99.5};
    double total = 0;
    for (int idx = 0; idx < scores.size(); idx++) {
        total += scores[idx];
    }
    double average = total / scores.size();
    std::cout << average << '\n';

    // for-each loops
    double sum = 0;
    for (const auto &num: scores) {
        sum += num;
    }

    // resizing arrays at run-time
    nums.resize(3);
    std::cout << nums.size() << '\n';
    std::cout << nums.capacity() << '\n';
    nums.push_back(1.618);
    std::cout << nums.size() << '\n';
    nums.pop_back();
    std::cout << nums.size() << '\n';
    nums.reserve(100);
    std::cout << nums.capacity() << '\n';
    
    return 0;
}
