#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include <cassert>
#include <cstring>

using namespace std;
template <class T>

class Vector
{
private:
	T * dat;
	int size;
	int maxcap;
	static int delta_cap;
	
public:
	
	Vector(int size=0);
	Vector(const Vector & v);
	virtual ~Vector();
	void push_back(const T & a);
	void reserve(int cap);
	T & operator[] (int i);
	int get_size();
};
#include "my_vector.inl"
#endif
