#include<iostream>
using namespace std;
int main () {
	int n=3;
	char array[n][n];	
	for(int i=0;i<n;i++){	
			cout<<"enter value of array["<<i<<"] :  ";
			cin>>array[i];
	}

	cout<<"-----------------------------"<<endl;
	cout<<"[ ";
	for(int i=0;i<n;i++){
		cout<<array[i];
		if(i==(n-1)){
			break;
		}
		cout<<" , ";
	}
	cout<<" ]";
	return 0;
}