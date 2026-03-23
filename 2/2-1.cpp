#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
};

auto main() -> int {
    int a = 10;
    int b = 10;
    int& ref = a;
    const int& ref1 = b;

    ref = 20;
    std::cout << a << std::endl;
    std::cout << ref1 << std::endl;

    swap(a, b);
    std::cout << a << std::endl;
    std::cout << ref1 << std::endl;
}