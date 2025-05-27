#include "Knights.h"
class ArrayList:public Knight{	
public:
	int size;
	int* array;

	ArrayList();
	~ArrayList();

	void add(int kn);
	void remove(int index);
	int getSize();
	int get(int size, int index);

	void set(int kn, int index);

	void clear();
	bool isEmpty();

	string toString();
};

