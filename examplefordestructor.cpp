#include<iostream>
using namespace std;
class sample
{
	public:
		sample()
		{
			cout<<"constructor is invoked"<<endl;
		}
		~sample()
		{
		 cout<<"Destructor is invoked"<<endl;
		}
};
int main()
{
	sample s1,s2,s3;
}
