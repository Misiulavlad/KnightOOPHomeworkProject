#pragma once
#include "Knights.h"
class Weapons : public Knight
{
public:
	double weight;
	int rarity;



	Weapons();
	Weapons(string name,int age,double height,bool alive,string weapons,int rarity,double weight);
	Weapons(const Weapons& weapons);
	~Weapons();

	double getWeight();
	void setWeight(double weight);
	
	int getRarity();
	void setRarity(int rarity);

	string toString();
};

