#pragma once
#include <string>
using namespace std;

class ICombatant {
public:
    virtual string getName() const = 0;
    virtual bool isAlive() const = 0;
    virtual int powerLevel() const = 0;
    virtual string toString() const = 0;
    virtual ~ICombatant() {}

    bool operator<(const ICombatant& other) const {
        return powerLevel() < other.powerLevel();
    }

    bool operator>(const ICombatant& other) const {
        return powerLevel() > other.powerLevel();
    }

    bool operator==(const ICombatant& other) const {
        return getName() == other.getName() && isAlive() == other.isAlive();
    }
};