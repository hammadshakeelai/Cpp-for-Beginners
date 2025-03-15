#include <iostream>
using namespace std;

void printf(int list[10][10]){
	cout<<"[ ";
	for(int i=0; i<10; i++){
		cout<<"[ ";
		for(int j=0; j<10; j++){
			cout<<list[i][j];
			if(j==9){
				break;
			}
			cout<<" , ";
		}
		cout<<" ] ";
		if(i==9){
			break;
		}
		cout<<" , ";
		if(i!=0 & i%2==1){
			cout<<endl;
			cout<<"  ";
		}
	}
	cout<<" ] "<<endl;
}
int total(int list[10][10]){
	int tot;
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			tot+=list[i][j];
		}
	}
	return tot;
}
int max(int list[10][10]){
	int mx = list[0][0];
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(list[i][j]>mx){
				mx=list[i][j];
			}
		}
	}
	return mx;
}
int min(int list[10][10]){
	int mn = list[0][0];
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(list[i][j]<mn){
				mn=list[i][j];
			}
		}
	}
	return mn;
}
int average(int list[2][2],int x,int y){
	float avg;
	
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			avg+=list[i][j];
		}
	}
	float z=(x*y);
	avg/=(z);
	return avg;
}
int main(){
	int list[2][2] = {{1,2},{3,4}};
	cout<<"average: "<<average(list,2,2);
	return 0;
}