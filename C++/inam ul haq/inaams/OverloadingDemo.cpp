#include <iostream>
using namespace std;

void Operation(int a, int b)
{
	cout<<"\nWelcome to Addition Operation!";
	int R = a + b;
	cout<<"\nResult : "<<R;
}

void Operation(int a, int b, float c)
{
	cout<<"\nWelcome to Addition of three Numbers : ";
	float R = a + b + c;
	cout<<"\nResult : "<<R;
}

void Operation(float a, int b)
{
	cout<<"\nWelcome to Multiplication Operation!";
	float R = a * b;
	cout<<"\nResult : "<<R;
}

void repchar(char='*', int=45); 

int main(int argc, char** argv) 
{
//	int x, y;
//	float z;
//	cout<<"Enter first value : ";
//	cin>>x;
//	cout<<"Enter second value : ";
//	cin>>y;
//	cout<<"Enter third value : ";
//	cin>>z;
//	
//	Operation(x, y);
//	Operation(z, y);
//	Operation(x, y, z);

	repchar();
	repchar('$');
	repchar('+', 90);
	repchar(101, 90);


	return 0;
}

void repchar(char ch, int n)
{
	for(int j=0; j<n; j++)
		cout << ch;
	cout << endl;
}