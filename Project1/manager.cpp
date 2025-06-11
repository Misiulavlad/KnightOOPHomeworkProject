//#include "Manager.h"
//#include "Knights.h"
//
//Knight Manager::getOldestKnight(const ArrayList& knightsList) {
//    if (knightsList.isEmpty()) {
//        return Knight();
//    }
//
//    Knight* oldest = knightsList.get(0);
//
//    for (int i = 1; i < knightsList.getSize(); i++) {
//        Knight* currentKnight = knightsList.get(i);
//        if (currentKnight && currentKnight->getAge() > oldest->getAge()) {
//            oldest = currentKnight;
//        }
//    }
//
//    return *oldest;
//}