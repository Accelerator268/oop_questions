#include <iostream>
#include <vector>

class Iterator {
private:
    int current;

public:
    Iterator(int pos): current(pos) {};

    int operator*() {
        return current;
    };

    Iterator& operator++() {
        ++current;
        return *this;
    };

    bool operator!=(const Iterator& other) const {
        return current != other.current;
    };
};

class NumberRange {
private:
    int start;
    int finish;

public:
    NumberRange(int s, int f): start(s), finish(f) {};

    Iterator begin() const {
        return Iterator(start);
    };

    Iterator end() const {
        return Iterator(finish);
    };
};

auto main() -> int {
    NumberRange rg(1, 10);

    for (auto it = rg.begin(); it != rg.end(); ++it) {
        std::cout << *it << std::endl;
    };
}