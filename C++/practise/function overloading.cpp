#include<iostream>
#include <typeinfo>
using namespace std;
void sum(int a,int b){
	cout<<typeid(a).name()<<": "<<a<<"\t + \t"<<typeid(b).name()<<": "<<b<<" = "<<a+b<<endl;
}
void sum(double a,int b){
	cout<<typeid(a).name()<<": "<<a<<"\t + \t"<<typeid(b).name()<<": "<<b<<" = "<<a+b<<endl;
}
void sum(int a,double b){
	cout<<typeid(a).name()<<": "<<a<<"\t + \t"<<typeid(b).name()<<": "<<b<<" = "<<a+b<<endl;
}
void sum(double a,double b){
	cout<<typeid(a).name()<<": "<<a<<"\t + \t"<<typeid(b).name()<<": "<<b<<" = "<<a+b<<endl;
}
int
int main(){
//	sum(1,2);
//	sum(1.3,2);
//	sum(1,2.1);
//	sum(1.2,2.2);
//	bool isdouble1,isdouble2;
//	cout<<"which first value will you give, double or integer (d/i): ";
//	cin>>isdouble1;
//	cout<<"what second value will you give, double or integer (d/i): ";
//	cin>>isdouble2;
//	
//	if(isdouble1)
//	{
//		double first;
//		if(isdouble2)
//		{
//			double second;
//			cout<<"enter first value: ";
//			cin>>first;
//			cout<<"enter second value: ";
//			cin>>second;
//			sum(first,second);
//		}
//		else
//		{
//			int second;
//			cout<<"enter first value: ";
//			cin>>first;
//			cout<<"enter second value: ";
//			cin>>second;
//			sum(first,second);
//		}
//	}
//	else
//	{
//		int first;
//		if(isdouble2)
//		{
//			double second;
//			cout<<"enter first value: ";
//			cin>>first;
//			cout<<"enter second value: ";
//			cin>>second;
//			sum(first,second);
//		}
//		else
//		{
//			int second;
//			cout<<"enter first value: ";
//			cin>>first;
//			cout<<"enter second value: ";
//			cin>>second;
//			sum(first,second);
//		}
//	}
	char isdouble1,isdouble2;
	cout<<"which first value will you give, double or integer (d/i): ";
	cin>>isdouble1;
	cout<<"what second value will you give, double or integer (d/i): ";
	cin>>isdouble2;
	if(isdouble1=='i' && isdouble2=='i'){
		int first,second;
		cout<<"enter first value: ";
		cin>>first;
		cout<<"enter second value: ";
		cin>>second;
		sum(first,second);		
	}
	else if(isdouble1=='d' && isdouble2=='i'){
		double first;
		int second;
		cout<<"enter first value: ";
		cin>>first;
		cout<<"enter second value: ";
		cin>>second;
		sum(first,second);		
	}
	else if(isdouble1=='i' && isdouble2=='d'){
		int first;
		double second;
		cout<<"enter first value: ";
		cin>>first;
		cout<<"enter second value: ";
		cin>>second;
		sum(first,second);		
	}
	else if(isdouble1=='d' && isdouble2=='d'){
		double first,second;
		cout<<"enter first value: ";
		cin>>first;
		cout<<"enter second value: ";
		cin>>second;
		sum(first,second);		
	}
	else{
		cout<<"invalid inputs...try again\n";
		main();
	}
	
		
	
	return 0;
}