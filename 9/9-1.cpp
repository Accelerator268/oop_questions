#include <iostream>
#include <cstring>

class MyString {
public:
    char* data;

    MyString(const char* str = "") {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    };

    ~MyString() {
        delete[] data;
    };

    MyString& operator=(const MyString& other) {
        if (this != &other) {
            delete[] data;
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
        }
        return *this;
    }

    void print() const {
        std::cout << data << std::endl;
    };
};

int main() {
    MyString a("Hello");
    MyString b;
    b = a;
    b.print();

    return 0;
}