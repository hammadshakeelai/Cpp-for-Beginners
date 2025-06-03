#include <iostream>
using namespace std;

int main()
{
	int arr[12];
	for(int i=0;i<12;i++)
		arr[i]=0;
	for(int i = 1 ; i <= 6 ; i++ ){
		for(int j = 1 ; j <= 6 ; j++ ){
				arr[i+j-1]++ ;
		}
		
	}
	for(int i=0;i<12;i++)
		cout<<"Value "<<i+1<<((i>8)?" ":"  ")<<" at position arr["<<i<<"]"<<((i>9)?" ":"  ")<<"has "<<arr[i]<<"/36"<<((arr[i]>9)?" ":"  ")<<"chance of happening in 3 dice throw---"<<(double)arr[i]/36*100<<endl;
	return 0;
}
