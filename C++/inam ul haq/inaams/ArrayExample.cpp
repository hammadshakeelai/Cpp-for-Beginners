#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	string Subject[] = {"Math","English","OOP","Physics","Urdu"};
	int Marks[5];
	
	cout<<"Enter your Marks!\n";
	
	//Population Loop
	for(int i=0; i<5; i++)
	{
		cout<<"\nEnter Marks for "<<Subject[i]<<" : ";
		cin>>Marks[i];
	}
	
	cout<<"\n============================";
	
	int total=0;
	
	
	int hi=0, hm=Marks[0];
	
	//Display Loop
	for(int i=0; i<5; i++)
	{
		cout<<"\n"<<Subject[i]<<" Marks : "<<Marks[i];
		
		total = total + Marks[i];
		
		if(Marks[i] > hm)
		{
			hm = Marks[i];
			hi = i;
		}
	}
	
	cout<<"\n-----------------------------------";
	cout<<"\nTotal Marks   : "<<total;
	cout<<"\nAverage Marks : "<<total/5.0;
	cout<<"\nHighest Marks are "<<Marks[hi]<<" in the Subject of "<<Subject[hi];
	cout<<"\n-----------------------------------";
	
	
	
	
	
	return 0;
}