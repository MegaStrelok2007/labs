#include <iostream>

int main() {
    
double a, b;
std::cout << "Введите первое число: ";
std::cin >> a;
std::cout << "Введите второе число: ";
std::cin >> b;

std::cout << "Среднее арифметическое: " << (a + b) / 2.0 << std::endl;

std::cout << "Введите знак операции (+, -, *, /): ";

char token;
std::cin >> token;

switch (token) {
    case '+':
        std::cout << "Результат: " << a + b << std::endl;
        break;
    case '-':
        std::cout << "Результат: " << a - b << std::endl;
        break;
    case '*':
    std::cout << "Результат: " << a * b << std::endl;
    break;
    case '/':
        if (b != 0)
            std::cout << "Результат: " << a / b << std::endl;
        else 
            std::cout << "Ошибка: деление на ноль!" << std::endl;
        break;
    default:
    std::cout << "Ошибка: неверный знак операции!" << std::endl;
    break;
}

return 0;

}