//area of rectangle using parameterized constructor
#include<iostream>
using namespace std;
class Rectangle
{
	private:
		float length,breadth ;
	public:
		Rectangle(float l,float b) 
		{ 
		// make constructor public
			length=l;
			breadth=b;
		}
		float area() 
		{ 
		// make area() public
		 cout<<"Area of Rectangle="<<length*breadth;
			//return length*breadth;
		}
		
};

int main() {
	Rectangle r(10.5,5.5);  // correct way to create an object
	r.area();  // call public method
	return 0;
}
