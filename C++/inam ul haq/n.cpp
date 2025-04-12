//variable is a named memory location
// properties and behaviour=variables and functions 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main () { 
//	ofstream outputFile;// relate a 
//	/*
//	<< insertionn operator  to write request
//	also to send data to console or file
//	cursor endof file
//	writewhere cursor blinks also endoffile move with cursor
//	os is the resource manager and manages data and memory
//	open takes control from os
//	close rerutns the control
//	close of program returns ths control 
//	cout<<"D:\program\" ;// Absolute path
//	ifstream inputFile;type name   class object
//	outputFile.open("demofile.txt")
//	\*\
//	*/
//	ofstream mansoor;
//	mansoor.open("demofile1.txt");
//
//	mansoor<<"hellow orld";
//	mansoor.close();
//	cout<<"osho";
//	
//	ofstream mansoor;
//	mansoor.open("demofile.txt");
//	string s;
//	cin>>s;
//	mansoor<<s;
//	mansoor.close();
//	cout<<"osho";
ofstream outputFile;
outputFile.open("numbers.txt");
int n1,n2,n3;
cout<<"Enter the First number: ";
cin>>n1;	
cout<<"Enter the Second number: ";	
cin>>n2;
cout<<"Enter the Last number: ";	
cin>>n3;
outputFile<<n1<<endl<<n2<<endl<<n3;

	return 0;
}