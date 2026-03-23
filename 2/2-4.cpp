#include <iostream>

void first() {
    int x = 10;
    int &ref = x; //ссылка на x

    const int& cref = x; //константная ссылка к неконстантному объекту
    const int& cref = 20; //константная ссылка к временному объекту

    int arr[5] = {1, 2, 3, 4, 5};
    int (&arr_ref)[5] = arr; //ссылка на массив

    int* ptr = &x;
    int*& ptr_ref = ptr; //ссылка на указатель
};

void second() {
    int a = 5;
    int b = 10;
    int& ref = a;

    ref = b; //не перенаправление ссылки, ref все еще ссылается на a, но теперь a = 10

    ref = 20; //теперь a = 20, но b = 10
};

void third() {
    int x = 5;
    int& ref = x;

    int* ptr1 = &x; //адрес x
    int* ptr2 = &ref; //адрес x
};

void forth() {
    int a = 5;
    int b = 5;
    int& ref_a = a;
    int& ref_b = b;

    if (ref_a == ref_b) {
        std::cout << "Equal" << std::endl;
    };

    if (&ref_a != &ref_b) {
        std::cout << "different addresses" << std::endl;
    };
};

void fifth() { //арифметики ссылок нет (для перехода к след переменной, к примеру)
    int x = 5;
    int& ref = x;

    ref++; //x становится равным 6
    ref += 10; //x становится равным 16
    int y = ref * 10; //y становистя равным 160
};

void sixth() {
    int x = 5;
    int& ref = x;
    int* ptr = &x;

    sizeof(ref); //вернет обычно 4 (так как 2^(4*8) кол-во чисел в int) 
    sizeof(ptr); //вернет обычно 8 (на 64-битной системе)
};

void seventh() {
    int x = 65;
    int& ref = x;

    // static_cast с ссылками
    int& char_ref = static_cast<int&>(ref);

    // const_cast с ссылками
    const int& cref = x;
    int& mutable_ref = const_cast<int&>(cref);  // снятие константности
    mutable_ref = 20;  // теперь x = 20

    // reinterpret_cast с ссылками
    float& float_ref = reinterpret_cast<float&>(ref);  // очень опасно!
};

int& eighth(int& x) {
    return x;
};

