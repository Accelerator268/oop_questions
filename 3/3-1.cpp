#include <iostream>

void RiskyFunc(int x) {
    if (x == 0) {
        throw std::invalid_argument("x can not be 0");
    };
    std::cout << "All good" << std::endl;
};

auto main() -> int {
    int x;
    std::cin >> x;

    try {
        RiskyFunc(x);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    };

    return 0;
}