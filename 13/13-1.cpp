#include <iostream>

template <typename T>
concept Integral = std::is_integral_v<T>; // Требование: тип должен быть целочисленным

template <Integral T> // Используем концепт
T multiply(T a, T b) {
    return a * b;
}

int main() {
    multiply(5, 10); // OK
    // multiply(3.14, 2.71); // Ошибка: double не удовлетворяет концепту Integral
}