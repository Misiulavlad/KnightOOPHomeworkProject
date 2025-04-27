#include "Knigths.h"
int main() {
	/*int count;
	cout << "Input count of knigths: ";
	cin >> count;

	Knight* knight = new Knight[count];
	for (int i = 0; i < count; i++) {
		cout << "Name: ";
		cin >> knight[i].name;
		cout << "Input age: ";
		cin >> knight[i].age;
		cout << "Input height: ";
		cin >> knight[i].height;
		cout << "Input weapon: ";
		cin >> knight[i].weapons;
		cout << "Input is alive y/n: ";
		char is_alive;
		cin >> is_alive;
		if (is_alive == 'y') {
			knight[i].alive = true;
		}
		else {
			knight[i].alive = false;

		}
		cout << endl;
	}
	int what_print;
	cout << "Input what to witdraw (1-age,2-height,3-weapon,4-alive): ";
	cin >> what_print;
	switch (what_print) {
	case 1:cout << "Knigths' ages: ";
		for (int i = 0; i < count; i++) {
			cout << knight[i].name << ": " << knight[i].age << endl;
		}
	break; case 2:
		cout << "Knigths' heigths:" << endl;
		for (int i = 0; i < count; i++) {
			cout << knight[i].name << ": " << (knight[i].height ? "alive" : "dead") << endl;
		}
		break;
	case 3:
		cout << "Knigths' weapons:" << endl;
		for (int i = 0; i < count; i++) {
			cout << knight[i].name << ": " << knight[i].weapons << endl;
		}
		break;
	case 4:
		cout << "Knigths' alive:" << endl;
		for (int i = 0; i < count; i++) {
			cout << knight[i].name << ": " << knight[i].alive << endl;
		}
		break;
	}

	cout << endl;*/
	string name;
	int age;
	double height;
	string weapons;
	bool alive;


	cout << "Input name of knight: ";
	cin >> name;
	cout << "Input age of knight: ";
	cin >> age;
	cout << "Input height of knight (in meters): ";
	cin >> height;
	cout << "Input weapon (for example: knife, sword): ";
	cin >> weapons;
	cout << "Input alive or not (1-yes, 0-no): ";
	cin >> alive;



	Knight knight(name, age, height, weapons, alive);

	cout << "Before modification: " << knight.toString() << endl;

	knight.modifyKnight(knight);

	cout << "After: " << knight.toString() << endl << endl;

	Knight kn;
	cout << "Default constructor..." << endl << kn.toString() << endl << endl;

	Knight kn1(name);
	cout << kn1.toString() << endl << endl;


	Knight kn2(name, age);
	cout << kn2.toString() << endl << endl;
	//delete[] knight;
	return 0;
}