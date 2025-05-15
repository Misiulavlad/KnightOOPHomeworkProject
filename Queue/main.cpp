#include "Queue.h"

int main() {
	Queue queue;
	int element;

	cout << "Input elements (to exit print 0): ";
	do {
		cin >> element;
		if (element != 0) {
			queue.enqueue(element);
		}

	} while (element != 0);

	cout << "Queue: " << endl;
	while (!queue.isEmpty()) {
		cout << queue.dequeue() << " ";
	}


	return 0;
}