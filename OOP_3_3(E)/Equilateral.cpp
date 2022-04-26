//////////////////////////////////////////////////////////////
// Equilateral.cpp
#include "Equilateral.h"

Equilateral::Equilateral()
	:Triangle(), area(FindArea()) {}

Equilateral::Equilateral(double a)
	: Triangle(a, a, a), area(FindArea()) {}

Equilateral::Equilateral(const Equilateral& cpy)
	: Triangle(cpy), area(cpy.area) {}

Equilateral::Equilateral(const Triangle& cpy)
	: Triangle(cpy), area(FindArea()) {}

double Equilateral::FindArea() const
{
	return sqrt(3) / 4 * GetA() * GetA();
}

ostream& operator << (ostream& out, const Equilateral& to_out)
{
	out << string(to_out) << endl;
	return out;
}

istream& operator >> (istream& in, Equilateral& to_in)
{
	double a = 1;
	do
	{
		cout << "A = "; in >> a;
	} while (a <= 0);

	to_in.SetA(a);
	to_in.SetB(a);
	to_in.SetC(a);
	to_in.area = to_in.FindArea();

	return in;
}

Equilateral::operator string() const
{
	stringstream sout;
	sout << Triangle::operator string() << ", Area = " << area;
	return sout.str();
}

Equilateral& Equilateral::operator=(const Equilateral& cpy)
{
	Triangle::operator=(cpy);
	area = cpy.area;
	return *this;
}

Equilateral& Equilateral::operator++()
{
	Triangle::operator++();
	area = FindArea();
	return *this;
}

Equilateral Equilateral::operator++(int)
{
	Equilateral tmp(*this);
	Triangle::operator++();
	area = FindArea();
	return tmp;
}

Equilateral& Equilateral::operator--()
{
	Triangle::operator--();
	area = FindArea();
	return *this;
}

Equilateral Equilateral::operator--(int)
{
	Equilateral tmp(*this);
	Triangle::operator--();
	area = FindArea();
	return tmp;
}