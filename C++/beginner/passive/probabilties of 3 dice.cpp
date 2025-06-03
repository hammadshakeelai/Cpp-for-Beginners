#include <iostream>
using namespace std;

int main()
{
	int arr[18];
	for(int i=0;i<18;i++)
		arr[i]=0;
	for(int i = 1 ; i <= 6 ; i++ ){
		for(int j = 1 ; j <= 6 ; j++ ){
			for(int k =1 ; k <= 6 ; k++ ){
				arr[i+j+k-1]++ ;
			}
		}
	}
	for(int i=0;i<18;i++)
		cout<<"Value "<<i+1<<((i>8)?" ":"  ")<<" at position arr["<<i<<"]"<<((i>9)?" ":"  ")<<"has "<<arr[i]<<"/216"<<((arr[i]>99)?" ":(arr[i]>9?"  ":"   "))<<"chance of happening in 3 dice throw---"<<(double)arr[i]/216*100<<endl;
	return 0;
}
