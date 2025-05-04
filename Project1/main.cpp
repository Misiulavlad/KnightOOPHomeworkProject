#include "manager.h"
int main() {
    int count;
    cout << "Input count of knights: ";
    cin >> count;

    Knight* list = nullptr;

    Initializer initializer;
    Manager manager;

    initializer.init(list, count);

    cout << "List of knights:\n";
    for (int i = 0; i < count; i++) {
        cout << list[i].toString() << endl;
    }


    Knight oldest = manager.getOldestKnight(list, count);
    cout << "\nOldest knight:\n" << oldest.toString() << endl;

    delete[] list;

    return 0;
}
