#include <iostream>
#include <string>

class MyString {
private:
    std::string* data;
public:
    MyString(const std::string& str):data(new std::string(str)) {};

    ~MyString() {
        delete data;
    };

    MyString(MyString&& other) {
        other.data = nullptr;
    };

    MyString& operator=(MyString&& other) {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
        };
        return *this;
    };

    void print() const {
        if (data) {
            std::cout << *data << std::endl;
        };
    };
};

auto main() -> int {
    MyString a("Hello");
    MyString b = std::move(a);
    b.print();
    // a.print(); - низя, так как a пустой

    return 0;
}