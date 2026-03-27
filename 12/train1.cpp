#include <iostream>

template <typename T>
typename std::enable_if<std::is_integral<T>::value, void>::type
printType(T t) {
    std::cout << "is integer" << std::endl;
};

template<typename T>
typename std::enable_if<!std::is_integral<T>::value, void>::type
printType(T t) {
    std::cout << "not integer" << std::endl;
};

int main() {
    printType(42);
    printType("a");

    return 0;
}