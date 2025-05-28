#include "Point3D.h"
Point3D Point3D::sum(Point3D point) {
	return Point3D(x + point.x, y + point.y, z + point.z);
}

Point3D Point3D::sum(int value) {
	return Point3D(x + value, y + value, z + value);
}

Point3D Point3D::sub(Point3D point) {
	return Point3D(x - point.x, y - point.y, z - point.z);

}

Point3D Point3D::sub(int value) {
	return Point3D(x - value, y - value, z - value);

}
Point3D Point3D::minus() {
	return Point3D(-x, -y, -z);
}

double Point3D::length() {
	return sqrt(x * x + y * y + z * z);
}


Point3D Point3D::operator+(Point3D point) {
	return sum(point);
}

Point3D Point3D::operator+(int value) {
	return sum(value);
}

Point3D Point3D::operator-(Point3D point) {
	return sub(point);
}

Point3D Point3D::operator-(int value) {
	return sub(value);
}

Point3D Point3D::operator-() {
	return minus();
}

Point3D Point3D::operator*(int value) {
	return Point3D(x * value, y * value, z * value);
}

Point3D Point3D::operator/(int value) {
	return Point3D(x / value, y / value, z / value);

}

bool Point3D::operator==(Point3D point) {
	return x == point.x, y == point.y, z == point.z;
}

bool Point3D::operator!=(Point3D point) {
	return !(*this==point);
}

bool Point3D::operator>(Point3D point) {
	return length() > point.length();
}

bool Point3D::operator<(Point3D point) {
	return !(*this >= point);
}

bool Point3D::operator>=(Point3D point) {
	return length() >= point.length();

}

bool Point3D::operator<=(Point3D point) {
	return !(*this <= point);
}