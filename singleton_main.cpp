#include"singleton.h"
#include<iostream>
using namespace std;

int main()
{
	//singleton::create(50).show();
	singleton *ptr=singleton::create(50);
	ptr->show();
	ptr->setdata(40);
	ptr->show();
	

	
	return 0;
}
