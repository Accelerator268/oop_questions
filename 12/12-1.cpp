#include <iostream>
#include <type_traits> // Для std::enable_if

// 1. Шаблон для интегральных типов (int, long и т.д.)
template <typename T>
typename std::enable_if<std::is_integral<T>::value, void>::type
printType(T t) {
    std::cout << t << " is an integer." << std::endl;
};

// 2. Шаблон для НЕ интегральных типов (float, double, std::string)
template <typename T>
typename std::enable_if<!std::is_integral<T>::value, void>::type
printType(T t) {
    std::cout << t << " is not an integer." << std::endl;
};

int main() {
    printType(10);
    printType(3.14);
    return 0;
}
