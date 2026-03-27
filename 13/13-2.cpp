#include <iostream>

// Базовый случай рекурсии
void print() {
    std::cout << std::endl;
}

// Рекурсивная распаковка аргументов
template <typename T, typename... Args>
void print(T first, Args... args) {
    std::cout << first << " ";
    print(args...); // Рекурсивный вызов
}

int main() {
    print(1, 2.5, "Hello", 'A'); // Вывод: 1 2.5 Hello A
    return 0;
}