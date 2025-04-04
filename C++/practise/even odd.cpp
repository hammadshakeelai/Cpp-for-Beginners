#include <iostream>
using namespace std;

int main() {
	int y;
	while(1){
		cout<<"enter a number: ";
		cin>>y;
		while(y<0){
			cout<<"negative numbers not suported by programme, try again... \n enter a number: ";
			cin>>y;			
		}
		if((y&1)==0){
			cout<<" number was even\n";
		}
		else{
			cout<<" number was odd\n";			
		}
	}
    return 0;
}
