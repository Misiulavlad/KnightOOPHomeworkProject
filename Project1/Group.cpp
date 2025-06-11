//#include "Group.h"
//using namespace std;
//
//Group::Group() {
//    count = 0;
//    list = nullptr;
//}
//
//Group::Group(Knight* inputList, int count) {
//    if (inputList != nullptr && count > 0) {
//        this->count = count;
//        list = new Knight[count];
//        for (int i = 0; i < count; i++) {
//            list[i] = inputList[i];
//        }
//    }
//    else {
//        this->count = 0;
//        list = nullptr;
//    }
//}
//
//Group::Group(const Group& other) {
//    count = other.count;
//    list = new Knight[count];
//    for (int i = 0; i < count; i++) {
//        list[i] = other.list[i];
//    }
//}
//
//Group& Group::operator=(const Group& other) {
//    if (this != &other) {
//        if (list != nullptr) {
//            delete[] list;
//        }
//        count = other.count;
//        list = new Knight[count];
//        for (int i = 0; i < count; i++) {
//            list[i] = other.list[i];
//        }
//    }
//    return *this;
//}
//
//Group::~Group() {
//    if (list != nullptr) {
//        delete[] list;
//    }
//}
//
//Knight Group::getKnight(int index) {
//    if (index >= 0 && index < count && list != nullptr) {
//        return list[index];
//    }
//    return Knight("Unknown", 0, 0.0, "None", false);
//}
//
//void Group::add(Knight knight) {
//    Knight* newList = new Knight[count + 1];
//    for (int i = 0; i < count; i++) {
//        newList[i] = list[i];
//    }
//    newList[count] = knight;
//    if (list != nullptr) {
//        delete[] list;
//    }
//    list = newList;
//    count++;
//}
//
//void Group::remove(int index) {
//    if (index < 0 || index >= count || list == nullptr) return;
//    Knight* newList = new Knight[count - 1];
//    int pos = 0;
//    for (int i = 0; i < count; i++) {
//        if (i != index) {
//            newList[pos++] = list[i];
//        }
//    }
//    delete[] list;
//    list = newList;
//    count--;
//}
//
//void Group::set(Knight st1, Knight st2) {
//    for (int i = 0; i < count; i++) {
//        if (list[i].getName() == st1.getName() &&
//            list[i].getAge() == st1.getAge() &&
//            list[i].getAlive() == st1.getAlive()) {
//            list[i] = st2;
//        }
//    }
//}
//
//int Group::getCount() {
//    return count;
//}
//
//void Group::setCount(int newCount) {
//    count = newCount;
//}
//
//void Group::setList(Knight* newList) {
//    if (list != nullptr) {
//        delete[] list;
//    }
//    list = newList;
//}
//
//Knight* Group::getList() {
//    return list;
//}
//
//string Group::toString() {
//    string result = "";
//    for (int i = 0; i < count; i++) {
//        result += list[i].toString() + "\n";
//    }
//    return result;
//}