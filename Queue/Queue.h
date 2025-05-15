#include <iostream>
#include <string>
using namespace std;
class Queue
{
private:
	int size;
	int* queue;
public:

	Queue();
	~Queue();

	void enqueue(int element);
	int dequeue();

	int peek();

	int getSize();
	bool isEmpty();

	string toString();
};

