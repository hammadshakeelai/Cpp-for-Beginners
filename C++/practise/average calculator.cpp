#include<iostream>
using namespace std;
int average(int subject1,int subject2,int subject3, int subject4,int subject5){
	return((subject1+subject2+subject3+subject4+subject5)/5);
}
int main(){
	int s1,s2,s3,s4,s5;
	cout<<"Enter Marks For Subject 1:  ";
	cin>>s1;
	cout<<"Enter Marks For Subject 2:  ";
	cin>>s2;
	cout<<"Enter Marks For Subject 3:  ";
	cin>>s3;
	cout<<"Enter Marks For Subject 4:  ";
	cin>>s4;
	cout<<"Enter Marks For Subject 5:  ";
	cin>>s5;
	cout<<"Average marks are "<<average(s1,s2,s3,s4,s5);
	return 0;
}