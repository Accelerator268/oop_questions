#include <iostream>

class MyClass {
private:
    int value;
public:
    MyClass() {};
    ~MyClass() {};

    void setValue(int v) {
        value = v;
    };

    int getValue() const { //константная функция
        return value;
    };
};

int main() {
    const MyClass obj;
    // obj.setValue(42); - константный объект нельзя изменять
    std::cout << obj.getValue() << std::endl;

    return 0;
}