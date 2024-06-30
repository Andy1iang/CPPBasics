#include <iostream>
#include <string>
#include <vector>

class Food {
protected:
    std::string m_name;
    int m_calories;

public:
    Food(const std::string &name, int calories) {
        m_name = name;
        m_calories = calories;
    }
};

class Burger : public Food {
public:
    std::vector<std::string> m_toppings;
    bool m_vegan;

    Burger(const std::string &name = "Burger", const std::vector<std::string> &toppings = {}, int calories = 800, bool vegan = false)
        : Food(name, calories) {
        m_toppings = toppings;
        m_vegan = vegan;
    }

    void printSpecs() {
        std::cout << m_name << ":\n";
        std::cout << "Calories: " << m_calories << '\n';
        if (m_vegan) {
            std::cout << "Vegan\n";
        } else {
            std::cout << "Non-vegan\n";
        }
        std::cout << "Toppings:\n";
        for (const std::string &topping: m_toppings) {
            std::cout << topping << '\n';
        }
    }
};

// Inheritance can also be protected or private, we can override, modify, hide, and delete base functions in the derived classes
// We can also inherit from multiple parent classes

int main() {
    Burger test("Bacon Cheese Burger", {"bacon", "cheese"}, 870, false);
    test.printSpecs();

    return 0;
}
