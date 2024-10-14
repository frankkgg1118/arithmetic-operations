#include <iostream>

int main() {
    double num1, num2;
    char operation;

    std::cout << "請輸入第一個數字: ";
    std::cin >> num1;
    std::cout << "請輸入運算符號 (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "請輸入第二個數字: ";
    std::cin >> num2;

    switch (operation) {
    case '+':
        std::cout << "結果: " << num1 + num2 << std::endl;
        break;
    case '-':
        std::cout << "結果: " << num1 - num2 << std::endl;
        break;
    case '*':
        std::cout << "結果: " << num1 * num2 << std::endl;
        break;
    case '/':
        if (num2 != 0) {
            std::cout << "結果: " << num1 / num2 << std::endl;
        }
        else {
            std::cout << "錯誤: 除數不能為零" << std::endl;
        }
        break;
    default:
        std::cout << "錯誤: 無效的運算符號" << std::endl;
        break;
    }

    return 0;
}
