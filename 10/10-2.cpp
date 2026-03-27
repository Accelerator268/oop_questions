#include <iostream>

template <typename T>
class Array {
private:
    T* data;
    int size;
public:
    Array(int s) : size(s), data(new T[s]) {};
    ~Array() {
        delete[] data;
    };

    // Array(const Array& other) :size(other.size), data(new T[other.size]) {
    //     for (int i = 0; i != size; i++) {
    //         data[i] = other.data[i];
    //     };
    // };

    T& operator[] (int index) {
        return data[index];
    };

    // Array& operator=(const Array& other) {
    //     if (this == &other) {
    //         return *this;
    //     };

    //     delete[] data;
    //     size = other.size;
    //     data = new T[size];

    //     for (int i = 0; i != size; i++) {
    //         data[i] = other.data[i];
    //     };

    //     return *this;
    // };

    void print() const {
        for (int i = 0; i != size; i++) {
            std::cout << data[i] << " ";
        };
        std::cout << std::endl;
    };
};

int main() {
    Array<int> intArr(5);
    Array<double> doubleArray(5);
    Array<int> intArr2(5);
    // intArr = intArr2;
    intArr.print();
    doubleArray.print();

    return 0;
}