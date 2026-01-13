#include <iostream>
#include <string>

int main() {
    std::string word;
    
    // Ввод строки
    std::cout << "Введите строку: ";
    std::getline(std::cin, word);
    
    bool isIsogram = true;
    int length = word.length();
    
    // Проверяем каждый символ
    for (int i = 0; i < length && isIsogram; i++) {
        // Пропускаем пробелы
        if (word[i] == ' ') {
            continue;
        }
        
        // Сравниваем текущий символ со всеми последующими
        for (int j = i + 1; j < length; j++) {
            // Пропускаем пробелы при сравнении
            if (word[j] == ' ') {
                continue;
            }
            
            // Если нашли повторяющийся символ
            if (word[i] == word[j]) {
                isIsogram = false;
                break;
            }
        }
    }
    
    // Вывод результата
    if (isIsogram) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    
    return 0;
}