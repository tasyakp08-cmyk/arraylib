#include "arraylib.h"
#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    int distances[] = {
        12, 35, 48, 7, 64,
        28, 51, 19, 42, 33
    };
    const std::size_t n = sizeof(distances) / sizeof(distances[0]);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "========== ВАРИАНТ 10. РАССТОЯНИЯ ==========\n";
    std::cout << "Общее расстояние: " << arr_sum(distances, n) << " км\n";
    std::cout << "Минимальное: " << arr_min(distances, n) << " км\n";
    std::cout << "Максимальное: " <<  arr_max(distances, n) << " км\n";
    std::cout << "Среднее: " << arr_average(distances, n) << " км\n";
    std::cout << "Медиана: " << arr_median(distances, n) << " км\n";

    return 0;
}