#include <iostream>
#include <cstring>

template <typename T>
T max(T a, T b) {
    return (a < b) ? b : a;
};

template<>
const char* max(const char* a, const char* b) {
    return (strcmp(a, b) > 0) ? a : b;
};

int main() {
    std::cout << max(10, 20) << std::endl;
    std::cout << max("a", "b") << std::endl;

    return 0;
}