#include <iostream>

class Animal {
public:
    virtual void MakeSound() {
        std::cout << "making sound..." <<std::endl;
    };
};

class Dog : public Animal {
public:
    void MakeSound() override {
        std::cout << "bark" << std::endl;
    };
};

int main() {
    Dog dog;
    dog.MakeSound();

    return 0;
}