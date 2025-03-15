#include <iostream>
using namespace std;
int main(){
	//both arrays
	string subject[5]={"Maths","English","OPPs","Physics","Urdu"};
	int marks[5];
	//cin marks
	for(int i=0;i<5;i++){
		cout<<"Enter Marks for "<<subject[i]<<" : ";
		cin>>marks[i];
	}
	//cout marks with subject
	cout<<"================"<<endl;
	// TOTAL AVERAGE MAX
	int total=0;
	float average;
	int max=marks[0];
	string subj="Maths";
	// FIND TOTAL MAX AVERAGE
	for(int i=0;i<5;i++){
		cout<<subject[i]<<" Marks : "<<marks[i]<<endl;
		total+=marks[i];
		average+=marks[i];
		if(marks[i]>max){
			max=marks[i];
			subj=subject[i];
		}	
	}
	// cout total max average
	cout<<"-------------------"<<endl;
	cout<<"Total Marks \t: "<<total<<endl;
	average/=5;
	cout<<"Average Marks \t: "<<average<<endl;
	cout<<"Heighest Marks are "<<max<<" in the Subject of "<<subj;
	return 0;
}