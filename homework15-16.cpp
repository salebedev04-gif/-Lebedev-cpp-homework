#include <iostream>
#include <cmath>

int main() {
    // Параметры окружности
    const double centerX = 2.0;
    const double centerY = -1.0;
    const double radius = 5.0;
    const double radiusSquared = radius * radius;  // r² = 25
    
    double x, y;
    
    // Ввод координат точки
    std::cout << "Введите координаты точки (x y): ";
    std::cin >> x >> y;
    
    // Вычисляем квадрат расстояния от точки до центра окружности
    double distanceSquared = (x - centerX) * (x - centerX) + 
                            (y - centerY) * (y - centerY);
    
    // Сравниваем с квадратом радиуса
    std::cout << "\nКоординаты точки: (" << x << ", " << y << ")" << std::endl;
    std::cout << "Центр окружности: (" << centerX << ", " << centerY << ")" << std::endl;
    std::cout << "Радиус окружности: " << radius << std::endl;
    std::cout << "Квадрат расстояния до центра: " << distanceSquared << std::endl;
    std::cout << "Квадрат радиуса: " << radiusSquared << std::endl;
    std::cout << std::endl;
    
    // Определяем положение точки относительно окружности
    if (distanceSquared < radiusSquared) {
        std::cout << "Точка внутри окружности" << std::endl;
    } else if (distanceSquared == radiusSquared) {
        std::cout << "Точка на границе окружности" << std::endl;
    } else {
        std::cout << "Точка вне окружности" << std::endl;
    }
    
    return 0;
}