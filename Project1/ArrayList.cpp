#include "ArrayList.h"
ArrayList::ArrayList() {
	size = 0;
	array = nullptr;
}

ArrayList::~ArrayList() {
	if (array != nullptr) {
		delete[] array;
	}
}

void ArrayList::add(int kn) {
	if (array != nullptr) {
		int* newArray = new int[size + 1];

		for (int i = 0; i < size; i++) {
			newArray[i] = array[i];
		}

		delete[] array;

		array = newArray;
		size++;
	}
	else {
		array = new int[1];
		array[0] = kn;
		size = 1;
	}
}

void ArrayList::remove(int index) {

	if (index < 0 || index >= size) return;

	int* newArray = new int[size - 1];

	for (int i = 0, j = 0; i < size; i++) {
		if (i != index) {
			newArray[j++] = array[i];
		}
	}

	delete[] array;
	array = newArray;
	size--;

}
int ArrayList::getSize() {
	return size;
}
int ArrayList::get(int size, int index) {
	if (index < 0 || index >= size) {

	}
	return array[index];
}

void ArrayList::set(int kn, int index) {
	if (index < 0 || index >= size) {

	}
	array[index] = kn;
}

void ArrayList::clear() {
	delete[] array;
	array = nullptr;
	size = 0;
}
bool ArrayList::isEmpty() {
	return size ==0;
}

string ArrayList::toString() {
	if (size == 0) return "[]";

	string result = "[";
	for (int i = 0; i < size; i++) {
		result += to_string(array[i]);
		if (i < size - 1) {
			result += ", ";
		}
	}
	result += "]";
	return result;
}
