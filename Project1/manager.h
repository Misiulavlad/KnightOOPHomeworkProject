#pragma once

class Knight;
#include "ArrayList.h"

class Manager {
public:
    Knight getOldestKnight(const ArrayList& knightsList);
};