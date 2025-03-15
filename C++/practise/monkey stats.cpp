#include<iostream>
using namespace std;
int total(int arr[3][5],int m,int n){
	int total=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		total+=arr[i][j];
		}
	}
	return total;
}
int average(int arr[3][5],int m,int n){
	return ((total(arr,m,n))/5);
}
int min(int arr[3][5],int m,int n){
	int minimum=arr[0][0];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(minimum>arr[i][j]){
				minimum=arr[i][j];
			}
		}
	}
	return minimum;
}
int max(int arr[3][5],int m,int n){
	int maximum=arr[0][0];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(maximum>arr[i][j]){
				maximum=arr[i][j];
			}
		}
	}
	return maximum;
}
int main(){
	string days[5]={"Monday","Tuesday","Wednesday","Thursday","Friday"};
	int m=3,n=5;
	int list[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<((i*5)+j)+1<<" Enter How many Pounds of food Monkey "<<i+1<<" has eaten on "<<days[j]<<": ";
			cin>>list[i][j];
			while(list[i][j]<0){
				cout<<"invalid input"<<endl;
				cout<<((i*5)+j)+1<<" Enter How many Pounds of food Monkey "<<i+1<<" has eaten on "<<days[j]<<": ";
				cin>>list[i][j];
			}
		}
	}	
	float average=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			average+=list[j][i];
		}
	}
	cout<<"Average amount of food eaten per day by the whole family of monkeys is: "<<average/5<<endl;
	int least=0;
	int desposible;
	for(int i=0;i<3;i++){
		desposible=0;
		for(int j=0;j<5;j++){
			desposible+=list[i][j];
			if(j==0){
				least=desposible;
			}
		}
		if(least>desposible){
			least=desposible;
		}
	}
	cout<<"The least amount of food eaten during the week by any one monkey is: "<<least;
	int greatest=0;
	for(int i=0;i<3;i++){
		desposible=0;
		for(int j=0;j<5;j++){
			desposible+=list[i][j];
			if(j==0){
				greatest=desposible;
			}
		}
		if(greatest<desposible){
			greatest=desposible;
		}
	}
	cout<<"The greatest amount of food eaten during the week by any one monkey is: "<<greatest;
	return 0;
}