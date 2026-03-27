#include <iostream>

class Animal {
public:
    void eat() {
        std::cout << "eating..." << std::endl;
    };
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "bark..." << std::endl;
    }
};

int main() {
    Dog dog;
    dog.eat();
    dog.bark();

    return 0;
}