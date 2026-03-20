#include <iostream>

void initialization() {
    int arr1[10];
    int arr2[] = {1, 2, 3};

    int* ptr1;
    int* ptr2 = nullptr;
    int* ptr3 = new int[20];
}

void size_diffrence() {
    int array[5] = {1, 2, 3, 4, 5}; //размер 5*4 байт (по 4 байта на элемент, так как столько занимает стандартный int)
    int* ptr = array; //указатель на первый элемент массива (8 байт)

    std::cout << sizeof(array) << std::endl;
    std::cout << sizeof(ptr) << std::endl;
}

void adress_modification() {
    int array[10];
    int* ptr = array;

    //для array нельзя изменить адрес или провести арифметическую операцию

    ptr = nullptr;
    ptr++;
    ptr = new int[20];
    std::cout << *ptr << std::endl;
    delete[] ptr;
}

int main() {
    //size_diffrence();
    adress_modification();

    return 0;
}