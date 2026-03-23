#include <iostream>

class Rectangle {
private:
    int width; //поле
    int height;
public:
    Rectangle(int w, int h):width(w), height(h) { //конструткор (инициализация)
        std::cout << "constructed" << std::endl;
    };

    ~Rectangle() { //деструктор
        std::cout << "destructed" << std::endl;
    };
    
    int area() const { //функция
        return width * height;
    };
};

int main() {
    {
        Rectangle rect(2, 3);
    };
    Rectangle rect(3, 5);
    std::cout << rect.area() << std::endl;

    return 0;
}