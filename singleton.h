#ifndef SINGLETON_HEADER

#define SINGLETON_HEADER
/*
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
*/
class singleton
{
	int data_;
	static singleton * ptr;
	singleton(int d);               //ctr
	singleton(const singleton&); // cpy ctr 
	
	
	public:
		static singleton* create(int);
		void show();
		void setdata(int);
};


#endif
