#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	int size = 10;
	
	int List[5];
	//int Marks[size];
	//cout<<List;
	
//	cout<<"Enter Value at 0 : ";
//	cin>>List[0];
//	cout<<"Enter Value at 1 : ";
//	cin>>List[1];
//	cout<<"Enter Value at 2 : ";
//	cin>>List[2];
//	cout<<"Enter Value at 3 : ";
//	cin>>List[3];
//	cout<<"Enter Value at 4 : ";
//	cin>>List[4];
////	
//////	
//	cout<<"\n\nThe Values at Array : \n";
//	cout<<List[0]<<" ";
//	cout<<List[1]<<" ";
//	cout<<List[2]<<" ";
//	cout<<List[3]<<" ";
//	cout<<List[4]<<" ";

	//Population Loop
//	for(int i=0; i<=4; i++)
//	{
//		cout<<"Enter Value at index-"<<i<<" : ";
//		cin>>List[i];
//	}
	
	
	//Dislay Loop
//	for(int i=0; i<=4; i++)
//	{
//		cout<<"\nElement at index-"<<i<<" : "<<List[i];
//	}

	int values[] = {2,3,6,8,9,10,45,34,12};  //Initializer Array
//	
	cout<<"My Array Elements : \n";
	for(int i=0; i<9; i++)
	{
		cout<<values[i]<<" ";
		
	}
//	
	int TOTAL;
	for(int i=0; i<9; i++)
	{
		TOTAL += values[i];
	}
	
	cout<<"\nThe TOTAL is : "<<TOTAL;
	
	
	
	return 0;
}