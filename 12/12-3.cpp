#include <type_traits>

template <typename T>
void checkType() {
    if constexpr (std::is_integral_v<T>) {
        std::cout << "Integral type" << std::endl;
    } else if constexpr (std::is_floating_point_v<T>) {
        std::cout << "Floating point" << std::endl;
    } else {
        std::cout << "Other type" << std::endl;
    }
}

int main() {
    checkType<int>(); // Integral type
    checkType<double>(); // Floating point
    checkType<char*>(); // Other type
}