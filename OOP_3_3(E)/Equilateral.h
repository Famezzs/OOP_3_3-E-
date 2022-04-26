//////////////////////////////////////////////////////////////
// Equilateral.h
#pragma once
#include "Triangle.h"
class Equilateral :
	public Triangle
{
private:
	double area;
public:
	Equilateral();
	Equilateral(double);
	Equilateral(const Equilateral&);
	Equilateral(const Triangle&);
	double GetArea() const { return area; };
	double FindArea() const;
	friend ostream& operator << (ostream&, const Equilateral&);
	friend istream& operator >> (istream&, Equilateral&);
	operator string() const;
	Equilateral& operator = (const Equilateral&);
	Equilateral& operator ++();
	Equilateral operator ++(int);
	Equilateral& operator --();
	Equilateral operator --(int);
};