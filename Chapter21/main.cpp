#include <iostream>

class Cents {
private:
    int m_cents;

public:
    explicit Cents(int cents) {
        m_cents = cents;
    }

    // overloading the plus and minus operators
    friend Cents operator+(const Cents &c1, const Cents &c2) {
        return Cents{c1.m_cents + c2.m_cents};
    }

    friend Cents operator-(const Cents &c1, const Cents &c2) {
        return Cents{c1.m_cents - c2.m_cents};
    }

    // overloading the cout operator (declaration)
    friend std::ostream &operator<<(std::ostream &out, const Cents &cents);

    int getCents() const { return m_cents; }
};

// definition
std::ostream &operator<<(std::ostream &out, const Cents &cents) {
    out << "You have " << cents.getCents() << " cents\n";
    return out;
}

int main() {
    Cents myWallet(15);
    Cents yourWallet(25);

    std::cout << (myWallet + yourWallet).getCents() << '\n';
    std::cout << myWallet;

    return 0;
}
