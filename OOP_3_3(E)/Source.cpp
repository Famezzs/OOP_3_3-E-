//////////////////////////////////////////////////////////////
// Source.cpp
#include "Equilateral.h"

int main()
{
	Triangle a;
	Equilateral b;

	cout << "Triangle :\n";
	cin >> a;
	cout << a;

	cout << "\nEquilateral :\n";
	cin >> b;
	cout << b;

	cout << "\n++Triangle :\n";
	cout << ++a;

	cout << "\n++Equilateral :\n";
	cout << ++b;

	return 0;
}