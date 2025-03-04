#include<iostream>
using namespace std;
void tables(int lowernum,int uppernum){
	
	//learning by analogy
    if (uppernum < lowernum){
    	int table;
    	table = uppernum;
    	uppernum = lowernum;
    	lowernum=table;
	}
    
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
	tables(5,6);
	return 0;
}