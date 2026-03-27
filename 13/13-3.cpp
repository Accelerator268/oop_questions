template <int... Args>
struct Sum;

// Рекурсивный случай
template <int First, int... Rest>
struct Sum<First, Rest...> {
    static constexpr int value = First + Sum<Rest...>::value;
};

// Базовый случай (пустой список)
template <>
struct Sum<> {
    static constexpr int value = 0;
};

int main() {
    constexpr int total = Sum<1, 2, 3, 4>::value; // 10 (вычисляется на этапе компиляции)
    return 0;
}