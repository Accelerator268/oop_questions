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
    Point p1 = {1, 2};
    Point p2 = {2, 3};

    Point p3 = p1 + p2;
    Point p4 = p1 * 3;

    std::cout << p3.x << " " << p3.y << std::endl;
    std::cout << p4.x << " " << p4.y << std::endl;

    return 0;
}