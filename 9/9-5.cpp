#include <iostream>
#include <vector>
#include <algorithm>

class GreaterThan {
    int threshold;

public:
    GreaterThan(int t): threshold(t) {};

    bool operator()(int value) const {
        return value > threshold;
    };
};

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    GreaterThan gt(3);
    auto it = std::find_if(numbers.begin(), numbers.end(), gt);

    if (it != numbers.end()) {
        std::cout << *it << std::endl;
    } 

    return 0;
}
