#include <iostream>
#include <string>  // для работы со строками

int main() {
    std::string str1, str2, result;
    
    // Ввод первой строки
    std::cout << "Введите первую строку: ";
    std::getline(std::cin, str1);
    
    // Ввод второй строки
    std::cout << "Введите вторую строку: ";
    std::getline(std::cin, str2);
    
    // Объединение строк
    result = str1 + str2;
    
    // Вывод результата
    std::cout << "Результат: " << result << std::endl;
    
    return 0;
}