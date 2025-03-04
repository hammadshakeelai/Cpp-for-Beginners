#include <iostream>
using namespace std;
int main(){
	int i = 0;
	int a = 1;
	int b = a+9;
	int enter[4];
	while(i<5){
		b=a+9;
		while(a<=(b)){
			cout<<"Item No. "<<a<<endl;
			a++;
		}
		cin>>enter[i];
		i++;
	
	}
	
return 0;
}