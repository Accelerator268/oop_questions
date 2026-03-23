#include <iostream>

void handleException(std::exception_ptr eptr) {
    try {
        if (eptr) {
            std::rethrow_exception(eptr);
        };
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    };
};

auto main() -> int {
    std::exception_ptr eptr;
    try {
        throw std::runtime_error("Smth went wrong");
    } catch (...) {
        eptr = std::current_exception(); //сохраняем исключение
    };
    handleException(eptr); //обрабатываем исключение

    return 0;
}