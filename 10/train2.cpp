#include <iostream>

template <typename T, typename U>
class Pair {
public:
    T first;
    U second;
    void print() {
        std::cout << "dif, dif" << std::endl;
    };
};

template <typename T>
class Pair<T, T> {
public:
    T first, second;
    
    void print() {
        std::cout << "same, same" << std::endl;
    };
};

int main() {
    Pair<int, double> a = {1, 2.0};
    Pair<int, int> b = {1, 2};

    a.print();
    b.print();

    return 0;
}