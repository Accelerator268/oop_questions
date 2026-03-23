#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor" << std::endl;
    };
};

class Derived : public Base {
public:
    Derived() : Base() {
        std::cout << "Derived constructor" << std::endl;
    };
};

int main() {
    Derived obj;

    return 0;
}