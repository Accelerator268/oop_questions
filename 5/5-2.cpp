#include <iostream>

class Counter {
public:
    static int count;

    Counter() {
        count++;
    };

    static void printCount() {
        std::cout << count << std::endl;
    };
};

int Counter::count = 0;

int main() {
    Counter c1, c2;
    Counter::printCount();

    return 0;
}