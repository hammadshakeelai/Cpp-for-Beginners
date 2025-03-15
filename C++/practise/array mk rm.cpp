#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter array size: ";
	cin>>n;
	int Arr[n];
	
	for(int i=0;i<=(n-1);i++){
		cout<<"enter value of index "<<i<<": ";
		cin>>Arr[i];
	}
	cout<<"--------------------"<<endl;
	cout<<"[ ";
	for(int i=0;i<=(n-1);i++){
		cout<<Arr[i];
		if (i==(n-1)){
			break;
		}
		cout<<" ,";
	}
	cout<<" ]";
	return 0;
}