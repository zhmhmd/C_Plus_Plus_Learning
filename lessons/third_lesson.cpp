// Условные конструкции. Операторы if-else, switch-case 


#include <iostream> 


int main() {
    setlocale(LC_ALL, "RU");
    
    // int num;
    // std::cout << "Введите число: ";
    // std::cin >> num;
    
    // bool is_has_car = true;
    // if (num >= 3 && !is_has_car) {
    // if (num >= 3 && is_has_car == true) {
    //     std::cout << "Число у нас больше\n";
    //     if (num == 5) {
    //         std::cout << "Число у нас равно\n";
    //     }  
    // }
    // else if (num == 2)
    //     std::cout << "Число у нас 2\n";
    // else 
    //     std::cout << "Число у нас меньше\n";
    // else if (num == 2) {
    //     std::cout << "Число у нас 2\n";
    // }
    // else {
    //     std::cout << "Число у нас меньше\n";
    // }


    // int num;
    // std::cin >> num;

    // switch (num) {
    // case 5: 
    //     std::cout << "Num is 5\n";
    //     break;

    // case 50: 
    //     std::cout << "Num is 50\n";
    //     break;
    // default:
    //     std::cout << "It's wrong\n";
    //     break;
    // }

    // return 0;
    int num = 143;
    std::cin >> num;

    if (num == 143) {
        std::cout << "It's right!";
    }
    else {
        std::cout << "It's wrong!";
    }
}