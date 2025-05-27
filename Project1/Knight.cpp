#include "Knights.h"

string Knight::getName() { return name; }
void Knight::setName(string nm) { name = nm; }

int Knight::getAge() { return age; }
void Knight::setAge(int ag) { age = ag; }

double Knight::getHeight() { return height; }
void Knight::setHeight(double ht) { height = ht; }

string Knight::getWeapons() { return weapons; }
void Knight::setWeapons(string wp) { weapons = wp; }



string Knight::toString()  {
    ostringstream stream;
    stream << fixed << setprecision(2) << height;
    return "Name: " + name + ", age: " + to_string(age) +
        ", height: " + stream.str() + ", weapons: " + weapons +
        ", alive: " + (alive ? "Yes" : "No");
}


Knight::~Knight() {
   
}
