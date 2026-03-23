#include <iostream>

class A {
public:
    void foo() {};
};

class B : public A {};
class C : public A {};
class D : public B, public C {};

int main() {
    D obj;
    // obj.foo(); - тут будет ошибка из-за неоднозначности

    return 0;
}