#include "Group.h"

Group::Group() {
	count = 0;
	list = nullptr;
}


Group::Group(Knight* list, int count) {
	if (list != nullptr && count > 0) {
		list = new Knight[count];
		this->count = count;
		for (int i = 0; i < count; i++) {
			this->list[i] = list[i];
		}
	}
}

Group::~Group() {
	if (list != nullptr) {
		delete[] list;
	}
}

Knight Group::getKnight(int index) {
	if (index >= 0 && list != nullptr) {
		return list[index];
	}
	else {
		return;
	}
}

//void Group::add(Knight knight) {
//
//}


//void Group::remove(int index) {
//
//}


void Group::set(Knight st1, Knight st2) {

	for (int i = 0; i < count; i++) {

		if (st1.getName() == list[i].getName()
			&& st1.getAge() == list[i].getAge()
			&& st1.getAlive() == list[i].getAlive()) {
			list[i] = st2;
		}

	}

}


int Group::getCount() {
	return count;
}

void Group::setCount(int newCount) {
	count = newCount;
}

void Group::setList(Knight* newList) {

	if (list != nullptr) {
		delete[] list;
	}
	list = newList;
}

Knight* Group::getList() {
	return list;
}
string Group::toString() {
	string s = "";
	for (int i = 0; i < count; i++) {
		s += list[i].toString();
	}
	return s;
}
