#include <iostream>
#include <string>
#include <unordered_map>

int romanToInt(std::string s) {
    // Таблица значений римских цифр
    std::unordered_map<char, int> romanValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    
    int result = 0;
    int n = s.length();
    
    // Проходим по всем символам строки
    for (int i = 0; i < n; i++) {
        int current = romanValues[s[i]];
        
        // Если есть следующий символ и его значение больше текущего,
        // то текущий символ вычитается (например, IV = 4, IX = 9)
        if (i < n - 1 && romanValues[s[i + 1]] > current) {
            result -= current;
        } else {
            result += current;
        }
    }
    
    return result;
}

int main() {
    std::string romanNumeral;
    
    // Ввод римского числа
    std::cout << "Введите римское число: ";
    std::cin >> romanNumeral;
    
    // Преобразование и вывод результата
    int decimalValue = romanToInt(romanNumeral);
    std::cout << "Десятичное значение: " << decimalValue << std::endl;
    
    // Тестовые примеры из задания
    std::cout << "\nТестовые примеры:" << std::endl;

    
    return 0;
}