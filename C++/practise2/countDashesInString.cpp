#include<iostream>
using namespace std;
int main (){
	string mystring = "h-uyru-yn-thnjj-numi";
	int counter = 0;
	int wordlength = 0;
	char ch;
	for(char str1:mystring){
		wordlength++;
	}
	for(int i=0;i<wordlength;i++){
		ch = mystring[i];
		if (ch=='-'){
			counter++;
		}
	}
	cout<<counter;
	
	return 0;
}