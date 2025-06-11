#pragma once
#include "ICombatant.h"
#include "Weapons.h"

class Knight : public ICombatant {
protected:
    string name;
    int age;
    double height;
    bool alive;
    Weapon weapon;

public:
    Knight(string name = "Nameless", int age = 30, double height = 1.75, bool alive = true, Weapon w = Weapon());
    string getName() const override;
    bool isAlive() const override;
    int powerLevel() const override;
    string toString() const override;
};