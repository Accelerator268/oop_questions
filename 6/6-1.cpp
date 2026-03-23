#include <iostream>

class Animal {
public:
    void eat() {
        std::cout << "Eating..." << std::endl;
    };
};

class Dog : public Animal {
public:
    void Bark() {
        std::cout << "Barking..." << std::endl;
    };
};

int main() {
    Dog dog;
    dog.eat();
    dog.Bark();

    return 0;
}