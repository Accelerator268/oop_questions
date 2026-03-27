#include <iostream>

template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
};

int main() {
    int x = 5, y = 10;
    swap(x, y);
    std::cout << x << " " << y << std::endl;

    double a = 5.10, b = 10.73;
    swap(a, b);
    std::cout << a << " " << b << std::endl;

    return 0;
}