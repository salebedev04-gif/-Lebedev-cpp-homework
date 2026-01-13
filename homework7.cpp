#include <iostream>

int main() {
    int x;
    
    std::cout << "Введите число: ";
    std::cin >> x;
    
    // Отрицательные числа не могут быть палиндромами
    if (x < 0) {
        std::cout << "false" << std::endl;
        return 0;
    }
    
    // Числа, оканчивающиеся на 0 (кроме 0) не могут быть палиндромами
    if (x != 0 && x % 10 == 0) {
        std::cout << "false" << std::endl;
        return 0;
    }
    
    int reversedHalf = 0;
    
    // Разворачиваем половину числа
    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }
    
    // Для чисел с четным количеством цифр: x == reversedHalf
    // Для чисел с нечетным количеством цифр: x == reversedHalf / 10
    if (x == reversedHalf || x == reversedHalf / 10) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    
    return 0;
}