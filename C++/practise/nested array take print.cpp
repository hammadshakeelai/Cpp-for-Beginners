#include<iostream>
using namespace std;
int main () {
	int n=3;
	char array[n][n];	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"enter value of array["<<i<<"]["<<j<<"] :  ";
			cin>>array[i][j];
		}
	}
//	cout<<array;print address
//  array index = baseAddress + (index * sizeoftype) 

	cout<<"-----------------------------"<<endl;
	cout<<"[ ";
	for(int i=0;i<n;i++){
		cout<<"[ ";
		for(int j=0;j<n;j++){
			cout<<array[i][j];
			if(j==(n-1)){
				break;
			}
			cout<<" , ";
		}
		cout<<" ]";
		if(i==(n-1)){
			break;
		}
		cout<<" , ";
	}
	cout<<" ]";
	return 0;
}