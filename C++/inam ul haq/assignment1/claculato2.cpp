#include <iostream>
using namespace std;
int main() {
	int n1,n2;
	float result;
	cout<<"\nEnter Value for n1: ";
	cin>>n1;
	cout<<"\nEnter Value for n2: ";
	cin>>n2;
	char op;
	cout<<"\nWhich Operation you want to perform(+,/,*,-): ";
	cin>>op;
	if (op=='+')
	{
		result = n1 + n2;
	}
	else if (op=='-')
	{
		result = n2 - n1;
	}
	else if (op=='*')
	{
		result = n1 * n2;
	}
	else if (op=='/')
	{
		float N1,N2;
		N1=n1;
		N2=n2;
		result =N2/N1 ;
	}
	else 
	{
		cout<<"\nYour Operator is Not Valid, Try Again.";
	}
	cout<<"\n";
	if (op=='+' || op=='*')
	cout<<n1<<" "<<op<<" "<<n2<<" = "<<result;
	else
	cout<<n2<<" "<<op<<" "<<n1<<" = "<<result;

	return 0;
}