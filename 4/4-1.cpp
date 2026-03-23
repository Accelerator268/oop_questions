#include <iostream>

class Dog {
public:
    std::string name;
    int age;

    void bark() {
        std::cout << name << ": woof!" << std::endl;
    };
};

int main() {
    Dog mydog; //создание объекта
    mydog.name = "Pepe";
    mydog.age = 3;
    mydog.bark();

    return 0;
}