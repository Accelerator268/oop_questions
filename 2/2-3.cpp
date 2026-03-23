#include <iostream>

void initialization() {
    int x = 5;
    int& ref = x; //ссылка использует &
    ref = 10; //прямое использование

    int* ptr = &x; //указатель использует * и &
    *ptr = 10; //разыменовывание
};

void initialization2() {
    int x = 10;
    // int& ref; - ошибка: ссылка должна быть инициализирована
    int& ref = x;
    
    int* ptr1; //простая инициализация (содержит мусор)
    int* ptr2 = nullptr; //обнуление указателя
    int* ptr3 = &x; //сразу присваиваем указателю значение
};

void rebind() {
    int a = 5;
    int b = 10;

    int& ref = a;
    ref = b; //ссылки нельзя перепривязать, теперь a = 10

    int* ptr = &a;
    ptr = &b; //теперь ptr указывает на b
};

void arifmetic() {
    int arr[] = {1, 2, 3, 4, 5};

    int& ref = arr[0];
    ref++; //увиличивает arr[0] на 1, то есть arr[0] = 2

    int* ptr = arr; //ptr указывает на arr[0]
    ptr++; //теперь на arr[1]
    int value = *(ptr + 2); //доступ arr[3]
};

void self_on_self() {
    int x = 10;
    int& ref = x;
    //int&& ref1 = ref; нельзя ссылку на ссылку

    int* ptr = &x;
    int** ptr2 = &ptr; //указатель на указатель
};

void arrays() {
    int arr[10];
    int (&ref)[10] = arr; //ссылка на массив из 10 int

    int* ptr_arr[10]; //массив из 10 указателей
    int (*ptr)[10] = &arr; //указатель на массив из 10 int
};

void memory() {
    int x = 10;
    int& ref = x;
    std::cout << sizeof(ref) << std::endl; //вернет размер x, то есть теоретически размер ссылки равен нулю

    int* ptr = &x;
    std::cout << sizeof(ptr) << std::endl; //вернет размер ptr (указателя)
};

void null() {
    //int& ref1 = nullptr; - нельзя так
    //int& ref2 = *nullptr; - так тоже низя

    int* ptr1 = nullptr;
    int* ptr2 = 0;
    int* ptr3 = NULL;
}