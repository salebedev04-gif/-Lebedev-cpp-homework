#include <iostream>
#include <string>

int main() {
    int score;
    std::string grade;
    
    // Ввод количества баллов
    std::cout << "Введите количество баллов: ";
    std::cin >> score;
    
    // Проверка корректности введенных данных
    if (score < 0 || score > 100) {
        std::cout << "Ошибка: количество баллов должно быть в диапазоне от 0 до 100." << std::endl;
        return 1; // Возврат с кодом ошибки
    }
    
    // Определение оценки по шкале
    if (score < 40) {
        grade = "неудовлетворительно";
    } else if (score < 60) {
        grade = "удовлетворительно";
    } else if (score < 80) {
        grade = "хорошо";
    } else {
        grade = "отлично";
    }
    
    // Вывод результата
    std::cout << "Оценка: " << grade << std::endl;
    
    return 0;
}