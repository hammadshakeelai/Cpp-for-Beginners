#include <iostream>
using namespace std;
int main(){

    int n;
	cout<<"Enter your Number : ";
	cin>>n;
	bool isPrime = true;
	
	for(int d=2; d<=(n/2); d++)
	{
		if(n%d == 0)
		{
			isPrime = false;
			break;
		}
	}
	
	if(isPrime)
	{
		cout<<n<<" is PRIME!\n";
	}
	else
	{
		cout<<n<<" is Not-PRIME\n";
	}

    return 0;
}