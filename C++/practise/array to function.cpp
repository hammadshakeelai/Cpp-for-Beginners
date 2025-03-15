#include<iostream>
using namespace std;
void function(int arr[],int size){
	int total=0;
	for(int i=0;i<size;i++){
		total+=arr[i];
	}
	cout<<"total: "<<total;
}
int main(){
	int list[]={1,2,3,4,5,6,2};
	int size=(sizeof(list)/4);
	function(list,size);
	return 0;
}