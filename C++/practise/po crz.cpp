#include <iostream>
using namespace std;
int main (){
	double p1,p2;
	cout<<"Enter population of karachi: ";
	cin>>p1;
	cout<<"Enter population of mombai: ";
	cin>>p2;
	while(p1>=p2){
		cout<<"Invalid Inputs";
		cout<<"Enter population of karachi: ";
		cin>>p1;
		cout<<"Enter population of mombai: ";
		cin>>p2;
	}
	int g1,g2;
	cout<<"Enter Growth Rate of Karachi: ";
	cin>>g1;
	cout<<"Enter Growth Rate of mombai: ";
	cin>>g2;
	while(g2>g1){
		cout<<"Invalid Inputs";
		cout<<"Enter Growth Rate of Karachi: ";
		cin>>g1;
		cout<<"Enter Growth Rate of mombai: ";
		cin>>g2;	
	}
	int counter=0;
	while (true){
		p1+=(g1*p1/100);
		p2+=(g2*p2/100);
		counter++;
		if (p1>p2){
			break;
		}
	}
	cout<<"No. of Years "<<counter<<" in which karachi cross mombai.";
    return 0;
}