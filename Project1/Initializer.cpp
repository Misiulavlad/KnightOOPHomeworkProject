#include "Initializer.h"
void Initializer::init(Knight*& list, int count) {
	if (list == nullptr && count > 0) {
		list = new Knight[count];
	}
	string names[]{ "Matthew","Vlad","Artem",
		"Viktor","Ivan","Alex" };

	string weapons[]{ "Knife","Sword","dagger","mace",
	"spear","saber","machete","axe","pitchfork" };

	int minAge = 20;
	int maxAge = 80;

	double minHeight = 1.70;
	double maxHeight = 2.00;

	for (int i = 0; i < count; i++) {
		list[i].setName(names[rand() % 6]);
		list[i].setAge(rand() % (maxAge - minAge + 1) + minAge);
		list[i].setWeapons(weapons[rand() % 9]);
		double rawHeight = minHeight + static_cast<double>(rand()) / RAND_MAX * (maxHeight - minHeight);
		list[i].setHeight(floor(rawHeight * 100) / 100);

	}
};