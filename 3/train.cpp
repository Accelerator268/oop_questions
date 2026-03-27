#include <iostream>
#include <exception>

void HandleException(std::exception_ptr eptr) {
    try {
        if (eptr) {
            std::rethrow_exception(eptr);
        };
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    };
};

int main() {
    std::exception_ptr eptr;
    try{
        throw std::runtime_error("smth went wrong");
    }
    catch (...) {
        eptr = std::current_exception();
    };
    HandleException(eptr);

    return 0;
}