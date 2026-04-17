// Создание классов и объектов

// Конструкторы, деструкторы и указатель this


#include <iostream>
#include <string>


using namespace std;


class Building {
private:
    int year;
    string type;

public:
    Building(int y, string t) {
        set_data(y, t);
    }

    Building() {
    }

    void set_data(int y, string t) {
        this->year = y;
        type = t;
    }

    void get_info() {
        cout << "Type: " << type << ". Year: " << year << endl;
    }

    ~Building() {
        cout << "Delete object!" << endl;
    }
};


int main() {
    setlocale(LC_ALL, "RU");

    Building school(1998, "Школа");
    // school.type = "Школа";
    // school.year = 2000;
    // school.set_data(2000, "Школа");
    school.get_info();


    Building house(2003, "House");
    // house.type = "Дом 1";
    // house.year = 1997;
    // house.set_data(2010, "Дом 1");
    house.get_info();

    return 0;
}