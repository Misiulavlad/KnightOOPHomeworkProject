#include"Knigths.h"
int main() {
	int count;
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
	delete[] knight;
	return 0;
}