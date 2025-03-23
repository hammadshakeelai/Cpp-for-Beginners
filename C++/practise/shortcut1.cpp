#include<iostream>
using namespace std;
int main(){
//	int arr[10];
//	for(arr[0]=0;arr[0]<2;arr[0]++)
for(int i=0;i<10;i++){
	for(int j=0;j<i;j++){
		cout<<"\t";
	}
	cout<<"for(arr["<<i<<"]=0;arr["<<i<<"]<2;arr["<<i<<"]++){\n";
}
	return 0;
}