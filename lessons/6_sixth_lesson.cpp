// Массивы данных (одномерные и многомерные)


#include <iostream>


using namespace std;


int main() {
    setlocale(LC_ALL, "RU");

    // int nums[3];
    // nums[0] = 54;
    // nums[1] = 36;
    // nums[2] = 143;

    // nums[1] = 23;
    // nums[1]++;
    // cout << nums[1] << endl;

    // float nums2[3] = {23, 543, 562};

    // for(int i = 0;  i < 3; i++) {
    //     cout << "El " << i << ": " << nums2[i] << endl;
    // }


    // Практическое применение

        // float numbers[5];

        // for(int i = 0; i < 5; i++) {
        //     cout << "Enter number " << i << ": " << endl;
        //     cin >> numbers[i];
        // }

        // float summa = 0;
        // float min = numbers[0];

        // for(int i = 0; i < 5; i++) {
        //     summa += numbers[i];
        //     if(numbers[i] < min)
        //         min = numbers[i];
        // }

        // for(int i = 0; i < 5; i++) {
        //     cout << "El: " << numbers[i] << endl;
        // }

        // cout << "Summa: " << summa << endl;
        // cout << "Min: " << min << endl;


    // Многомерные массивы

    int matrix[3][2] = {
        {12, 43},
        {34, 57},
        {236, 65},
    };

    for(int i = 0; i < 3; i++) {
        for(int k = 0; k < 2; k++) {
            cout << "Matrix: " << matrix[i][k] << endl;
        }
    }

    return 0;
}