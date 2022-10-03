#pragma once
#include<iostream>
#include <string>
using namespace std;
class Fraction
{
private:
	int x;
	unsigned int y;
public:
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
	bool Init(double x, int y);
	void Display() const;
	void Read();
	static double sumStatic(Fraction o1, Fraction o2);
	static double productionStatic(Fraction o1, Fraction o2);
	friend double sumFriend(Fraction o1, Fraction o2);
	friend double productionFriend(Fraction o1, Fraction o2);
	double sumWithThis(Fraction o);
	double productionWithThis(Fraction o);
	string toString();

};

