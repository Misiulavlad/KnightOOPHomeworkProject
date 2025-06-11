#pragma once
#include <string>
using namespace std;

class Weapon {
private:
    string name;
    int rarity;
    double weight;

public:
    Weapon(string name = "None", int rarity = 0, double weight = 0.0);
    string toString() const;
    int weaponScore() const;
};