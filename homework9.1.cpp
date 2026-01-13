#include <iostream>

// Функция, возвращающая меньшее из двух чисел
int minValue(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;
    
    // Ввод двух чисел
    std::cout << "Введите два числа: ";
    std::cin >> num1 >> num2;
    
    // Вызов функции и вывод результата
    int minimum = minValue(num1, num2);
    std::cout << "Минимум: " << minimum << std::endl;
    
    return 0;
}