#include <iostream>
#include <cstdlib>  // для функций rand() и srand()
#include <ctime>    // для функции time()

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    
    // Инициализация генератора случайных чисел
    std::srand(std::time(0));
    
    // Заполнение массива случайными числами
    for (int i = 0; i < SIZE; i++) {
        arr[i] = std::rand() % 10;  // случайные числа от 0 до 9
    }
    
    // Вывод элементов массива
    std::cout << "Элементы массива:" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i];
    }
    std::cout << std::endl;
    
    // Поиск максимального элемента
    int maxElement = arr[0];  // начинаем с первого элемента
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    
    // Вывод максимального элемента
    std::cout << "Максимальный элемент: " << maxElement << std::endl;
    
    return 0;
}