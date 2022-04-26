//////////////////////////////////////////////////////////////
// Object.cpp
#include "Object.h"

int Object::count = 0;

Object::Object()
{
	count++;
}

Object::~Object()
{
	count--;
}