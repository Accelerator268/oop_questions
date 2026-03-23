#include <iostream>

class A {
public:
    void foo() {
        std::cout << "A:foo" << std::endl;
    };
};

class B {
public:
    void bar() {
        std::cout << "B:bar" << std::endl;
    };
};

class C : public A, public B {
public:
    void baz() {
        foo();
        bar();
    };
};

int main() {
    C obj;
    obj.baz();

    return 0;
}