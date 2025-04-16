#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
int main() {
	
	//to generate 200 random numbers in range 0-100 and write on marks.txt
	srand(time(0));
	
	ofstream outputfile; 
	outputfile.open("marks.txt");
		for(int i=0;i<200;i++){
			outputfile << rand() % 101 << endl;
		}
		
	outputfile.close();

	//to filter out fail from pass into two different files
	ifstream inputfile;
	inputfile.open("marks.txt");
	
		ofstream ofpass;
		ofpass.open("pass.txt");
		
		ofstream offail;
		offail.open("fail.txt");
		
		int marks;
		while(inputfile >> marks){
			//cout<<marks<<endl;
			if(marks>=50){
				ofpass << marks << endl;
			}
			else{
				offail << marks << endl;
			}
		}
		
		ofpass.close();
		offail.close();
	inputfile.close();


	//to read pass.txt and fail.txt to count pass fail and find min max
	ifstream inputpass;
	inputpass.open("pass.txt");
	ifstream inputfail;
	inputfail.open("fail.txt");
	
	int pass=0,fail=0,max=0,min=100;
		while(inputpass >> marks){
			pass++;
			if(max<marks){
				max=marks;
			}
		}
		while(inputfail >> marks){
			fail++;
			if(min>marks){
				min=marks;
			}
		}
		
	inputpass.close();
	inputfail.close();
	
	cout<<fail<<" people have failed."<<endl;
	cout<<pass<<" people have passed."<<endl;
	cout<<"Minimum Marks are "<<min<<endl;
	cout<<"Maximum Marks are "<<max<<endl;
	return 0;
}