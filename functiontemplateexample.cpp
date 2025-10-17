#include<iostream>
using namespace std;
template<typename T>
void Square(T x)
{
	cout<<x*x<<endl;
}
int main()
{
	Square(2);
	Square(23.5);
	Square(32.8f);
}
