#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    std::cout << *ptr << std::endl;
    ptr++;
    std::cout << *ptr << std::endl;
    ++ptr;
    std::cout << *ptr << std::endl;

    std::cout << std::endl;

    ptr--;
    std::cout << *ptr << std::endl;
    --ptr;
    std::cout << *ptr << std::endl;

    std::cout << std::endl;

    std::cout << *ptr++ << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << *++ptr << std::endl;
    std::cout << *ptr << std::endl;

    std::cout << std::endl;

    int* ptr2 = arr;
    std::cout << *ptr2 << std::endl;
    ptr2 = ptr2 + 2;
    std::cout << *ptr2 << std::endl;
    ptr2 = ptr2 - 2;
    std::cout << *ptr2 << std::endl;

    return 0;
}