//////////////////////////////////////////////////////////////
// Triangle.h
#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include "Object.h"
#define Pi 4 * atan(1)

using namespace std;

class Triangle
	:public Object
{
private:
	double A;
	double B;
	double C;
public:
	Triangle();
	Triangle(double, double, double);
	Triangle(const Triangle&);
	double GetA() const { return A; }
	double GetB() const { return B; }
	double GetC() const { return C; }
	void SetA(const double);
	void SetB(const double);
	void SetC(const double);
	double GetAlpha() const;
	double GetBeta() const;
	double GetGamma() const;
	double GetPerimeter() const;
	friend ostream& operator << (ostream&, const Triangle&);
	friend istream& operator >> (istream&, Triangle&);
	operator string() const;
	Triangle& operator = (const Triangle&);
	Triangle& operator ++();
	Triangle operator ++(int);
	Triangle& operator --();
	Triangle operator --(int);
};