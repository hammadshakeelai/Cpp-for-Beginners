#include<iostream>
#include<string>
using namespace std;
void print(int list[10]){
	for(int i=0; i<10; i++){
		cout<<list[i]<<endl;
	}
}
int total(int list[10]){
	int tot;
	for(int i=0; i<10; i++){
		tot+=list[i];
	}
	return tot;
}
int max(int list[10]){
	int mx = list[0];
	for(int i=0; i<10; i++){
		if(list[i]>mx){
			mx=list[i];
		}
	}
	return mx;
}
int min(int list[10]){
	int mn = list[0];
	for(int i=0; i<10; i++){
		if(list[i]<mn){
			mn=list[i];
		}
	}
	return mn;
}
int main () {
	int list[10]={1,2,3,4,5,6,7,8,9,10};
	print(list);
	int tot = total(list);
	cout<<"total: "<<tot<<endl;
	int mx=max(list);
	cout<<"maximum: "<<mx<<endl;
	int mn=min(list);
	cout<<"minimum: "<<mn<<endl;
	return 0;
}