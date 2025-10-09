//Employee info using default arguments
#include<iostream>
using namespace std;
class employee
{
	private:
		 string name;
		 int eid;
		 float sal;
    public:
    	void get()
    	{
    		cout<<"Enter Name";
    		cin>>name;
    		cout<<"Enter Id";
    		cin>>eid;
    		cout<<"Enter Salary";
    		cin>>sal;
		}
		void show()
		{
			cout<<"Employee Name="<<name<<endl;
			cout<<"Employee Id="<<eid<<endl;
			cout<<"Salary="<<sal<<endl;
		}
};
int main()
{
	employee e1,e2;
	e1.get();
	e2.get();
	cout<<"Details of Employee 1:"<<endl;
	e1.show();
	cout<<"Details of Employee 2:"<<endl;
	e2.show();
	//using arrays 
	//employee e[10];
	//for(int i=0;i<3;i++)
	//e[i].get();
	//cout<<"Details of employee:"<<endl;
	//for(int i=0;i<3;i++)
	//e[i].show();
	return 0;
}
