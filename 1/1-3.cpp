#include <iostream>

//возврат указателя на локальную переменную
int* danger_ptr () {
    int loc = 42;
    return &loc; //умрет при выходе из функции
}

//возврат ссылки на локальную переменную
int& danger_ref() {
    int x = 100;
    return x; //возвращаем ссылку на мертвый объект (умрет при выходе из функции)
}

auto main() -> int {
    int* ptr = danger_ptr();
    std::cout << "a" << *ptr << std::endl; //неопределенное поведение

    int& ref = danger_ref();
    ref = 200; //неопределенное поведение

    return 0;
}