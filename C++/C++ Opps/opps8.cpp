#include<iostream>
#include<string>
//#include<string>//oop analysis and design
using namespace std;
class Student{
	public:
		string name;
		string bloodgroup;
		int studentage;
		string Class;
		
		Student(){
			name="undefined";
			bloodgroup="null";
			studentage=0;
			Class="unknown";
		}
		void Student_mk(string n,string b,int s,string c){
			name=n;
			bloodgroup=b;
			studentage=s;
			Class=c;			
		}
		void display(){
			cout<<"_____________________\n";
			cout<<"Name: "<<name<<endl;
			cout<<"Blood Group: "<<bloodgroup<<endl;
			cout<<"Age: "<<studentage<<endl;
			cout<<"Student's Class: "<<Class<<endl;
			cout<<"_____________________\n";
		}
		
};
int main(){
	Student i;
	i.display();
	string name,bloodgroup,Class;
	int age;
	cout<<"Enter name,bloodgroup,age,class : ";
	cin>>name>>bloodgroup>>age>>Class;
	i.Student_mk(name,bloodgroup,age,Class);
	i.display();	
	return 0;
}