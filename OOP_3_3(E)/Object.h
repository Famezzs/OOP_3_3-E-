//////////////////////////////////////////////////////////////
// Object.h
#pragma once
class Object
{
	static int count;
public:
	Object();
	~Object();
	int GetCount() const { return count; }
};