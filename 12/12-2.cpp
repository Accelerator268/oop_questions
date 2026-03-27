#include <type_traits>

template <typename T>
typename std::enable_if<std::is_integral<T>::value, void>::type
process(T x) {
    std::cout << "Integral: " << x << std::endl;
}

template <typename T>
typename std::enable_if<!std::is_integral<T>::value, void>::type
process(T x) {
    std::cout << "Non-integral: " << x << std::endl;
}

int main() {
    process(42); // Вывод: Integral: 42
    process(3.14); // Вывод: Non-integral: 3.14
}