#include<iostream>
#include<cstdio>
#include<cstdlib>
#include"singleton.h"

using namespace std;


	singleton * singleton::ptr=NULL;

	singleton::singleton(int data):data_(data){cout <<"the ctor is invoked !! \n\n";}

	singleton* singleton::create(int data)
	{
		if(ptr==NULL)
		{
			ptr=new singleton(data);
			cout<<"instance has been initialised!! \n";
		}
			return ptr;
	}
	
		
	void singleton::show()
	{
		cout <<"data is "<<data_<<endl;
	}
		
		
	void singleton::setdata(int data)
	{
		data_=data;
	}

