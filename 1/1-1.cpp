#include <iostream>


auto main() -> int {
    int* ptr1 = new int;
    int* ptr2 = new int(322);
    int* ptr3 = new int();

    std::cout << *ptr1 << " " << *ptr2 << " " << ptr3 << std::endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}