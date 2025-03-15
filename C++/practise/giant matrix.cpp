#include<iostream>
using namespace std;

int total(int list[4][4]){
	int tot;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			tot+=list[i][j];
		}
	}
	return tot;
}
int max(int list[4][4]){
	int mx = list[0][0];
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(list[i][j]>mx){
				mx=list[i][j];
			}
		}
	}
	return mx;
}
int min(int list[4][4]){
	int mn = list[0][0];
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(list[i][j]<mn){
				mn=list[i][j];
			}
		}
	}
	return mn;
}
int main (){
	int list[4][4];
	for(int i=0;i<4;i++){
		cout<<"row: "<<i+1<<endl;
		for(int j=0;j<4;j++){
			cout<<"enter value of list["<<i<<"]["<<j<<"]: ";
			cin>>list[i][j];
		}
	}
//	printf(list);
for(int i=0;i<4;i++){
	
	for(int j=0;j<4;j++){
		cout<<list[i][j]<<"\t";
		
	}
	cout<<endl;
}
	cout<<"total: "  <<total(list)<<endl;
	cout<<"maximum: "<<max(list)  <<endl;
	cout<<"minimum: "<<min(list)  <<endl;
	return 0;
}