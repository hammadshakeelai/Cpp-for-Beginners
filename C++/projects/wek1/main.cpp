#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float pounds,shillings,pence;
	cout<<"Enter pounds: ";
	cin>>pounds;
	cout<<"\nEnter shillings: ";
	cin>>shillings;
	cout<<"\nEnter pence: ";
	cin>>pence;
	shillings+=(pence/12);
	pounds+=(shillings/20);
	pounds*=100;
	pounds=round(pounds);
	pounds/=100;
	char ch =156;
	cout<<"\nThat is Equal to "<<ch<<pounds;

	return 0;
}
