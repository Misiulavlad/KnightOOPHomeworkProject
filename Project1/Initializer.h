#include "Knigths.h"
class Initializer {
public:
	void init(Knight*& list, int count) {
		if (list == nullptr && count > 0) {
			list = new Knight[count];
		}
		string names[]{ "Matthew","Vlad","Artem",
			"Viktor","Ivan","Alex" };

		int minAge = 20;
		int maxAge = 80;

		double minHeight = 1.70;
		double maxHeight = 2.00; 

		for (int i = 0; i < count; i++) {
			list[i].name = names[rand() % 6];
			list[i].age = rand() % (maxAge - minAge + 1) + minAge;
			double rawHeight = minHeight + static_cast<double>(rand()) / RAND_MAX * (maxHeight - minHeight);
			list[i].height = floor(rawHeight * 100) / 100;



		}
	}

};