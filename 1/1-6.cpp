#include <iostream>
#include <memory>

class Point {
private:
    int x, y;
public:
    Point(): x(0), y(0) { //конструктор по умолчанию, можно и без него
        std::cout << "123" << std::endl;
    };

    Point(int a, int b): x(a), y(b) {
        std::cout << x << ", " << y << std::endl;
    };

    ~Point() {
        std::cout << x << "321" << y << std::endl;
    };
};

//перегрузка оператора new
void* operator new(size_t size) {
    void* ptr = malloc(size); //малок выделяет память
    if (!ptr) throw std::bad_alloc(); //эксепшн при недостатке или невозможности выделить память
    return ptr;

};

//перегрузка оператора delete
void operator delete(void* ptr) noexcept{
    free(ptr);
};

void UniquePtrExamp() {
    std::unique_ptr<int> uptr1(new int(100));
    std::unique_ptr<int> uptr2 = std::move(uptr1);
    //освобождение памяти не нужно, оно автоматическое
};

void SharedPtrExamp() {
    std::shared_ptr<int> sptr1 = std::make_shared<int>(100);
    {
        std::shared_ptr<int> sptr2 = sptr1;
        std::cout << sptr1.use_count() << std::endl;
    }; //sptr2 уничтожен
    std::cout << sptr1.use_count() << std::endl;
};//sptr1 уничтожен

void WeakPtrExamp() {
    std::shared_ptr<int> sptr1 = std::make_shared<int>(100);
    std::weak_ptr<int> wptr1 = sptr1;

    if (auto locked = wptr1.lock()) {
        std::cout << *locked << std::endl;
    };

    sptr1.reset();

    if (wptr1.expired()) {
        std::cout << "gg" << std::endl;
    };
};

int main() {
    //базовое выделение памяти
    int* p1 = new int; //просто инициализация
    int* p2 = new int(); //инициализация нулем
    int* p3 = new int(42); //инициализация 42
    Point* p4 = new Point;
    Point* p5 = new Point(10, 20);

    //освобождение памяти
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;

    //обнуление указателей
    p1 = nullptr;
    p2 = nullptr;
    p3 = nullptr;
    p4 = nullptr;
    p5 = nullptr;



    return 0;
}