#include <iostream>

int main() {
    int x = 42;
    int& lref = x; //Lvalue ссылка
    int&& rref1 = 42; //Rvalue ссылка 
    int&& rref2 = x + 1; //Rvalue ссылка на временный объект
}