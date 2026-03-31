// Переменные и типы данных


#include <iostream> 


int main() {
    setlocale(LC_ALL, "RU");

    int num = 45;
    num = 3;
    std::cout << "Переменная: " << num << std::endl;

    num = 68;
    std::cout << "Переменная: " << num << std::endl;

    int a, b;
    std::cout << "Введите переменую A: ";
    std::cin >> a; 

    std::cout << "Введите переменую B: ";
    std::cin >> b; 

    std::cout << "A: " << a << ". B: " << b;

    // Типы данных


    // Целые числа

    short num1 = 7; // 2 byte / -32k до 32k
    unsigned num4 = 7; // 2 byte / 0 до 65k

    int num2 = 5; // 4 byte / -2B до 2B
    unsigned int num5 = 5; // 4 byte / 0 до 4B

    long num3 = 34; // 8 byte
    unsigned long num6 = 34; // 8 byte / 0 -


    // Числа с точкой

    float num7 = 1.2f;
    double num8 = 3452.32f;


    // Хранения символа

    char sym = '';


    // True / False

    bool isHappy = true;
    bool isPaid = false;

    return 0;
}