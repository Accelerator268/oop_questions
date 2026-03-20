#include <iostream>

void func() {
    int a = 42;
    char c = 'q';

    std::cout << c << std::endl;

    int array1[10] = {a, 10, 20};
    int array2[10] = {};

    std::cout << *(array1+1) << " " << *array2 << std::endl;
};

auto main() -> int {
    func();

    return 0;
}
