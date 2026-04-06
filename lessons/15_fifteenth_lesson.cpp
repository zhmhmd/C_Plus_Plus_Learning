// Обработчик исключений (ошибок)


#include <iostream>
#include <string>


using namespace std;


void divide(float a, float b) {
    if (b == 0) throw 100;
    else cout << (a / b);
}


int main() {
    setlocale(LC_ALL, "RU");

    try {
        divide(5.2f, 0.0f);
    } catch(int error) {
        if (error == 100) cout << "Ошибка при деление на ноль!" << endl;
    }

    return 0;
}