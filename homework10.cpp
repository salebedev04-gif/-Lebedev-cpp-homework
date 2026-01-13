#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    int n = nums.size();
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    
    // По условию задачи решение всегда существует,
    // но на всякий случай возвращаем пустой вектор
    return {};
}

int main() {
    std::vector<int> nums;
    int target, n;
    
    // Ввод количества элементов
    std::cout << "Введите количество элементов в массиве: ";
    std::cin >> n;
    
    // Ввод элементов массива
    std::cout << "Введите элементы массива: ";
    nums.resize(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    // Ввод целевой суммы
    std::cout << "Введите целевую сумму: ";
    std::cin >> target;
    
    // Поиск индексов
    std::vector<int> result = twoSum(nums, target);
    
    // Вывод результата
    if (!result.empty()) {
        std::cout << result[0] << ", " << result[1] << std::endl;
    } else {
        std::cout << "Решение не найдено" << std::endl;
    }
    
    return 0;
}