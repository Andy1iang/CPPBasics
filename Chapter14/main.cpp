#include <iostream>
#include <string>

// classes
class Student {
private:
    std::string name;
    int age;
    double gpa;

    // constructor can be overloaded and parameters can have defaults
public:
    Student(std::string n, int a, double g) {
        name = n;
        age = a;
        gpa = g;
        std::cout << "Student( " << name << ") constructed\n";
    }

    double getGPA() const { return gpa; }

    void boostGPA() {
        if (gpa <= 2) { gpa += 0.5; }
    }
};

int main() {
    Student me{"Andy", 19, 3.9};
    me.boostGPA();
    std::cout << me.getGPA() << '\n';

    return 0;
}
