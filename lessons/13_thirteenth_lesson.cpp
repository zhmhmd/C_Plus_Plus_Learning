// Структуры данных


#include <iostream>
#include <string>


using namespace std;


struct Point {
    int x, y;
};



struct Tree {
    string name;
    int ages;
    bool is_alive;
    float height;
    Point place;

    void get_info() {
        cout << "Name: " << name << "\nAge: " << ages << endl;
    }
};


int main() {
    setlocale(LC_ALL, "RU");

    Tree dub;
    dub.name = "Дуб";
    dub.ages = 24;
    dub.place.x = 100;
    dub.place.y = 10;

    Tree yelka;
    yelka.name = "Ёлка";
    yelka.ages = 5;
    yelka.place.x = 300;
    yelka.place.y = 60;

    cout << dub.name << " - " << dub.ages << " - " << dub.place.x << " - " << dub.place.y << endl;
    cout << yelka.name << " - " << yelka.ages << " - " << yelka.place.x << " - " << yelka.place.y << endl;

    dub.get_info();
    yelka.get_info();

    return 0;
}