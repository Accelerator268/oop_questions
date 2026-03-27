#include <iostream>

class Animal {
public:
    virtual void MakeSound() {
        std::cout << "Making Sound..." << std::endl;
    };
};

class Dog : public Animal{
public:
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