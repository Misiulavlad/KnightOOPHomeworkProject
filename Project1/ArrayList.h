#pragma once
#include <string>

using namespace std;

class Knight; 

class ArrayList {
private:
    int size;
    int capacity;
    Knight** array;
    void resize();
public:
    ArrayList();
    ~ArrayList();

    void add(const Knight& knight);
    void remove(int index);
    int getSize() const;
    Knight* get(int index) const;
    void set(const Knight& knight, int index);
    void clear();
    bool isEmpty() const;
    string toString() const;
};