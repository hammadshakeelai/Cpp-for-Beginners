#include<iostream>
#include<string>
#include<sstream> // Added for getline with string
using namespace std;
//void split2(string text){
//	string word = "";
//	string result[10];
//	int listp = 0;
//	for(char ch: text){
//		if (ch == ' '){
//			result[listp] = word;
//			word = "";
//		}
//		else {
//			word += ch;
//		}
//	}
//	for(string mystr : result){
//		cout<<mystr<<" ";
//	}
//}
void split3(string text){
//	string word = "";
//	string result[10];
//	int listp = 0;
//	for(char ch: text){
//		if (ch == ' '){
//			result[listp] = word;
//			word = "";
//		}
//		else {
//			word += ch;
//		}
//	}
//	for(string mystr : result){
//		cout<<mystr<<" ";
//	}
	for(char ch: text){
		if(ch==' '){
			cout<<endl;
			continue;
		}
		else{
			cout<<ch;
		}
	}
}
int textlength(string text){
	int counter = 1;
	for(char ch:text){
		if (ch==' '){
			counter++;
		}
	}
	return counter;
}
void split(string text,string array[]) {
	string word = "";
	int pointer = 0;
	for(char ch : text){
		if(ch==' '){
			array[pointer] = word;
			pointer++;
			word="";
		}
		else{
			word = word + ch;
		}
	}
	array[pointer] = word;
}
int main (){
	string text = "hi my name is sykuno i am a streamer m";
	string array[textlength(text)];
	split(text,array);
	cout<<"[ ";
	for(string str: array){
		cout<<str<<", ";
	}
	cout<<"]"<<endl;
	return 0;
}