#include <iostream>

class Point {
public:
    int x, y;

    friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
};

int main() {
    Point p = {1, 2};
    std::cout << p << std::endl;

    return 0;
}