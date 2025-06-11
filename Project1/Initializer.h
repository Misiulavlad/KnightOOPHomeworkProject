#pragma once
#include "ICombatant.h"

class Initializer {
private:
    ICombatant** members;
    int size;
    int capacity;
    void resize();

public:
    Initializer();
    ~Initializer();

    void add(ICombatant* c);
    ICombatant* get(int index) const;
    int getSize() const;
    ICombatant* getStrongest() const;
};
