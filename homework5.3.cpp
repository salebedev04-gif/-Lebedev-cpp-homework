#include <iostream>

int main() {
    int N;
    
    // Ввод числа N
    std::cout << "Введите N: ";
    std::cin >> N;
    
    // Проверка на корректность ввода
    if (N < 1) {
        std::cout << "N должно быть больше или равно 1." << std::endl;
        return 1;
    }
    
    // Вывод заголовка
    std::cout << "Чётные числа от 1 до " << N << ":" << std::endl;
    
    // Вариант 3: Цикл while
    int i = 2;
    while (i <= N) {
        std::cout << i << " ";
        i += 2;
    }
    std::cout << std::endl;
    
    return 0;
}