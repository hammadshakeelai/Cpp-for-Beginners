#include<iostream>
#include <typeinfo>

using namespace std;

double divide(double a,double b)
{
	cout<<typeid(a/b).name()<<endl;
	return a/b;
}
int divide(int a,int b)
{
	cout<<typeid(a/b).name()<<endl;
	return a/b;
}
double divide(double a,int b)
{
	cout<<typeid(a/b).name()<<endl;
	return a/b;
}
double divide(int a,double b)
{
	cout<<typeid(a/b).name()<<endl;
	return a/b;
}
int main()
{
	cout<<divide(5.0,2)<<endl;
	cout<<typeid(divide(5.0,2)).name()<<endl;
	
	cout<<divide(4,2.9)<<endl;
	cout<<typeid(divide(4,2.9)).name();
	
return 0;
}