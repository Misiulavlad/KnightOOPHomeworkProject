#include "util.h"
class Knight {
public:
	string name;
	int age;
	double height;
	string weapons;
	bool alive;

	//constructor with arguments
	Knight(string nm, int ag, double ht, string weap, bool al)
		: name(nm), age(ag), height(ht), weapons(weap), alive(al) {
	}

	

	~Knight() {
	}

	void modifyKnight(Knight& knight) {
		knight.name = "Sir Braveheart";
		knight.age = 35;
		knight.height = 1.85;
		knight.weapons = "Longsword";
		knight.alive = true;
	}

	string toString() {
		string s = "Name: " + name;
		s += ", age: " + to_string(age);
		s += ", height: " + to_string(height);
		s += ", weapons: " + weapons;
		s += ", alive: ";
		s += (alive ? "Yes" : "No");
		return s;
	}
};

