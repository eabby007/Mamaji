#include<iostream>
#include<cstdio>
using namespace std;


class singleton
{
	int data;
	public:
	static int count;
	friend singleton create(int d);	
	void show(){cout<<"data is"<<data<<endl;}
	private:
	singleton(int d =0):data(d){cout <<"ctor of singleton\n";count++;}
};

int singleton::count =0;

singleton create(int d)
{
		if (singleton::count ==0)
		{
			return singleton(d);
		}
		else
		cout <<"instance cannot be created!!\n";

}

int main()
{
	create(10).show();
	create(5).show();
	
}
