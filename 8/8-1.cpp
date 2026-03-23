#include <iostream>

class MyClass {
public:
    int value;

    MyClass(int v) : value(v) {};
    ~MyClass() {};


    MyClass operator+(const MyClass& other) const {
        MyClass result(0);
        result.value = /*this->*/value + other.value;
        return result;
    };
};

MyClass operator-(const MyClass& a, const MyClass& b) {
    MyClass result(0);
    result.value = a.value - b.value;
    return result;
}

int main() {
    MyClass a(10);
    MyClass b(20);
    MyClass c = a + b;

    std::cout << (a-b).value << std::endl;
    std::cout << (a+b).value << std::endl;

    return 0;
}