#include <iostream>

namespace Math {
    int add(int a, int b) {
        return a + b;
    };
}

int main() {
    std::cout << Math::add(2, 3) << std::endl;

    return 0;
}