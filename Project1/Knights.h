#pragma once
#include "util.h"
#include "ArrayList.h"
#include <string>

using namespace std;

class Knight {
private:
    string name;
    int age;
    double height;
    string weapons;
    bool alive;
public:
    Knight();
    Knight(string nm, int age, double height, string weapons, bool alive);
    Knight(const Knight& knight);
    ~Knight();

    string getName() const;
    void setName(string name);
    int getAge() const;
    void setAge(int age);
    double getHeight() const;
    void setHeight(double height);
    string getWeapons() const;
    void setWeapons(string weapons);
    bool getAlive() const;
    void setAlive(bool al);

    string toString() const;
};

class KnightManager {
private:
    ArrayList knightsList;
public:
    void addKnight(const Knight& knight);
    void removeKnight(int index);
    string listKnights() const;
    Knight getOldestKnight() const;
};
