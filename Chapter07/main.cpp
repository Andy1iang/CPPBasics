#include "ball.h"
#include "rock.h"
#include <iostream>

// global variable can be seen everywhere (make it constant)
const double MARS_GRAVITY = 3.71;

void staticLocal();

int main() {
    std::cout << "Kicking a ball:" << '\n';
    ball::kick();

    std::cout << "\nKicking a rock:" << '\n';
    rock::kick();

    std::cout << "\npi: " << ball::pi << '\n';

    staticLocal();
    staticLocal();
    staticLocal();

    // namespace can also be aliased with namespace aliasName = realName in main

    return 0;
}

// weird static local variables (avoid using)
void staticLocal() {
    static int i = 0;// initialization will open happen once
    i++;
    std::cout << i << '\n';
}
