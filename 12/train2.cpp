#include <iostream>

template<typename T>
void CheckType() {
    if constexpr (std::is_integral_v<T>) {
        std::cout << "inteher" << std::endl;
    } else if constexpr (std::is_floating_point_v<T>) {
        std::cout << "double" << std::endl;
    } else {
        std::cout << "other type" << std::endl;
    };
}

int main() {
    CheckType<int>();
    CheckType<double>();
    CheckType<char*>();

    return 0;
}