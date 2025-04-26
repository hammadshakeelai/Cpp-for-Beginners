#include<iostream>
using namespace std;
class Parent{
	protected:
		int ID;	
};
class child: public Parent{
	public:
		void setID(int id){
			ID=id;
		}
		int getID(){
			return ID;
		}
};
int main(){
	
	child obj1;
	obj1.setID(85);
	cout<<"ID: "<<obj1.getID()<<endl;
	
	return 0;
}