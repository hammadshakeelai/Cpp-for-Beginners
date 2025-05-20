#include <iostream>
using namespace std;
class Number {
    int value;

public:
    Number() : value(0) { }
    Number(int val) : value(val) { }
	void display() const {
    	cout << value;
	}
	int getVal(){
		return value;
	}
	void setValue(int val){
		value = val;
		cout<<"New value set: "<<getVal()<<endl;
	}
	Number operator+(Number &number){
		return Number(this->getVal()+number.getVal());
	}
	Number operator-(Number &number){
		return Number(this->getVal()-number.getVal());
	}
	Number operator*(Number &number){
		return Number(this->getVal()*number.getVal());
	}
	void operator=(Number &number){
		Number(this->value = number.value);
	}
};
int main() {
    Number numA(4);
    Number numB(6);
    numB = numA;
    numB.display();
    return 0;
}