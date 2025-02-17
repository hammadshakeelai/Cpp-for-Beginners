#include <iostream>
using namespace std;
int main (){
	//prime printer
	int LowerRange,UpperRange;
	cout<<"Enter LowerRange: ";
	cin>>LowerRange;
	cout<<"Enter UpperRange: ";
	cin>>UpperRange;
	while(LowerRange>=UpperRange){
		cout<<"You Have Provided Wrong Inputs! Try Again........"<<endl;
		cout<<"Enter LowerRange: ";
		cin>>LowerRange;
		cout<<"Enter UpperRange: ";
		cin>>UpperRange;	
	}
	bool prime;
	cout<<"The Prime Number in LowerRange "<<LowerRange<<" And UpperRange "<<UpperRange<<" : ";
	for(int i = LowerRange; i<= UpperRange;i++){
		prime = true;
		//to find solution find definaton and variations
		for (int j=2; j<=(i/2);j++){
			if (i%j==0){
				prime = false;
				break;
			}
		}
		if (i==1 ||i==0){
			continue;
		}
		if (prime){
			cout<<i<<" ";
		}
	}
	
	
	
    return 0;
}