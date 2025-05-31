#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int rows, cols;
	
	cout<<"Enter No of Rows : ";
	cin>>rows;
	cout<<"Enter No of Cols : ";
	cin>>cols;
	
	int Data[rows][cols];
	
	for(int r=0; r<rows; r++)
	{
		cout<<"Enter Data in Row-"<<r+1<<" : \n";
		for(int c=0; c<cols; c++)
		{
			cout<<"Data["<<r<<"]["<<c<<"] : ";
			cin>>Data[r][c];
		}
	}
	
	cout<<"Data in Matrix : \n\n";
	for(int r=0; r<rows; r++)
	{		
		for(int c=0; c<cols; c++)
		{
			cout<<Data[r][c]<<"\t";
		}
		cout<<"\n";
	}
	
	return 0;
}