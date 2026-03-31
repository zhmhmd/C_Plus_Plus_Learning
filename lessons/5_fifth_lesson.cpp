// Циклы и операторы в них (For, While, Do While)


#include <iostream>
#include <time.h>


using namespace std;


int main() {
    setlocale(LC_ALL, "RU");


    // For

        // for(int i = 100; i >= 10; i -= 10)
        //     cout << "EL: " << i << endl;

    
    // While

        // float j = 100;
        // while(j > 60) {
        //     cout << "EL: " << j << endl;
        //     j /= 1.5f;
        // }


    // Do while

        // int k = 100;
        // do {
        //     cout << "EL: " << k << endl;
        //     k -= 10;
        // } while (k > 10);


    // Операторы в циклах

        // for (int i = 1; i < 15; i++) {
        //     if (i == 10)
        //         break;
            
        //     if (i % 2 ==0)
        //         continue;

        //     cout << "EL: " << i << endl;
        // }


    // Игра

        srand(time(NULL));

        int num = 1 + rand() % 100;
        bool stop = false;
        int res;
        cout << "Давай поиграм угадай число от 1 до 100!\n";
        do {
            cout << "Введите число: ";
            cin >> res;

            if (res == num) {
                cout << "Ты угадал!\n";
                stop = true;
            } else if (res > num) {
                cout << "Меньше\n";
            } else {
                cout << "Больше\n";
            }
        } while (!stop);

    return 0;
}