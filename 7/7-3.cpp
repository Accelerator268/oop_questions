#include <iostream>

class MyClass {
public:
    mutable int count = 0;

    // void setValue(int v) {
    //     count = v;
    // };

    // int getValue() const {
    //     return count;
    // };

    void increment() const {
        count++;
    };
};

int main() {
    const MyClass obj;
    obj.increment();
    std::cout << obj.count << std::endl;

    return 0;
}