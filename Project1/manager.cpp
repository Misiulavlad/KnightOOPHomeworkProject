#include "manager.h"
Knight Manager::getOldestKnight(Knight* list, int count) {
    if (count == 0) return Knight();
    Knight oldest = list[0]; 
    for (int i = 1; i < count; i++) {
        if (list[i].getAge() > oldest.getAge()) {
            oldest = list[i]; 
        }
    }
    return oldest;
}
