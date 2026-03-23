#include <iostream>

class Counter {
public:
    int value;

    Counter& operator++() { //префиксный инкремент
        ++value;
        return *this;
    };

    Counter operator++(int) { //постфиксный инкремент
        Counter temp = *this;
        ++value;
        return temp;
    };
};

int main() {
    Counter c;
    c.value = 0;

    std::cout << c.value++ <<std::endl;
    std::cout << c.value <<std::endl;
    std::cout << ++c.value <<std::endl;
    std::cout << c.value <<std::endl;

    return 0;
}