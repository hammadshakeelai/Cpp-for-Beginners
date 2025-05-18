#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;
int main(){
//	Exception Handling
/*
	try {
		cout<<"runs correctly";;
	} catch (ExceptionType1 e1) {
		cout<<"exception1 occurred";
	}
*/

//----------------------------------------
//	// code 1
//	int x;
//	cout<<"enter x: ";
//	cin>>x;
//	try{
//		if (x==0){
//			throw "division by zero!";
//		}
//		cout<< 10/x ;
//	} catch (const char* msg) { //it needs to be like this//char* is an array pointer and its constant so that it doesnt change at runtime
//		cerr << "Error: "<<msg<<endl; // cerr shows that this cout statement is meant for an error
//	}
//----------------------------------------
//  // code 2
//	vector<int> arr[5]={1,2,3,4,5};
//	int index;
//	cout<<"enter index: ";
//	cin>>index;
//	try {
//		cout<<"value at index "<<index<<": ">>arr.at(index)<<endl;
//	} catch (const out_of_range& e) { //e is an object //outofrange is a variable that uses the original variable and uese it as an object to ask e.what() error occurred 
//		cerr <<"exception caught: "<<e.what()<<endl;
//	}
//----------------------------------------
//	//code 3
//	const double pi = 3.14159;
//	cout<<pi;
//----------------------------------------

	return 0;
	
	// in oop main or in class functions do try catch
	//only runtime error
}