#include <iostream>

template <typename T, int size>
class Buffer {
private:
    T data[size];
public:
    void fill (T value) {
        for (int i = 0; i != size; i++) {
            data[i] = value;
        };
    };

    void print() const {
        for (int i = 0; i != size; i++) {
            std::cout << data[i] << " ";
        };
        std::cout << std::endl;
    };
};

int main() {
    Buffer<int, 10> buffer;
    buffer.fill(42);
    buffer.print();

    return 0;
}