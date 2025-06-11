#include "Weapons.h"

Weapon::Weapon(string name, int rarity, double weight)
    : name(name), rarity(rarity), weight(weight) {
}

string Weapon::toString() const {
    return name + " (R" + to_string(rarity) + ", " + to_string((int)(weight * 100) / 100.0) + "kg)";
}

int Weapon::weaponScore() const {
    return rarity * 5 - (int)weight;
}