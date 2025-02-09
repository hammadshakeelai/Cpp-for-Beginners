#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string name;
	cout<<"Enter your name:  ";
	getline(cin,name);
	string program;
	cout<<"\nEnter your program:  ";
	getline(cin,program);
	int serialnumber=1;
	int sub1;
	int sub2;
	int sub3; 
	int sub4; 
	int sub5;
	cout<<"\nEnter Your Marks for Math: ";
	cin>>sub1;
	cout<<"\nEnter Your Marks for English: ";
	cin>>sub2;
	cout<<"\nEnter Your Marks for ICT: ";
	cin>>sub3;
	cout<<"\nEnter Your Marks for Programming: ";
	cin>>sub4;
	cout<<"\nEnter Your Marks for OOPS: ";
	cin>>sub5;
	float cgpa;
	cgpa=(sub1+sub2+sub3+sub4+sub4);
	cgpa/=125.0;
	
	
	
	cout<<"\n***********************************************************************\n";
	cout<<"* Name: "<<name<<"\t\t\t\t\t\t"<<"Program: "<<program;
	cout<<"\n***********************************************************************\n";
	cout<<"* Serial No.\t\tSubjects\t\tMarks";
	cout<<"\n***********************************************************************";

	cout<<" *\n\t"<<serialnumber<<"\t\tMaths\t\t\t"<<sub1;
	serialnumber++;
	cout<<" *\n\t"<<serialnumber<<"\t\tEnglish\t\t\t"<<sub2;
	serialnumber++;

	cout<<" *\n\t"<<serialnumber<<"\t\tICT\t\t\t"<<sub3;
	serialnumber++;

	cout<<" *\n\t"<<serialnumber<<"\t\tProgramming\t\t"<<sub4;
	serialnumber++;

	cout<<" *\n\t"<<serialnumber<<"\t\tOOPS\t\t\t"<<sub5;
	
	cout<<"\n***********************************************************************\n";
	cout<<"* Total: \t"<<sub1+sub2+sub3+sub4+sub5;
	cout<<"\n***********************************************************************\n";

	
	cout<<"* CGPA: "<<cgpa;
	cout<<"\n* Average: "<<(sub1+sub2+sub3+sub4+sub4)/5;
	cout<<"\n***********************************************************************\n";

	return 0;
}