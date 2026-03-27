#include <iostream>

class Point {
private:
    int x, y;
public:
    Point(int a = 0, int b = 0) : x(a), y(b) {};

    Point& operator=(const Point& other) {
        if (this != &other) {
            x = other.x;
            y = other.y;
        };
        return *this;
    };

    void print() const {
        std::cout << "(" << x << ", " << y << ")" <<std::endl;
    };
};

int main() {
    Point a = {2, 3};
    Point b;

    b = a;
    b.print();

    return 0;
}