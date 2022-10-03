#include "Fraction.h"

bool Fraction::Init(double x, int y)
{
	if (y >= 0) {
		this->x = x;
		this->y = y;
		return true;
	}

	return false;
}

void Fraction::Display() const
{
	if (y < 0)cout << "Incorect data" << endl;
	else cout << "whole part = " << x << " fractional part = " << y << endl;

}

void Fraction::Read()
{
	double x;
	int y;
	do
	{
		cout << "Input value:" << endl;
		cout << " whole part = "; cin >> x;
		cout << " fractional part = "; cin >> y;
	} while (!Init(x, y));
}




double Fraction::sumStatic(Fraction o1, Fraction o2)
{
	
	double c = o1.getY();
	while ((c /= 10) > 1);
	double first = o1.getX()+c;

	c = o2.getY();
	while ((c /= 10) > 1);
	double second = o2.getX()+c;
	return first+second;
}

double Fraction::productionStatic(Fraction o1, Fraction o2)
{
	double c = o1.getY();
	while ((c /= 10) > 1);
	double first = o1.getX() + c;

	c = o2.getY();
	while ((c /= 10) > 1);
	double second = o2.getX() + c;
	return first*second;
}

double sumFriend(Fraction o1, Fraction o2)
{
	double c = o1.getY();
	while ((c /= 10) > 1);
	double first = o1.getX() + c;

	c = o2.getY();
	while ((c /= 10) > 1);
	double second = o2.getX() + c;
	return first + second;
}

double productionFriend(Fraction o1, Fraction o2)
{
	double c = o1.getY();
	while ((c /= 10) > 1);
	double first = o1.getX() + c;

	c = o2.getY();
	while ((c /= 10) > 1);
	double second = o2.getX() + c;
	return first * second;
}

double Fraction::sumWithThis(Fraction o) {
	double c = this->getY();
	while ((c /= 10) > 1);
	double first = this->getX() + c;

	c = o.getY();
	while ((c /= 10) > 1);
	double second = o.getX() + c;
	return first + second;
}

double Fraction::productionWithThis(Fraction o) {
	double c = this->getY();
	while ((c /= 10) > 1);
	double first = this->getX() + c;

	c = o.getY();
	while ((c /= 10) > 1);
	double second = o.getX() + c;
	return first * second;
}


string Fraction::toString()
{
	return string(to_string(x) + "." + to_string(y));
}