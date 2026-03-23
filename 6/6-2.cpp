#include <iostream>

class Animal {
public:
    // Animal() {};
    // ~Animal() {};

    virtual void MakeSound() {
        std::cout << "Making Sound..." << std::endl;
    };
};

class Dog : public Animal{
public:
    // Dog() : Animal() {};
    // ~Dog() {};

    void MakeSound() override {
        std::cout << "Woof" <<std::endl;
    };
};

int main() {
    Animal* animal = new Dog;

    animal -> MakeSound();
    delete animal;

    return 0;
}