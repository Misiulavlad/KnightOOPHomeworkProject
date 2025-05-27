#include "Knights.h"
#include <sstream>

Knight::Knight() : Knight("nn", 20, 1.7, "nth", true) {}

Knight::Knight(string nm, int age, double height, string weapons, bool alive)
    : name(nm), age(age), height(height), weapons(weapons), alive(alive) {
}

Knight::Knight(const Knight& knight)
    : Knight(knight.name, knight.age, knight.height, knight.weapons, knight.alive) {
}

Knight::~Knight() {}

string Knight::getName() const { return name; }
void Knight::setName(string nm) { name = nm; }

int Knight::getAge() const { return age; }
void Knight::setAge(int ag) { age = ag; }

double Knight::getHeight() const { return height; }
void Knight::setHeight(double ht) { height = ht; }

string Knight::getWeapons() const { return weapons; }
void Knight::setWeapons(string wp) { weapons = wp; }

bool Knight::getAlive() const { return alive; }
void Knight::setAlive(bool al) { alive = al; }

string Knight::toString() const {
    ostringstream stream;
    stream << fixed << setprecision(2) << height;
    return "Name: " + name + ", age: " + to_string(age) +
        ", height: " + stream.str() + ", weapons: " + weapons +
        ", alive: " + (alive ? "Yes" : "No");
}