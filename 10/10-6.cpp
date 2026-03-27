#include <iostream>

template <typename T, typename U>
class Pair {
public:
    T first;
    U second;
};

template<typename T>
class Pair<T, T> {
public:
    T first;
    T second;
};

int main() {
    Pair<int, double> p1 = {1, 2.0};
    Pair<int, int> p2 = {1, 3};

    return 0;
}