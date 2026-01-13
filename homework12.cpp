#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;
    int quantity;

public:
    // Конструктор по умолчанию
    Product() : name(""), price(0.0), quantity(0) {}
    
    // Конструктор с параметрами
    Product(const std::string& n, double p, int q) : name(n), price(p), quantity(q) {}
    
    // Сеттеры
    void setName(const std::string& n) {
        name = n;
    }
    
    void setPrice(double p) {
        price = p;
    }
    
    void setQuantity(int q) {
        if (q >= 0) {
            quantity = q;
        }
    }
    
    // Геттеры
    std::string getName() const {
        return name;
    }
    
    double getPrice() const {
        return price;
    }
    
    int getQuantity() const {
        return quantity;
    }
    
    // Метод для проверки наличия товара
    bool isAvailable() const {
        return quantity > 0;
    }
    
    // Метод для продажи товара
    void sell(int amount) {
        if (amount > 0) {
            if (amount <= quantity) {
                quantity -= amount;
                std::cout << "Продано " << amount << " единиц товара \"" << name << "\"" << std::endl;
            } else {
                std::cout << "Недостаточно товара \"" << name << "\" на складе. Можно продать только " << quantity << " единиц." << std::endl;
                quantity = 0; // продаем все, что есть
            }
        } else {
            std::cout << "Количество для продажи должно быть положительным числом." << std::endl;
        }
    }
    
    // Метод для вывода информации о товаре
    void show() const {
        std::cout << "Товар: " << name << std::endl;
        std::cout << "Цена: " << price << std::endl;
        std::cout << "Количество на складе: " << quantity << std::endl;
        
        std::cout << "Статус: ";
        if (isAvailable()) {
            std::cout << "В наличии";
        } else {
            std::cout << "Нет в наличии";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Создаем товар
    Product phone("Телефон", 19990.0, 5);
    
    // Выводим начальное состояние
    std::cout << "=== Начальное состояние ===" << std::endl;
    phone.show();
    std::cout << std::endl;
    
    // Продаем 3 единицы
    std::cout << "=== Продажа 3 единиц ===" << std::endl;
    phone.sell(3);
    phone.show();
    std::cout << std::endl;
    
    // Пытаемся продать больше, чем есть
    std::cout << "=== Попытка продать 5 единиц (осталось 2) ===" << std::endl;
    phone.sell(5);
    phone.show();
    std::cout << std::endl;
    
    // Пытаемся продать с отрицательным количеством
    std::cout << "=== Попытка продать -2 единиц ===" << std::endl;
    phone.sell(-2);
    std::cout << std::endl;
    
    // Восстанавливаем количество и продаем корректно
    std::cout << "=== Восстанавливаем количество до 10 ===" << std::endl;
    phone.setQuantity(10);
    phone.show();
    std::cout << std::endl;
    
    // Продаем несколько раз
    std::cout << "=== Продажа несколькими партиями ===" << std::endl;
    phone.sell(2);
    phone.sell(3);
    phone.sell(4);
    std::cout << std::endl;
    
    // Финальное состояние
    std::cout << "=== Финальное состояние ===" << std::endl;
    phone.show();
    
    return 0;
}