#include "Knights.h"

Knight::Knight(string name, int age, double height, bool alive, Weapon w)
    : name(name), age(age), height(height), alive(alive), weapon(w) {
}

string Knight::getName() const { return name; }
bool Knight::isAlive() const { return alive; }

int Knight::powerLevel() const {
    return age + (int)(height * 10) + weapon.weaponScore();
}

string Knight::toString() const {
    return "Knight: " + name +
        ", Age: " + to_string(age) +
        ", Height: " + to_string(height) +
        ", Weapon: " + weapon.toString() +
        ", Alive: " + (alive ? "Yes" : "No");
}