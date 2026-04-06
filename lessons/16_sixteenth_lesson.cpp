// Встроенные функции в C++


#include <iostream>
#include <string>
#include <cstring>
#include <cmath>


using namespace std;


int main() {
    setlocale(LC_ALL, "RU");

    string str1 = "Hello";
    string str2 = "World";

    str1.append(str2);
    str1.pop_back();
    str1.push_back('!');
    str1.resize(5);
    cout << str1;

    cout << pow(2, 3) << endl;
    cout << abs(-2) << endl;
    cout << sin(1) << endl;
    cout << cos(1) << endl;
    cout << sqrt(23) << endl;
    cout << ceil(1.3f) << floor(1.99f) << round(1.6f) << endl;

    return 0;
}