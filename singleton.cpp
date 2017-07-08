#include<iostream>
#include<cstdio>
 using namespace std;
 
class singleton
{
	int data;
	static int count;
	public:
	static singleton * create(int d);	
	
	static int get(){return count;}
	
	void show(){cout <<"data is "<<data<<endl;}
	
	private:
	singleton(int d =0):data(d){cout <<"ctor of singleton";count++; cout <<"  "<<count <<endl;}
};
int singleton::count=0;


singleton* singleton::create(int d)
{
		if (singleton::get() ==0)
		{
			singleton obj(d);
			singleton *ptr=&obj;
			return ptr;
		}
		cout <<"instance cannot be created!!\n";
}


int main()
{
	singleton *p1,*p2;
	p1=singleton::create(10);
	p1->show();
	p2=singleton::create(0);
	p2->show();
	return 0;
}
