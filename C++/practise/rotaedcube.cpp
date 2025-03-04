#include<iostream>
using namespace std;
void printStar(int x){
	for(int i=0;i<x;i++){
		cout<<"*";
	}
}
void printSpace(int x){
	for(int i=0;i<x;i++){
		cout<<" ";
	}
}
int main(){
	int j;
	cout<<"enter j; ";
	cin>>j;
	j/=2;
	for (int i=1;i<j;i++){
		printSpace(j-i);
		printStar(i);
		printStar(i-1);
		cout<<endl;
	}
	for (int i=j;i>0;i--){
		printSpace(j-i);
		printStar(i);
		printStar(i-1);
		cout<<endl;
	}
	
	return 0;
}