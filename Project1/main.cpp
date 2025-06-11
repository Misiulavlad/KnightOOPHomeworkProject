#include "Knights.h"
#include "Initializer.h"
#include <iostream>
using namespace std;

int main() {
    Initializer army;

    army.add(new Knight("Gawain", 38, 1.85, true, Weapon("Mace", 3, 6.2)));
    army.add(new Knight("Percival", 29, 1.77, true, Weapon("Sword", 4, 4.5)));
    army.add(new Knight("Galahad", 33, 1.80, true, Weapon("Lance", 5, 5.5)));

    cout << "=== Army Roster ===\n";
    for (int i = 0; i < army.getSize(); i++) {
        cout << army.get(i)->toString() << "\n";
    }

    cout << "\n>> Strongest Knight:\n";
    ICombatant* best = army.getStrongest();
    cout << best->toString() << " | Power: " << best->powerLevel() << "\n";

    return 0;
}