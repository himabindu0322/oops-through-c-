#include<iostream>
using namespace std;
class Demo
{
	private:
		int x;
	void get()
	{
		x=80;
	}
	friend void sum();
};
void sum()
{
	int y=33;
	Demo d;
	d.get();
	cout<<"Addition of x and y is = "<<d.x+y;
}
int main()
{
	sum();
}

