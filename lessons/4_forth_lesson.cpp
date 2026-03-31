// Случайные числа. Разработка Калькулятора


#include <iostream>
#include <time.h>


using namespace std;


int main() {
    setlocale(LC_ALL, "RU");

    /* float num1, num2;
    cout << "Enter num1: \n";
    cin >> num1;

    cout << "\nEnter num2: \n";
    cin >> num2;

    // +, -, *, /

    char math;
    std::cout << "\nEnter math symbol: \n";
    std::cin >> math; */

    /* if (math == '+')
        cout << num1 + num2;
    else if (math == '-')
        cout << num1 - num2;
    else if (math == '*')
        cout << num1 * num2;
    else if (math == '/')
        cout << num1 / num2; */


    /* switch (math) {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    } */



    // Остаток при делении

        // int a = 10, b = 3, z;
        // z = a % b;         
        // cout << z;


    // Сокращенные операции

        // a += 5;
        // a -= 5;
        // a *= 5;
        // a /= 5;

        // a++;
        // a--;


    // Случайные числа

    srand(time(NULL));

    int res = 1 + rand() % 20;
    cout << res << endl;

    return 0;
}