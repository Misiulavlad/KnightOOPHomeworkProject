#include "util.h"
class Knight {
private:
	string name;
	int age;
	double height;
	string weapons;
	bool alive;
public:


	Knight() :Knight("nn", 20, 1.7, "nth", true) {}
	Knight(string nm) :Knight(nm, 10, 1.7, "nth", true) {}
	Knight(string nm, int age) : Knight(nm, age, 1.7, "nth", true) {}
	Knight(string nm, int age, double height, string weapons, bool alive)
		: name(nm), age(age), height(height), weapons(weapons), alive(alive) {
	}

	Knight(const Knight& knight) : Knight(knight.name, knight.age, knight.height, knight.weapons, knight.alive) {}



	~Knight();
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	double getHeight();
	void setHeight(double height);
	string getWeapons();
	void setWeapons(string weapons);
	bool getAlive() const { return alive; }
	void setAlive(bool al) { alive = al; }

	string toString();

};