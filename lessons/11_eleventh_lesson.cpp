// Указатели и ссылки


#include <iostream>
#include <string>


using namespace std;


void minimal(int* arr, int len);


int main() {
    setlocale(LC_ALL, "RU");

    // Ссылки

        // int num = 10;
        // int &a = num;

        // a = 15;
        // cout << &num << " - " << num << endl;
        // cout << &a << " - " << a << endl;


    // Указатели

        // int val = 12;
        // int* ptrval = &val;

        // *ptrval = 20;
        // ptrval = nullptr;
        // cout << &val << " - " << val << endl;
        // cout << ptrval << " - " << *ptrval << endl;


    // Практический пример

    int arr[] = {5, -34, 6, 2, 8};
    minimal(arr, 5);

    return 0;
}


void minimal(int* arr, int len) {
    int min = *arr;

    for(int i = 0; i < len; i++) {
        if(min > *(arr + i)) 
            min = *(arr + i);
    }

    cout << "Min: " << min << endl;
}
