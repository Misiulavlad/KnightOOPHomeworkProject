#include "manager.h"
#include "ArrayList.h"
#include "Knights.h"  
#include <iostream>

using namespace std;

int main() {
    int count;
    cout << "Input count of knights: ";
    cin >> count;

    ArrayList knightsList;

    for (int i = 0; i < count; i++) {
        string name;
        int age;
        double height;
        string weapons;
        bool alive;

        cout << "Enter details for knight " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Height: ";
        cin >> height;
        cout << "Weapons: ";
        cin >> weapons;
        cout << "Alive (1 for yes, 0 for no): ";
        cin >> alive;

        knightsList.add(Knight(name, age, height, weapons, alive));
    }

    cout << "\nList of knights:\n" << knightsList.toString() << endl;

    Manager manager;
    Knight oldest = manager.getOldestKnight(knightsList);
    cout << "\nOldest knight:\n" << oldest.toString() << endl;

    return 0;
}
