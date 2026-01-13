#include <iostream>
#include <string>

//задание 1 

int main() {
    int num1, num2;
    
    // Ввод двух целых чисел
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    
    // Вычисление и вывод результатов побитовых операций
    std::cout << "Результат побитового AND: " << (num1 & num2) << std::endl;
    std::cout << "Результат побитового OR: " << (num1 | num2) << std::endl;
    std::cout << "Результат побитового XOR: " << (num1 ^ num2) << std::endl;
    
    return 0;
}
