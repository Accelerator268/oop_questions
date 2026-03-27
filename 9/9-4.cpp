#include <iostream>

class Adder {
public:
    int operator()(int a, int b) {
        return a + b;
    };
};

int main() {
    Adder add;
    std::cout << add(2, 3) << std::endl;

    return 0;
}