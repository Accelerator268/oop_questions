#include <iostream>
#include <string>

class MyClass {
private:
    std::string* data;
public:
    MyClass(const std::string& s) : data(new std::string(s)) {};
    ~MyClass() {delete data;};

    MyClass(MyClass&& other) : data(other.data) {
        other.data = nullptr;
    };

    MyClass& operator=(MyClass&& other) {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }

    void print() const {
        if (data) {
            std::cout << data << std::endl;
        }
    }
};