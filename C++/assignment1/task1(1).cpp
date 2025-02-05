#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int pounds,shillings,pence;
	cout<<"Enter pounds: ";
	cin>>pounds;
	cout<<"\nEnter shillings: ";
	cin>>shillings;
	cout<<"\nEnter pence: ";
	cin>>pence;
    pence+=(pounds*20*12)+(shillings*12);
    float NewPounds = pence;
    NewPounds/=240;
    NewPounds*=100;
    NewPounds=round(NewPounds)
    NewPounds/=100;

	char ch =156;
	cout<<"\nThat is Equal to "<<ch<<" "<<NewPounds;
    return 0;
}