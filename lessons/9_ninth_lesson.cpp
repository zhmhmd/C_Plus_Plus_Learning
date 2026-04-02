// Создание функций в языке C++


#include <iostream>
#include <string>


using namespace std;


void print(string word);

void add(int a, int b);

int add2(int a, int b);


int main() {
    setlocale(LC_ALL, "RU");

    print("Zhakhon");

    add(32, 34);

    int res = add2(4323, 65);
    int res2 = add2(452, 675);

    if(res > res2) 
        cout << res << endl;
    else
        cout << res2 << endl;

    return 0;
}


void print(string word) {
    cout << "Hello " << word << endl;
}


void add(int a, int b) {
    cout << (a + b) << endl;
}


int add2(int a, int b) {
    return a + b;
}
