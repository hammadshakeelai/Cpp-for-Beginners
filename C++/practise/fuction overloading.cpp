#include<iostream>
using namespace std;
void myfunction(string y="no",int z=0){
	cout<<y<<" "<<z;
}
void myfunction(int y,int z=0){
	cout<<y<<" "<<z;
}
int main(){
	myfunction(77,2);
	return 0;
}