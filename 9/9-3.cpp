#include <iostream>

class NonCopyable {
public:
    NonCopyable() = default;

    NonCopyable(const NonCopyable&) = delete;
    NonCopyable& operator=(const NonCopyable&) = delete;
};

int main() {
    NonCopyable a;
    // NonCopyable b = a; - низя, копирование запрещено

    return 0;
}