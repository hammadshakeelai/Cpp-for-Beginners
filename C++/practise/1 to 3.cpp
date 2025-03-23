#include <iostream>
using namespace std;

int main(){
	int row,col;
	cout<<"enter row : ";
	cin>>row;
	cout<<"enter col : ";
	cin>>col;
	int arr[row][col];
	
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cout<<"enter arr["<<i<<"]["<<j<<"] : ";
			cin>>arr[i][j];
		}
	}
	cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
	int t;
	for(int i=0;i<row;i++){
		t=arr[2][i];
		arr[2][i]=arr[0][i];
		arr[0][i]=t;
		
	}
	cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;

}