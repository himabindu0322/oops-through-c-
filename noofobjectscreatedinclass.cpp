//No of objects created for an class
#include<iostream>
using namespace std;
class Sample
{
	public:
		static int count;
		Sample()
		{
			count++;
		}
};
int Sample::count=0;
int main()
{
	Sample a,b,c;
	cout<<"Number of objects in class: "<<Sample::count<<endl;
	return 0;
}
