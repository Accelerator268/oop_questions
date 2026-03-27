#include <iostream>

class MyStatic {
private:
    static int count;
public:
    MyStatic() {
        count++;
    };

    static void Print() {
        std::cout << count << std::endl;
    };
};

int MyStatic::count = 0;

int main() {
    MyStatic c1, c2;
    MyStatic::Print();

    return 0;
}