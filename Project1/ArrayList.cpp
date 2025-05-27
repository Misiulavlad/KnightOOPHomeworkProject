#include "ArrayList.h"
#include "Knights.h"
#include <sstream>

ArrayList::ArrayList() {
    size = 0;
    capacity = 2;
    array = new Knight * [capacity];
}

ArrayList::~ArrayList() {
    clear();
}

void ArrayList::resize() {
    capacity *= 2;
    Knight** newArray = new Knight * [capacity];

    for (int i = 0; i < size; i++) {
        newArray[i] = array[i];
    }

    delete[] array;
    array = newArray;
}

void ArrayList::add(const Knight& knight) {
    if (size == capacity) {
        resize();
    }

    array[size] = new Knight(knight);
    size++;
}

void ArrayList::remove(int index) {
    if (index < 0 || index >= size) return;

    delete array[index];

    for (int i = index; i < size - 1; i++) {
        array[i] = array[i + 1];
    }

    size--;
}

int ArrayList::getSize() const {
    return size;
}

Knight* ArrayList::get(int index) const {
    return (index >= 0 && index < size) ? array[index] : nullptr;
}

void ArrayList::set(const Knight& knight, int index) {
    if (index >= 0 && index < size) {
        *array[index] = knight;
    }
}

void ArrayList::clear() {
    for (int i = 0; i < size; i++) {
        delete array[i];
    }
    delete[] array;
    array = nullptr;
    size = 0;
    capacity = 2;
}

bool ArrayList::isEmpty() const {
    return size == 0;
}

string ArrayList::toString() const {
    if (size == 0) return "[]";

    ostringstream result;
    result << "[\n";
    for (int i = 0; i < size; i++) {
        result << array[i]->toString() << "\n";
    }
    result << "]";
    return result.str();
}
