#include <iostream>

int main() {
    const int ROWS = 2;
    const int COLS = 3;
    int arr[ROWS][COLS];
    
    // Заполнение массива числами от 1 до 6
    int counter = 1;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = counter++;
        }
    }
    
    // Вывод элементов массива в виде таблицы
    std::cout << "Элементы массива:" << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl; // переход на новую строку для следующей строки массива
    }
    
    return 0;
}