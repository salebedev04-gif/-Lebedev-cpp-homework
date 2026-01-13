#include <iostream>

int main() {
    const int SIZE = 6;
    int arr[SIZE] = {4, 7, 2, 7, 7, 5};
    int x;
    
    // Ввод искомого числа
    std::cout << "Введите число для поиска: ";
    std::cin >> x;
    
    // Поиск первого вхождения
    int firstIndex = -1; // Инициализируем -1 (не найдено)
    
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == x) {
            firstIndex = i;
            break; // Нашли первое вхождение, выходим из цикла
        }
    }
    
    // Вывод результата
    if (firstIndex != -1) {
        std::cout << "Индекс первого вхождения: " << firstIndex << std::endl;
    } else {
        std::cout << "Число " << x << " не найдено в массиве." << std::endl;
    }
    
    // Вывод массива для наглядности
    std::cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}