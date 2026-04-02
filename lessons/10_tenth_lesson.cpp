// Перегрузка функций


#include <iostream>
#include <string>


using namespace std;


void print(string word);

void print(int word);

void add(int a, int b);

void add(int a, int b, int c);


int main() {
    setlocale(LC_ALL, "RU");

    print("Some");
    add(32, 54);
    add(3, 5, 1);

    return 0;
}


void print(string word) {
    cout << word << endl;
}


void print(int num) {
    cout << num << endl;
}


void add(int a, int b) {
    int res = a + b;
    print(res);
}


void add(int a, int b, int c) {
    int res = a + b - c;
    print(res);
}