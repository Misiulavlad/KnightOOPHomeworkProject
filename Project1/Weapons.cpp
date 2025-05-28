#include "Weapons.h"
Weapons::Weapons() :Weapons("nn", 0, 0.0, false, "nth", 0, 0.0) {
	cout << "Weapons default constructor."<<endl;
}

Weapons::Weapons(string name, int age, double height, bool alive, string weapons, int rarity, double weight) {
	this->rarity = rarity;
	this->weight = weight;
}

Weapons::Weapons(const Weapons& weapons):Knight(weapons) {
	this->rarity = rarity;
	this->weight = weight;
}

Weapons::~Weapons() {
	cout << "Weapons default destructor."<<endl;
}

double Weapons::getWeight() {
	return weight;
}
void Weapons::setWeight(double weight) {
	this->weight = weight;
}

int Weapons::getRarity() {
	return rarity;
}
void Weapons::setRarity(int rarity) {
	this->rarity = rarity;
}

string Weapons::toString() {
	string s = "";
	s += to_string(weight)
		+ ", " + to_string(rarity);
	return Knight::toString() + s;
}