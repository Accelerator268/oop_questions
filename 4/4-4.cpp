#include <iostream>

class MyClass {
private:
    int value;
public:
    //MyClass(int v):value(v) {};
    MyClass() {};
    ~MyClass() {};

    void setValue(int v) {
        value = v;
    };

    int getValue() const {
        return value;
    };
};

int main() {
    const MyClass obj/*(42)*/;
    // obj.setValue(41); - низя изменить константный объект
    std::cout << obj.getValue() << std::endl;

    return 0;
}