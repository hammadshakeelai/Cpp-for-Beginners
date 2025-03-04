#include<iostream>
using namespace std;
int calculate(int num1,int num2,char operator_ ='+'){
	switch(operator_)
	{
		case '+':
			return (num1+num2);
			break;
		case '-':
			return (num1-num2);
			break;
		case '/':
			return (num1/num2);
			break;
		case '%':
			return (num1%num2);
			break;
		case '*':
			return (num1*num2);
			break;
		default:
			cout<<"Invalid Operator.";
			break;
			
	}
}
int main(){
	int a,b;
	char c;
	cout<<"Enter num a: ";
	cin>>a;
	cout<<"Enter num b: ";
	cin>>b;
	cout<<"Enter Operator: ";
	cin>>c;
	
	int answer = calculate(a,b,c);
	cout<<a<<" "<<c<<" "<<b<<" = "<<answer;
	
	
	return 0;
}