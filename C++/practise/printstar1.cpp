#include<iostream>
using namespace std;
void printStar(int x){
	for(int i=0;i<x;i++){
		cout<<"*";
	}
	cout<<endl;
}
int main(){
	int j;
	cout<<"enter j; ";
	cin>>j;
	printStar(j);
	
	return 0;
}