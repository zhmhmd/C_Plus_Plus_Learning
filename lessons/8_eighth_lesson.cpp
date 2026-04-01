// Работа со строками и символами


#include <iostream>
#include <string>


using namespace std;


int main() {
    setlocale(LC_ALL, "RU");

    string words = "Hello World!";
    words[0] = 'K';
    cout << words << endl;

    cin >> words;
    cout << words << endl;

    return 0;
}