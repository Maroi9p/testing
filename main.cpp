#include <iostream>

int main() {
    double firstNumber;
    double secondNumber;
    char operation;

    std::cout << "Введите выражение (например, 12 + 3): ";
    if (!(std::cin >> firstNumber >> operation >> secondNumber)) {
        std::cerr << "Ошибка: некорректный ввод.\n";
        return 1;
    }

    switch (operation) {
        case '+':
            std::cout << firstNumber + secondNumber << '\n';
            break;
        case '-':
            std::cout << firstNumber - secondNumber << '\n';
            break;
        case '*':
            std::cout << firstNumber * secondNumber << '\n';
            break;
        case '/':
            if (secondNumber == 0) {
                std::cerr << "Ошибка: делить на ноль нельзя.\n";
                return 1;
            }
            std::cout << firstNumber / secondNumber << '\n';
            break;
        default:
            std::cerr << "Ошибка: неизвестная операция.\n";
            return 1;
    }

    return 0;
}