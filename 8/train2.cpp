#include <iostream>

class Point {
public:
    int x, y;

    Point operator+(const Point& other) const {
        Point result;
        result.x = x + other.x;
        result.y = y + other.y;
        return result;
    };
};

Point operator*(const Point& a, int scalar) {
    Point result;
    result.x = a.x * scalar;
    result.y = a.y * scalar;
    return result;
};

int main() {
    Point a = {1, 2};
    Point b = {2, 3};
    std::cout << (a + b).x << " " << (a+b).y << std::endl;
    std::cout << (a*3).x << " " << (a*3).y << std::endl;

    return 0;
}