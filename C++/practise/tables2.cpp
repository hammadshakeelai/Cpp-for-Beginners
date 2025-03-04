#include<iostream>
using namespace std;
void tables(){
	
	//learning by analogy
    int lowernum,uppernum;
    cout<<"Enter Starting Point Value: ";
    cin>>lowernum;
    cout<<"Enter Ending Point Value: ";
    cin>>uppernum;
    while (lowernum >= uppernum) {
        cout<<"Invalid inputs!!\nEnter Starting Point Value: ";
        cin>>lowernum;
        cout<<"Enter Ending Point Value: ";
        cin>>uppernum;
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
	tables();
	return 0;
}