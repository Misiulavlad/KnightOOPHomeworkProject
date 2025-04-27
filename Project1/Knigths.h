#include "util.h"
class Knight {
public:
	string name;
	int age;
	double height;
	string weapons;
	bool alive;

	Knight() :Knight("nn",20,1.7,"nth",true){	
	}

	Knight(string nm) {
		cout << "Constructor with one argument..." << endl;
		 name = nm;
		 age = 0;
		 height = 0.0;
		 weapons = "nth";
		 alive = true;
	}

	Knight(string nm, int ag) {
		cout << "Constructor with two arguments..." << endl;
		name = nm;
		age=ag;
		height = 0.0;
		weapons = "nth";
		alive = false;
	}

	
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

