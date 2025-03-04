#include <iostream>
using namespace std;

void greetings(){
	cout<<"Hello World!";
}
void AddNums(int&,int);//function prototype /declaration
int num(){
	return 6;
}
int main(){
	
	int n1,n2;
	cout<<"Enter n1: ";
	cin>>n1;
	cout<<"Enter n2: ";
	cin>>n2;
	AddNums(n1,n2);
	int two = num();
	return 0;
}
void AddNums(int &x,int y){
	int r = x+y;
	cout<<"The sum of "<<x<<" and "<<y<<" is "<<r;
}