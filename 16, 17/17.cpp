#include <iostream>
#include <vector>

class PrintingIterator {
private:
    std::vector<int>::iterator it;

public:
    PrintingIterator(std::vector<int>::iterator iter):it(iter) {};

    int operator*() {
        return *it;
    };
    
    PrintingIterator& operator++() {
        ++it;
        return *this;
    };

    bool operator!=(const PrintingIterator other) const {
        return it != other.it;
    };

    void print() const {
        std::cout << *it << std::endl;
    };
};

auto main() -> int {
    std::vector<int> v = {10, 20, 30, 40, 50};

    for (auto it = v.begin(); it != v.end(); ++it) {
        PrintingIterator printer(it);
        printer.print();
    };

    return 0;
}