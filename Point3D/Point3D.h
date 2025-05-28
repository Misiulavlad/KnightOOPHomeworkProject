#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Point3D
{
private:
	int x;
	int y;
	int z;

	double length();
public:
	Point3D() :x(0), y(0), z(0) {}
	Point3D(int x, int y, int z) :x(x), y(y), z(z) {}

	int getX()const { return x; }
	void setX(int x) { this->x = x; }

	int getY()const { return y; }
	void setY(int y) { this->y = y; }

	int getZ()const { return z; }
	void setZ(int Z) { this->z = z; }

	string toString() {
		return "x = " + to_string(x)
			+ ", y = " + to_string(y)
			+ ", z = " + to_string(z);
	}

	Point3D sum(Point3D point);
	Point3D sum(int value);
	Point3D sub(Point3D point);
	Point3D sub(int value);
	Point3D minus();

	Point3D operator+(Point3D point);
	Point3D operator+(int value);
	Point3D operator-(Point3D point);
	Point3D operator-(int value);
	Point3D operator-();
	Point3D operator*(int value);
	Point3D operator/(int value);

	bool operator==(Point3D point);
	bool operator!=(Point3D point);
	bool operator>(Point3D point);
	bool operator<(Point3D point);
	bool operator>=(Point3D point);
	bool operator<=(Point3D point);
};

