#include "Initializer.h"

Initializer::Initializer() : size(0), capacity(2) {
    members = new ICombatant * [capacity];
}

Initializer::~Initializer() {
    for (int i = 0; i < size; i++) {
        delete members[i];
    }
    delete[] members;
}

void Initializer::resize() {
    capacity *= 2;
    ICombatant** newMembers = new ICombatant * [capacity];
    for (int i = 0; i < size; i++) {
        newMembers[i] = members[i];
    }
    delete[] members;
    members = newMembers;
}

void Initializer::add(ICombatant* c) {
    if (size == capacity) resize();
    members[size++] = c;
}

ICombatant* Initializer::get(int index) const {
    return (index >= 0 && index < size) ? members[index] : nullptr;
}

int Initializer::getSize() const { return size; }

ICombatant* Initializer::getStrongest() const {
    if (size == 0) return nullptr;
    ICombatant* strongest = members[0];
    for (int i = 1; i < size; i++) {
        if (*strongest < *members[i]) {
            strongest = members[i];
        }
    }
    return strongest;
}