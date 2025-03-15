#include<iostream>
using namespace std;
int main(){
	int total;
	for(int i=0;i<3;i++){
		total=0;
		for(int j=0;j<10;j++){
			total+=(i+j);
		}
		cout<<total;
	}
	return 0;
}