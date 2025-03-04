#include<iostream>
using namespace std;
void tables(int lowernum,int uppernum){
	
	//learning by analogy
    
    cout<<"================"<<endl;
	for (int i = lowernum;i<=uppernum;i++){
		cout<<"Table of "<<i<<"\n================"<<endl;
		for (int j = 1;j<=10;j++){
			cout<<i<<" x "<<j<<" = "<<i*j<<"\n";
		}
		cout<<"================"<<endl;
	}
}
int main(){
	int num1,num2;
	cout<<"Enter Lower Number: ";
	cin>>num1;
	cout<<"Enter Upper Number: ";
	cin>>num2;
	while(num1>=num2){
		cout<<"Invalid Inputs. Try Again. "<<endl;
		cout<<"Enter Lower Number: ";
		cin>>num1;
		cout<<"Enter Upper Number: ";
		cin>>num2;
	}
	tables(num1,num2);
	return 0;
}