#include <iostream>

template <typename T>
class Printer {
public:
    void print(T value) {
        std::cout << value << std::endl;
    };
};

template<>
class Printer<bool> {
public:
    void print(bool value) {
        std::cout << (value ? "not false" : "not true") << std::endl;
    };
};

int main() {
    Printer<int> intPrinter;
    intPrinter.print(42);

    Printer<bool> boolPrinter;
    boolPrinter.print(true);

    return 0;
}