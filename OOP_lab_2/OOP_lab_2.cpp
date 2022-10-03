#include <iostream>
#include <string>
#include "Fraction.h"
using namespace std;

int main()
{   
	Fraction a;
	a.setX(12);
	a.setY(123);
	a.Display();
	Fraction b;
	b.Read();
	b.Display();
	cout << a.toString() << endl;
	cout << b.toString() << endl;
	cout << Fraction::sumStatic(a, b) << endl;
	cout << Fraction::productionStatic(a, b) << endl;
	cout << "~~~~~" << endl;
	cout << sumFriend(a, b) << endl;
	cout << productionFriend(a, b) << endl;
	cout << "~~~~~" << endl;
	cout << a.sumWithThis(b) << endl;
	cout << a.productionWithThis(b) << endl;
	
}


