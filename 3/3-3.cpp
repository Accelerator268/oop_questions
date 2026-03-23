#include <iostream>

void type() {
    try {
        throw std::runtime_error("error");
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    };
}

void all() {
    try {
        throw std::runtime_error("error");
    } catch (...) {
        std::cerr << "Unknown exception" << std::endl;
    };
}

int main() {
    all();

    return 0;
}