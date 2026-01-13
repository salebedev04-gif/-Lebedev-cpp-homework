#include <iostream>
#include <vector>
#include <string>

int main() {
    int n;
    
    // Ввод количества строк
    std::cout << "Введите количество строк: ";
    std::cin >> n;
    
    // Создаем вектор для хранения строк
    std::vector<std::string> strings(n);
    
    // Ввод строк
    std::cout << "Введите строки:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> strings[i];
    }
    
    // Создаем вектор для хранения результата
    std::vector<bool> result;
    
    // Начальное значение
    bool currentValue = true;
    
    // Формируем последовательность
    for (const std::string& str : strings) {
        // Добавляем текущее значение в результат
        result.push_back(currentValue);
        
        // Если строка равна "flick", меняем значение на противоположное
        if (str == "flick") {
            currentValue = !currentValue;
        }
    }
    
    // Вывод результата
    std::cout << "Результат: [";
    for (int i = 0; i < result.size(); i++) {
        std::cout << (result[i] ? "true" : "false");
        if (i < result.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
    
    return 0;
}
