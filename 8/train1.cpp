#include <iostream>

class Counter {
public:
    int value;

    Counter& operator++() {
        ++value;
        return *this;
    };

    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    };
};

int main() {
    Counter c;
    c.value = 0;

    c++;
    ++c;

    std::cout << c.value << std::endl;

    return 0;
}