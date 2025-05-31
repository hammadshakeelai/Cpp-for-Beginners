#include <iostream>
#include <string>
using namespace std;
class Bestie{
	public:
		string fullName;
		int age;
		char status;
		void wishbirthday(){
			cout<<"Happy Birthday!!! "<<fullName<<endl;
			cout<<"now you are "<<++age<<" years old."<<endl;
			cout<<"Friendship Status: "<<status<<endl;
		}
};
int main(){
	Bestie saad;
	saad.fullName="Saad Mustafa";
	saad.age=24;
	saad.status='S';
	saad.wishbirthday();
	return 0;
}