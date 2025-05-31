#include <iostream>

using namespace std;

class employee
{
	private:
		int age;
		int sal;
		int scale;
	public:
		employee()
		{
			age = 1;
			sal = 1;
			scale = 1;
		}
		void setData(int a, int s, int sc)
		{
			age = a;
			sal = s;
			scale = sc;
		}
		
		void showData()
		{
			cout<<"\nEmployee Age  : "<<age;
			cout<<"\nEmployee Sal  : "<<sal;
			cout<<"\nEmployee Scal : "<<scale;
		}
};



int main(int argc, char** argv)
{
	int X = 10;
	
//	cout<<"X = "<<X;
//	cout<<"\n&X = "<<&X;
	
//	int *ptr;
//	ptr = &X;
//
//	cout<<"\nInitial X Value";
//	cout<<"\nX = "<<X;
//	cout<<"\n*ptr = "<<*ptr;
//	
//	cout<<"\nptr = "<<ptr;
//	cout<<"\n&X = "<<&X;
//	
//	X++;
//	cout<<"\n\nAfter X++";
//	cout<<"\nX = "<<X;
//	cout<<"\n*ptr = "<<*ptr;
//
//	(*ptr)++;
//	cout<<"\n\nAfter (*ptr)++";
//	cout<<"\nX = "<<X;
//	cout<<"\n*ptr = "<<*ptr;

//	employee e1;
//	e1.showData();
	
	employee *emp;
	int *intPtr;
	//cout<<emp;
	intPtr = new int;
	*intPtr = 45;
	cout<<"Value of my Boat in Ocean : "<<*intPtr;
	
	emp = new employee();
	emp->setData(25,50000,15);
	cout<<"First:\n";
	emp->showData();
	cout<<"\n\n";
	delete emp;
	emp = new employee();
	cout<<"Second Show:\n";
	emp->showData();
	
	
	


	
	
	
	return 0;
}