#include <iostream>

auto main() -> int {
    int x = 10; // не является ссылкой
    int& ref = x; // ref - lvalue ссылка
    // int& ref1 = 20; - низя привязать лево к праву
    const int& cref = 20; // const lvalue может привязаться к lvalue и rvalue
    std::cout << ref << " " << cref << std::endl;

    int&& rref = 10;
    // int&& rref1 = x; - низя привязать право к леву
    std::cout << rref << std::endl;
    rref = 20;
    std::cout << rref << std::endl;
    rref++; //rvalue ссылку можно изменить
    std::cout << rref << std::endl;
}