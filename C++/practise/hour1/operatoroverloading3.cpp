#include <iostream>
using namespace std;
class Number{
	int a;
	
	public:
		Number(){
			a = 0;
		}
		Number(int A){
			a = A;
		}
		bool operator==(Number &A){
			if (this->a==A.a) return true;
			else return false;
		}
		int operator+(Number &A){
			return (this->a+A.a);
		}
		int operator-(Number &A){
			return (this->a-A.a);
		}
		int operator*(Number &A){
			return (this->a*A.a);
		}
		double operator/(Number &A){
			double c = this->a;
			return (c/A.a);
		}
		int operator&(Number &A){
			return (this->a&A.a);
		}
		int operator^(Number &A){
			return (this->a^A.a);
		}
		int operator|(Number &A){
			return (this->a|A.a);
		}
		int operator%(Number &A){
			return (this->a%A.a);
		}
		int operator!(Number &A){
			return ((this->!aA.a));
		}
		Number& operator=(int a){
			return Number(a);
		}
};
int main(){
	
	Number a(9);
	Number b(5);
	
	(a==b)?cout<<"true\n":cout<<"false\n";
	cout<<  a+b  <<endl;
	cout<<  a-b  <<endl;
	cout<<(a*b)<<endl;
	cout<<(a/b)<<endl;
	cout<<(a&b)<<endl;
	cout<<(a|b)<<endl;
	cout<<(a%b)<<endl;
	cout<<(a^b)<<endl;
	cout<<(a!b)<<endl;
	/**/
	return 0;
} 