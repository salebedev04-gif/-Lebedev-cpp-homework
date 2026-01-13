#include <iostream>
#include <string>
#include <stack>

bool isValid(std::string s) {
    std::stack<char> brackets;
    
    for (char c : s) {
        // Если открывающая скобка - кладем в стек
        if (c == '(' || c == '[' || c == '{') {
            brackets.push(c);
        }
        // Если закрывающая скобка
        else if (c == ')' || c == ']' || c == '}') {
            // Если стек пустой - нет соответствующей открывающей скобки
            if (brackets.empty()) {
                return false;
            }
            
            // Берем последнюю открывающую скобку из стека
            char top = brackets.top();
            brackets.pop();
            
            // Проверяем соответствие скобок
            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                return false;
            }
        }
    }
    
    // Если после обработки всех символов стек пустой - все скобки сбалансированы
    return brackets.empty();
}

int main() {
    // Тестовые примеры
    std::cout << "Тестовые примеры:" << std::endl;
    
    std::string test1 = "()";
    std::cout << "s = \"" << test1 << "\" -> " << (isValid(test1) ? "true" : "false") << std::endl;
    
    std::string test2 = "()[]{}";
    std::cout << "s = \"" << test2 << "\" -> " << (isValid(test2) ? "true" : "false") << std::endl;
    
    std::string test3 = "(]";
    std::cout << "s = \"" << test3 << "\" -> " << (isValid(test3) ? "true" : "false") << std::endl;
    
    std::string test4 = "([)]";
    std::cout << "s = \"" << test4 << "\" -> " << (isValid(test4) ? "true" : "false") << std::endl;
    
    std::string test5 = "{[]}";
    std::cout << "s = \"" << test5 << "\" -> " << (isValid(test5) ? "true" : "false") << std::endl;
    
    std::string test6 = "(";
    std::cout << "s = \"" << test6 << "\" -> " << (isValid(test6) ? "true" : "false") << std::endl;
    
    // Ввод от пользователя
    std::string input;
    std::cout << "\nВведите строку со скобками: ";
    std::cin >> input;
    
    if (isValid(input)) {
        std::cout << "Строка валидна: true" << std::endl;
    } else {
        std::cout << "Строка невалидна: false" << std::endl;
    }
    
    return 0;
}