//////////////////////////////////////////////////////////////
// Triangle.cpp
#include "Triangle.h"

using std::string;

Triangle::Triangle() 
	:Object(), A(1), B(1), C(1) {}

Triangle::Triangle(double a, double b, double c)
	:Object()
{
	if (a > 0 && b > 0 && c > 0 && a > abs(b - c) && a < (b + c) && b > abs(a - c) && b < (a + c) && c > abs(a - b) && c < (a + b))
	{
		A = a;
		B = b;
		C = c;
	}
	else
	{
		A = 1;
		B = 1;
		C = 1;
	}
}

Triangle::Triangle(const Triangle& cpy)
	:Object()
{
	A = cpy.A;
	B = cpy.B;
	C = cpy.C;
}

void Triangle::SetA(const double x) { A = x; }
void Triangle::SetB(const double x) { B = x; }
void Triangle::SetC(const double x) { C = x; }
double Triangle::GetAlpha() const { return acos((B * B + C * C - A * A) / (2. * B * C)) * 180 / (Pi); }
double Triangle::GetBeta() const { return acos((A * A + C * C - B * B) / (2. * A * C)) * 180 / (Pi); }
double Triangle::GetGamma() const { return acos((B * B + A * A - C * C) / (2. * B * A)) * 180 / (Pi); }
double Triangle::GetPerimeter() const { return A + B + C; }

ostream& operator << (ostream& out, const Triangle& to_out)
{
	out << string(to_out) << endl;
	return out;
}

istream& operator >> (istream& in, Triangle& to_in)
{
	do
	{
		cout << "Enter a value to be used as length for:\n side A\nA = "; in >> to_in.A;
		cout << "side B\nB = "; cin >> to_in.B;
		cout << "side C\nC = "; cin >> to_in.C;
	} while (!(to_in.A > 0 && to_in.B > 0 && to_in.C > 0 && to_in.A > abs(to_in.B - to_in.C) && to_in.A <
		(to_in.B + to_in.C) && to_in.B > abs(to_in.A - to_in.C) && to_in.B < (to_in.A + to_in.C) && to_in.C >
		abs(to_in.A - to_in.B) && to_in.C < (to_in.A + to_in.B)));

	return in;
}

Triangle::operator string() const
{
	stringstream sout;
	sout << "A = " << A << " , B = " << B << " , C = " << C
		<< ", Alpha = " << GetAlpha() << ", Beta = " << GetBeta()
		<< ", Gamma = " << GetGamma() << ", Perimeter = " << GetPerimeter()
		<< ", Count = " << GetCount();

	return sout.str();
}

Triangle& Triangle::operator=(const Triangle& cpy)
{
	if (&cpy == this) return *this;
	A = cpy.A;
	B = cpy.B;
	C = cpy.C;

	return *this;
}

Triangle& Triangle::operator++()
{
	A++; B++; C++;
	return *this;
}

Triangle Triangle::operator++(int)
{
	Triangle tmp(*this);
	A++; B++; C++;
	return tmp;
}

Triangle& Triangle::operator--()
{
	if (A > 1)
		A--;
	if (B > 1)
		B--;
	if (C > 1)
		C--;

	return *this;
}

Triangle Triangle::operator--(int)
{
	Triangle tmp(*this);
	if (A > 1)
		A--;
	if (B > 1)
		B--;
	if (C > 1)
		C--;

	return tmp;
}