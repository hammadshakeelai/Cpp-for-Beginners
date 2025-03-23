#include<iostream>
using namespace std;

int main(){
	int row,col;
	cout<<"enter row : ";
	cin>>row;
	cout<<"enter col : ";
	cin>>col;
	int arr[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"enter arr["<<i<<"]["<<j<<"]: ";
			cin>>arr[i][j];
		}
	}
	int sq;
	if(row<col){
		sq=row;
		
	}else{
		sq=col;
	}
	int sum=0;
	for(int i=0;i<sq;i++){
		sum+=arr[i][i];
}
	//---------------------------------------------
	cout<<"sum is "<<sum;
return 0;
}