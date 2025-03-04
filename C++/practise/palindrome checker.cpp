#include <iostream>
using namespace std;

void palindrome_checker(string mystring1,int size1){

	bool palindrome = true;
	for(int i=0; i<(size1/2);i++){
		// cout<<" At "<<i<<" position is "<<mystring[i]<<endl;
		char str1,str2;
		str1 = mystring1[i];
		str2 = mystring1[size1-i-1];
		if (str1 != str2){
			palindrome = false;
		}
	}
	(palindrome)? cout<<"Your String is A Palindrome.": cout<<"Your String is not A Palindrome.";

}
int main() {
	string mystring;
	cout<<"Enter Your String:  ";
	getline(cin,mystring);
	int size;
	cout<<"Enter Size of your string:  ";
	cin>>size;
	palindrome_checker(mystring,size);
	
	return 0;
}
