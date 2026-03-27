#include <iostream>

template <typename T>
concept Integral = std::is_integral_v<T>;

template <Integral T>
T multiply(T a, T b) {
    return a*b;
};

int main() {
    int a = multiply(5, 10);

    return 0;
}